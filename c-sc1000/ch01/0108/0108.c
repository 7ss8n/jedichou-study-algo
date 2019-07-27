long HowManyGotMarriedEachYear(long Population) { return Population * 0.1; }
int main() {
	long pop[] = {1111,2222,3333,4444}, mar[4];
	int i = 0;
	for (; i < sizeof(pop)/sizeof(pop[0]); i++) 
		printf("%ld\n", HowManyGotMarriedEachYear(pop[i]));
}
