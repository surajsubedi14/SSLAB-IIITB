#include<stdio.h>
int main(int arg,char*argv[],char* env[])
{
	int i;
	for(int i=0;env[i]!=NULL;i++)
	{
		printf("\n%s",env[i]);
	}

	return 0;
}
