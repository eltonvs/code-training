const A_CC = "a".charCodeAt(0);
const Z_CC = "z".charCodeAt(0);
const ZERO_CC = "0".charCodeAt(0);
const NINE_CC = "9".charCodeAt(0);

/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function (s) {
  let filteredString = "";
  for (let i = 0; i < s.length; i++) {
    const currChar = s[i].toLowerCase();
    const currCharCode = currChar.charCodeAt(0);
    if (
      (currCharCode >= A_CC && currCharCode <= Z_CC) ||
      (currCharCode >= ZERO_CC && currCharCode <= NINE_CC)
    ) {
      filteredString += currChar;
    }
  }

  for (let i = 0; i < filteredString.length / 2; i++) {
    if (filteredString[i] !== filteredString[filteredString.length - i - 1]) {
      return false;
    }
  }
  return true;
};
