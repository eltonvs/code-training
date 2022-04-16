/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
  if (s.length !== t.length) {
    return false;
  }

  const letterCount = {};
  for (let i = 0; i < s.length; i++) {
    const currCharS = s[i];
    if (currCharS in letterCount) {
      letterCount[currCharS] += 1;
    } else {
      letterCount[currCharS] = 1;
    }
    const currCharT = t[i];
    if (currCharT in letterCount) {
      letterCount[currCharT] -= 1;
    } else {
      letterCount[currCharT] = -1;
    }
  }

  return Object.values(letterCount).every((x) => x === 0);
};
