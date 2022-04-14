/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function (nums) {
  let sum = 0;
  for (let num of nums) {
    sum += num;
  }
  const len = nums.length;
  return (len * (len + 1)) / 2 - sum;
};
