/**
 * @param {number[][]} intervals
 * @param {number[]} newInterval
 * @return {number[][]}
 */
var insert = function (intervals, newInterval) {
  const answer = [];
  let isHandled = false;
  for (let interval of intervals) {
    if (isHandled) {
      const lastAddedInterval = answer[answer.length - 1];
      if (lastAddedInterval && interval[0] <= lastAddedInterval[1]) {
        lastAddedInterval[1] = Math.max(lastAddedInterval[1], interval[1]);
      } else {
        answer.push(interval);
      }
    } else {
      const isBefore = newInterval[1] < interval[0];
      const isOverlapping =
        (newInterval[0] >= interval[0] && newInterval[0] <= interval[1]) ||
        (interval[0] >= newInterval[0] && interval[0] <= newInterval[1]) ||
        (newInterval[1] >= interval[0] && newInterval[1] <= interval[1]) ||
        (interval[1] >= newInterval[0] && interval[1] <= newInterval[1]);
      if (isOverlapping) {
        answer.push([
          Math.min(newInterval[0], interval[0]),
          Math.max(newInterval[1], interval[1]),
        ]);
        isHandled = true;
      } else if (
        answer.length > 0
          ? newInterval[0] > answer[answer.length - 1][1] && isBefore
          : isBefore
      ) {
        answer.push(newInterval);
        answer.push(interval);
        isHandled = true;
      } else {
        answer.push(interval);
      }
    }
  }
  if (!isHandled) {
    answer.push(newInterval);
  }

  return answer;
};
