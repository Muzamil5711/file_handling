#include<stdio.h>

main()
{
	FILE *ptr=fopen ("fileread.txt","r");
	char files[1000];
	while(fgets(files,100,ptr)!=NULL)
	printf("%s",files);
	return 0;
}




