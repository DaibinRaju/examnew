#include<stdio.h>
#include <string.h>
void main(){
	char string[500];
	char a,b,c;
	int count=0;
	FILE *filePointer;
	filePointer = fopen("f.txt", "r");
	while ((c = fgetc(filePointer)) != EOF){
		
		string[count]=c;
		count++;
	}
	for(int i =1;i<strlen(string);++i){
		if((string[i-1]=='/')&&(string[i]=='/')){
			i+=1;
			while(string[i]!='\n'){
				printf("%c",string[i]);
				i+=1;
			}
			printf(" is a comment\n");
		}
	}

	for(int i =1;i<strlen(string);++i){
		if((string[i-1]=='/')&&(string[i]=='*')){
			i+=1;
			while((string[i-1]!='/')&&(string[i]!='*')){
				printf("%c",string[i]);
				i+=1;
			}
			printf(" is a comment\n");
		}
	}
	
	
}
