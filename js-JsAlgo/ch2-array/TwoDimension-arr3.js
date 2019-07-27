// Ref: Data Structures and Algorithms with JavaScript
// TwoDimension-arr4.js
// Jagged Arrays

var grades = [[89,77],[76,82,81],[91,94,89]], total=0, average=0.0;

for(var row=0; row<grades.length; ++row) {
	for(var col=0; col<grades[row].length; ++col)
		total += grades[row][col];
	average = total / grades[row].length;
	console.log(
		"Student: ", parseInt(row+1),
		"Avg: " , average.toFixed(2)
	);
	total = 0; average = 0.0;
}
