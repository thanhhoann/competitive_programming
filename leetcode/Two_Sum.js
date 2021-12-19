/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

const twoSum = (nums, target) => {
  let set = new Set();
  for (let idx in nums) {
    if (set.has(nums[idx]))
      return [nums.indexOf(target - Number(nums[idx])), Number(idx)];
    else set.add(target - nums[idx]);
  }
};
