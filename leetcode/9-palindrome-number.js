/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
  if (x < 0) return false;

  let reverse = 0;
  let x_cp = x;
  while (x_cp > 0) {
    reverse = reverse * 10 + (x_cp % 10);
    x_cp = Math.floor(x_cp / 10);
  }
  return x === reverse;
};
