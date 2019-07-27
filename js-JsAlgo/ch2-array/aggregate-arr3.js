// aggregate-arr3.js
// deeply copy
function cp(arr1, arr2) {
	for (var i=0; i<arr1.length; ++i)
		arr2[i] = arr1[i];
}

var nums = [], samenums = [];
for (var i=0; i<100; ++i) nums[i]=i+1;
cp(nums, samenums);
nums[0] = 400;

console.log("nums: " + nums);
console.log("samenums: " + samenums);
