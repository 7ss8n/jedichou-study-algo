// mutator-arr6.js
// removing elements from an array
var nums = [9,1,2,3,4,5];
for (var i=0; i<nums.length; ++i)
	nums[i] = nums[i+1];
console.log(nums);

// notice output:
// [ 1, 2, 3, 4, 5, undefined ]
