#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string.h>
void main()
{
	FILE *filePointer;
	char ch;
	int i=0,j=0;
	printf("Comment Lines are\n");
	filePointer=fopen("comment.txt","r");
	while((ch=fgetc(filePointer))!=EOF)
	{
		if(ch=='/')
		{
			if((ch=fgetc(filePointer))=='/')
			{
				printf("%c%c",ch,ch);
				while((ch=fgetc(filePointer))!='\n')
				{
					printf("%c",ch);
				}
			}printf("\n");
		}
	}
	fclose(filePointer);
	filePointer=fopen("comment.txt","r");
	while((ch=fgetc(filePointer))!=EOF)
	{
		if(ch=='/')
		{
			if((ch=fgetc(filePointer))=='*')
			{
				printf("/*");
				while((ch=fgetc(filePointer))!='*')
				{
					printf("%c",ch);
				}
				printf("*/");
			}printf("\n");
		}
	}
	fclose(filePointer);
}

