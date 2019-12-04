// file: 0114.c
// desc: sord by alpha
// todo: need debug

void Display(char *array[], int size) {
	int i = 0;
	for(; i < size; i++)
		printf("%s ", array[i]);
	printf("\n");
}

void AlphaSort(char *array[], int size) {
	char *temp;
	int j, i;
	for(j = 0; j < size; j++) {
		for( i = 0; i < j; i++) {
			if (strcmp(array[i], array[i+1]) > 0) {
				strcpy(temp, array[i]);
				strcpy(array[i], array[i+1]);
				strcpy(array[i+1], temp);
			}
		}
	}
	// Display(array, size);
}

int main() {
	int size; char 
		*names1[] = {"Jedi", "Becky", "Kiwi"},
		*names2[] = {"Zama1", "Fakir", "Amal", "Kalam"},
		*codes[] = {"A235", "Z324", "B325"};
	size = sizeof(names1)/sizeof(names1[0]); AlphaSort(names1, size);
}
