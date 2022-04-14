/**
 * @param {number} n - a positive integer
 * @return {number} - a positive integer
 */
var reverseBits = function (n) {
  let answer = 0;
  for (let i = 0; i < 32; i++) {
    answer = (answer << 1) | ((n >> i) & 1);
  }
  // convert to unsigned int
  return answer >>> 0;
};
