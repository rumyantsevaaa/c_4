#include<stdio.h>
int main(void)
{
	FILE *myfile1, *myfile2;
	int c;
	if ((myfile1 = fopen("1.txt", "r")) == NULL)
	{
		printf("Couldn't read %s\n", "1.txt");
		return 1;

	}
	if ((myfile2 = fopen("2.txt", "w")) == NULL)
	{
		printf("Couldn't copy %s\n", "2.txt");
		return 1;

	}
	while ((c = getc(myfile1)) != EOF)
		putc(c, myfile2);
	fclose(myfile1);
	fclose(myfile2);
	printf("Success \n");
	return 0;
}