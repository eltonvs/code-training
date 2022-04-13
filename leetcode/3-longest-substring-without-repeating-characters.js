/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
  let records = new Set();
  let longestLen = 0;
  let slow = 0;
  let fast = 0;
  const strLen = s.length;

  while (fast < strLen) {
    if (records.has(s[fast])) {
      const currLen = records.size;
      if (currLen > longestLen) {
        longestLen = currLen;
      }

      while (s[slow] !== s[fast]) {
        records.delete(s[slow]);
        slow += 1;
      }
      slow += 1;
    } else {
      records.add(s[fast]);
    }
    fast += 1;
  }

  const finalLen = records.size;
  return finalLen > longestLen ? finalLen : longestLen;
};
