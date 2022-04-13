/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
  const complements = {};
  for (let i in nums) {
    const complement = target - nums[i];
    if (nums[i] in complements) {
      return [i, complements[nums[i]]];
    }
    complements[complement] = i;
  }
};
