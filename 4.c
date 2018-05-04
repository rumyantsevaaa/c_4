#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char strfirst[100];
	char strsecond[100];
	FILE *myfile1, *myfile2, *myfile3;
	myfile1 = fopen("1.txt", "r");
	myfile2 = fopen("2.txt", "r");
	if (myfile1 != NULL) {
		fgets(strfirst, 100, myfile1);

	}
	else {
		fprintf(stderr, "error\n");
	}
	if (myfile2 != NULL) {
		fgets(strsecond, 100, myfile2);

	}
	else {
		fprintf(stderr, "error\n");

	}
	fprintf(stdout, "%s%s", strfirst, strsecond);
	return 0;

}