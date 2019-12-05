// Listing 2-3. Using Uniform Initialization to Prevent Narrowing
// Conversions

int main()
{
	int number{ 0 };
	char another{ 512 };

	double bigNumber{ 1.0 };
	float littleNumber{ bigNumber };

	return 0;
}
