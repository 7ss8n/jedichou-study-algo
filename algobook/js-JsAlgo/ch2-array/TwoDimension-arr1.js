// Ref: Data Structures and Algorithms with JavaScript
// TwoDimension-arr1.js
// Create a two-dimension array objec

Array.matrix = function(rows, cols, init) {
	var arr = [];
	for (var i=0; i<rows; ++i) {
		var colu = [];
		for (var j=0; j<cols; ++j)
			colu[j] = init;
		arr[i] = colu;
	}
	return arr;
}

var nums = Array.matrix(5,5,0);
console.log(nums[1][1]);

var names = Array.matrix(3,3,"");
names[1][2] = "Joe";
console.log(names[1][2]);
