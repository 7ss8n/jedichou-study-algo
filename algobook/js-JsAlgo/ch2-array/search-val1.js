// search-val1.js
var names = ['David', 'Cynthia', 'Raymond', 'Clayton', 'Jennifer'];
names.forEach(function(val){
	var position = names.indexOf(val);
	if (position >= 0) console.log("Found " + val + " at " + position);
	else console.log(val + " not found in array.");
});
