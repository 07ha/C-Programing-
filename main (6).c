#include <stdio.h>
#include <stdlib.h>

int main()  {
	FILE *fp1 = fopen("D:\\Github\\C-Programs-Slot-B\\Day 5\\FileMerge\\a.txt", "r");
	FILE *fp2 = fopen("D:\\Github\\C-Programs-Slot-B\\Day 5\\FileMerge\\b.txt", "r");
	FILE *fp3 = fopen("D:\\Github\\C-Programs-Slot-B\\Day 5\\FileMerge\\c.txt", "a");
	char c[25];

	fscanf(fp1, "%s", &c);
	fprintf(fp3, "%s \n", c);
	fscanf(fp2, "%s", &c);
	fprintf(fp3, "%s \n", c);

	printf("Successful");
}

