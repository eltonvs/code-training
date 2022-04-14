/**
 * @param {number} n
 * @return {number[]}
 */
var countBits = function (n) {
  const answer = [];
  for (let i = 0; i <= n; i++) {
    const count = (i & 1) + (answer[i >> 1] || 0);
    answer.push(count);
  }
  return answer;
};
