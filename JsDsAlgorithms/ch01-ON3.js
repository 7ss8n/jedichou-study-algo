// file: ch01-ON3.js
// Example of O(n^3)

function exampleCubic(n) {
	for (var i=0; i<n; i++) {
		console.log(i);
		for (var j=i; j<n; j++) {
			console.log(j);
			for (var k=j; j<n; j++) {
				console.log(k);
			}
		}
	}
}
exampleCubic(20);
