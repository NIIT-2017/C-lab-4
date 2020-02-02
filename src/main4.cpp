//Clab4 task4

#include "task4.h"

int main()
{
	char str[SIZE][SIZE];
	char* p[SIZE];

	FILE* fp_in = fopen("FILE.txt", "r");

	int i = 0;

	for (; ; i++)
	{
		if (fgets(str[i], SIZE, fp_in) == NULL)
		break;
		p[i] = str[i];
	}

	fclose(fp_in);

	lineSort(p, i);

	FILE* fp_out = fopen("FILE_out.txt", "w");

	printLinesToFile((const char**)p, i, fp_out);
	
	fclose(fp_out);

	return 0;
}