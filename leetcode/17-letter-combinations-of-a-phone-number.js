const digitToLetters = {
  2: ["a", "b", "c"],
  3: ["d", "e", "f"],
  4: ["g", "h", "i"],
  5: ["j", "k", "l"],
  6: ["m", "n", "o"],
  7: ["p", "q", "r", "s"],
  8: ["t", "u", "v"],
  9: ["w", "x", "y", "z"],
};

/**
 * @param {string} digits
 * @return {string[]}
 */
var letterCombinations = function (digits) {
  const result = [];
  if (digits.length === 0) {
    return result;
  }
  const possibleLetters = digitToLetters[digits[0]];
  const rest = digits.slice(1);
  if (rest.length === 0) {
    return possibleLetters;
  }
  const remainingCombinations = letterCombinations(rest);
  for (let letter of possibleLetters) {
    result.push(...remainingCombinations.map((str) => letter + str));
  }
  return result;
};
