#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char c;
	FILE* fp = NULL;
	char input[100];

	
	//fopen
	fp = fopen("sample.txt", "r");
	
	if(fp == NULL)
		printf("파일 못 열음\n");
	#if 0
	while((c = fgetc(fp)) != EOF)
		putchar(c);
	#endif
	while(fgets(input, 100, fp) > 0)
		printf("%s", input);
	
	//fclose
	fclose(fp);
		
	
	return 0;
}
