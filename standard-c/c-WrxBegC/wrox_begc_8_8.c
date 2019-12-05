// Program 8.8 - A function to increase your salary that doesn't
#include <stdio.h>
#include <stdlib.h>

long *IncomePlus(long* pPay);  // Prototype for increase function

int main(void)
{
	// Variable definition
	long your_salary = 30000L;
	long *pold_salary = &your_salary;
	long *pnew_salary = NULL;

	// Process
	pnew_salary = IncomePlus( pold_salary );
	printf("OLD:$%ld, NEW:$%ld\n", *pold_salary, *pnew_salary);

	// The End !
	return 0;
}

// Function IncomePlus
long *IncomePlus(long* pPay)
{
	long t_pay = 0;
	t_pay = *pPay + 10000L;
	return &t_pay;
}
