const CLOSING_TO_OPENING = {
  ")": "(",
  "]": "[",
  "}": "{",
};

/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
  const stack = [];
  for (let i = 0; i < s.length; i++) {
    const curr = s[i];
    if (Object.values(CLOSING_TO_OPENING).includes(curr)) {
      stack.push(curr);
    } else {
      const lastElement = stack[stack.length - 1];
      if (lastElement !== CLOSING_TO_OPENING[curr]) {
        return false;
      } else {
        stack.pop();
      }
    }
  }

  return stack.length === 0;
};
