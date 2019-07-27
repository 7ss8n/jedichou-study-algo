// Example 1-5. The switch statement
var monthNum = "6";
var monthName;
switch (monthNum) {
	case "1":
		monthName = "January";
		break;
	case "2":
		monthName = "February";
		break;
	case "3":
		monthName = "March";
		break;
	case "4":
		monthName = "April";
		break;
	case "6":
		monthName = "June";
		break;
	default:
		monthName = "Default value";
}
console.log(monthName);
