#include<stdio.h>

int isEven(int n)
{
	// Returns non 0 if even. assumption 0 is even
	return !(n & 1);
}

int main()
{
	char *line;
	int nbytes = 100;
	int res  = 0;
	int num = 0;
	int rem = 0;
	int num_records = 0;
	
	FILE *fi = fopen("Q2.in","r");
	FILE *fo = fopen("Q2.out","w");
	if(!fi || !fo)
	{
		printf("\nFiles could not be opened\n");
		return -1;
	}
	
	line = (char *) malloc (nbytes + 1);
	
	if (getline (&line, &nbytes, fi) != -1)
	{
		//todo: not really required
		num_records = atoi(line);
		fprintf(fo, "%d\n", num_records);
	}
	
	while((getline(&line, &nbytes, fi)) != -1)
	{
		num = atoi(line);
		
		//todo if num = 200, gives 0 as even;but should return 2
		while(num && !res)
		{
			rem = num % 10;
			num = num / 10;
			res = isEven(rem);
		}
		(res && fprintf(fo, "%d\n", rem) || fprintf(fo,"Not found\n"));
		res = 0;
	}
	fclose(fi);
	fclose(fo);
}
