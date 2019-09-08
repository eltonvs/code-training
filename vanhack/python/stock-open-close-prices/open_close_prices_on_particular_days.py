from urllib.request import Request
from urllib.request import urlopen
from urllib.error import URLError
import json


months = [
    'January', 'February', 'March', 'April', 'May', 'June',
    'July', 'August', 'September', 'October', 'November', 'December'
]
weekdays = ['Sunday', 'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday']

def week_day(day, month, year):
    monthly_offset = [0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334]
    after_feb = month <= 2
    aux = year - 1700 - after_feb
    # day_of_week for 1700/1/1 = 5, Friday
    day_of_week = 5
    # partial sum of days betweem current date and 1700/1/1
    day_of_week += (aux + after_feb) * 365
    # leap year correction
    day_of_week += aux // 4 - aux // 100 + (aux + 100) // 400
    # sum monthly and day offsets
    day_of_week += monthly_offset[month - 1] + (day - 1)
    return day_of_week % 7

def make_request(date_filter, page=1):
    request_obj = Request(f'https://jsonmock.hackerrank.com/api/stocks/search?date={date_filter}&page={page}')
    request = urlopen(request_obj)
    return json.loads(request.read())

def get_data_from_month(month, year):
    date_filter = f'{month.title()}-{year}' if month else year
    total_pages = 1
    page = 0
    final_data = []
    while page < total_pages:
        data = make_request(date_filter, page + 1)
        total_pages = data['total_pages']
        page += 1
        final_data += data['data']
    return final_data

def to_date_tuple(date_string):
    d, _m, y = date_string.split('-')
    return int(d), months.index(_m.title()) + 1, int(y)

def date_compare(dt1, dt2):
    d1, m1, y1 = dt1
    d2, m2, y2 = dt2

    if y1 == y2:
        if m1 == m2:
            return 0 if d1 == d2 else -1 if d1 < d2 else 1
        return -1 if m1 < m2 else 1
    return -1 if y1 < y2 else 1

def filter_data(data, weekday, first_date, last_date):
    date_filter = lambda date_tuple: date_compare(first_date, date_tuple) <= 0 and date_compare(last_date, date_tuple) >= 0
    weekday_filter = lambda date_tuple: week_day(*date_tuple) == weekday
    return (
        d for d in data
        if date_filter(to_date_tuple(d['date'])) and weekday_filter(to_date_tuple(d['date']))
    )

def print_data(data):
    for d in data:
        print(d['date'], d['open'], d['close'])

def openAndClosePrices(firstDate, lastDate, weekDay):
    # The API info is available for Monday to Friday only
    if weekDay in {'Saturday', 'Sunday'}:
        return

    first_date_t = to_date_tuple(firstDate)
    last_date_t = to_date_tuple(lastDate)
    weekday_idx = weekdays.index(weekDay.title())

    d0, m0, y0 = first_date_t
    d1, m1, y1 = last_date_t

    data = []
    for y in range(y0, y1 + 1):
        initial_month = m0 if y == y0 else 1
        final_month = m1 if y == y1 else 12
        if initial_month == 1 and final_month == 12:
            data += get_data_from_month(None, y)
            continue
        for m in range(initial_month, final_month + 1):
            data += get_data_from_month(months[m - 1], y)

    filtered_data = filter_data(data, weekday_idx, first_date_t, last_date_t)
    print_data(filtered_data)
