/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var addStrings = function (num1, num2) {
  const zeroCharCode = "0".charCodeAt(0);
  let result = "";
  let remainder = 0;

  let num1Len = num1.length;
  let num2Len = num2.length;
  for (let i = 0; i < Math.max(num1Len, num2Len); i++) {
    const currDigit1 =
      (num1.charCodeAt(num1Len - i - 1) || zeroCharCode) - zeroCharCode;
    const currDigit2 =
      (num2.charCodeAt(num2Len - i - 1) || zeroCharCode) - zeroCharCode;
    const sum = currDigit1 + currDigit2 + remainder;
    const val = sum % 10;
    remainder = Math.floor(sum / 10);
    result = String(val) + result;
  }
  if (remainder) {
    result = String(remainder) + result;
  }
  return result;
};
