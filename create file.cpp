#include<stdio.h>
//#include<strlb.h>
main ()

{
	FILE *fil;
	fil = fopen ("\n createfirst.txt","w");
	fprintf(fil,"file by fprintf 2");
	fputs("\n file by fputs 2",fil);
	fputs("\n appending by fputs ",fil);
	fclose(fil);
	return 0;
}
