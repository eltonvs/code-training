/**
 * @param {string} s
 * @return {number[]}
 */
var partitionLabels = function (s) {
  const lastIndices = {};

  for (let i = 0; i < s.length; i++) {
    lastIndices[s[i]] = i;
  }

  const answer = [];
  let currStart = 0;
  let currEnd = 0;

  for (let i = 0; i < s.length; i++) {
    currEnd = Math.max(currEnd, lastIndices[s[i]]);
    if (i === currEnd) {
      answer.push(currEnd - currStart + 1);
      currStart = currEnd = i + 1;
    }
  }
  return answer;
};
