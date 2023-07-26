#include<stdio.h>
main ()

{
	
	FILE *ptr ;
	ptr=fopen ("write.txt","w");
	char str[]="muzamil is here";
	fputs (str,ptr);
	fclose (ptr);
	
}
