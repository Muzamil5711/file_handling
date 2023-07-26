#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define max 1024
main ()
{
	FILE *filer;
	filer=fopen("createfirst.txt","a");
	char buffer[max];
	printf("Enter 'quit' to exist\n");
	
	do
	{
		fgets(buffer,max,stdin);
		if(strcmp(buffer,"quit\n")==0)
		break;
		fputs(buffer,filer);
		
	} while (true);
	fclose(filer);
}
