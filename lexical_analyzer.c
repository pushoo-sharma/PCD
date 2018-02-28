#include <stdio.h>
void main{
	FILE * fptr,ch;
	// pointer to FILE 
	char filename[100],ch;
	// Name of the file
	printf("Enter the name of the file\n");
	scanf("%s",filename);
	
	fptr = fopen(filename,'r');
	// open the file
	
	if(fptr == NULL)
	{
		printf("File cannot be opened\n");
		close(0);
	}
	
	while((ch = fgetc(fptr))!= EOF)
	{
		
	}
}