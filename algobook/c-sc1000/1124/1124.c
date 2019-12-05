#include <stdio.h>

int wcl(char *filename) {
	int count=0;
	FILE *fp;
	fp = fopen(filename, "r");
	while(!feof(fp)) {
		if (fgetc(fp) == '\n')
			count++;
	}
	fclose(fp);
	return count++;
}

int wcw(char *filename) {
	int count = 0;
	char word[20];
	FILE *fp;
	fp = fopen(filename, "r");
	while(!feof(fp)) {
		fscanf(fp, "%s", word);
		count++;
	}
	fclose(fp);
	return count++;
}

int wcc(char *filename) {
	int count = 0;
	FILE *fp;
	fp = fopen(filename, "r");
	while(!feof(fp)) {
		fgetc(fp);
		count++;
	}
	fclose(fp);
	return count++;
}

int main() {
	char * file = "./test.txt";
	int lines = wcl(file);
	int words = wcw(file);
	int chars = wcc(file);
	printf("lines: %d, words: %d, character: %d\n", lines, words, chars);
}
