def getSum(n):
	return n*(1.0+n)/2;

def isComposite(n):
	factor = 0
	if (n==1): return False
	for elt in range(1, n+1):
		if (n % elt == 0): factor +=1
		if (factor>2): return True
	return True if (factor>2) else False

if __name__ == "__main__":
	sumComposite = 0
	maxvalue = 10000
	for number in range(1, maxvalue+1):
		if ( isComposite(number) ):
			sumComposite += number
			# print number

	result = getSum(maxvalue) - sumComposite - 1

	print "getSum", getSum(maxvalue)
	print "sumComposite", sumComposite
	print "Target: ", result

