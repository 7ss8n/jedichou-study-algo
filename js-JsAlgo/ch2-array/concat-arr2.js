// concat-arr2.js
// use splice to split array !
var itDiv = [1,2,3,4,5,6,7];
console.log('before process:');
console.log(itDiv);

var dmp = itDiv.splice(3,3);
var cis = itDiv;

console.log('after process:');
console.log('cis: ' + cis);
console.log('dmp: ' + dmp);
console.log('itDiv: ' + itDiv);
