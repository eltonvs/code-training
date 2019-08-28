/*
Enter your query here.
*/
select concat(name, "(", left(occupation, 1), ")") as names
from occupations
order by name;
select concat("There are a total of ", COUNT(name), " ", LOWER(occupation), "s.") as result
from occupations
group by occupation
order by COUNT(name) asc, occupation asc
