/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function (nums, target) {
  let left = 0;
  let right = nums.length;

  while (left < right) {
    const middle = Math.floor((left + right) / 2);
    const currNum = nums[middle];
    if (currNum === target) {
      return middle;
    } else if (currNum < target) {
      left = middle + 1;
    } else {
      right = middle;
    }
  }
  return -1;
};
