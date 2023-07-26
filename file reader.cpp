#include<stdio.h>

main (){
	FILE*ful;
	ful=fopen("createfirst.txt","r");
	char ch[50];
	while(fgets(ch,50,ful)!=NULL)
           printf("%s",ch);
}


