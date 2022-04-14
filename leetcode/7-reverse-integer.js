/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {
  const max = 2 ** 31 - 1;
  const multiplier = x < 0 ? -1 : 1;
  let reversed = 0;
  x = x * multiplier;
  while (x != 0) {
    const lastDigit = x % 10;
    reversed = reversed * 10 + lastDigit;
    x = Math.floor(x / 10);
  }
  return reversed > max ? 0 : reversed * multiplier;
};
