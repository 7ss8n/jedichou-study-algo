double mean(double arr[], int s) {
	int i=0; double sum=0;
	for(;i<s;i++)
		sum+=arr[i];
	return sum/s;
}

double sum(double arr[], int start, int finish) {
	int i=start; double sum=0;
	for(;i<=finish;i++)
		sum+=arr[i];
	return sum;
}

int main() {
	int i=0;
	double a[]={1,2,3,4};
	double b[5]={0,0,0,0,0};
	double mon = mean(a,4);
	for(;i<4;i++) {
		double x=a[i]-mon;
		b[i]=x*x;
		// b[i]=pow(x,2); need to fix
	}
	printf("sd: %f\n", sqrt(sum(b,0,3)/3));;
	return 0;
}
