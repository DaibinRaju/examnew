    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    
    void analyse(char key[250],int j){

	int i=0,flag=0,a;
	
	char keywords[50][20] = {
    "auto", 
    "break", 
    "case", 
    "char", 
    "continue", 
    "do", 
    "default", 
    "const", 
    "double", 
    "else", 
    "enum", 
    "extern", 
    "for", 
    "if", 
    "goto", 
    "float", 
    "int", 
    "long", 
    "register", 
    "return", 
    "signed", 
    "static", 
    "sizeof", 
    "short", 
    "struct", 
    "switch", 
    "typedef", 
    "union", 
    "void", 
    "while", 
    "volatile", 
    "unsigned"
};
	for(i=0;i<32;i++){
	
		if(strcmp(key,keywords[i])==0){
			printf("%s is a keyword\n",key);
		}
	}
	
	
	for(i=0;i<j;i++){
		a=key[i];
		if(a<=57&&a>=48){
			flag=1;
		}
		else{
			flag=0;
			break;
		}
	}
	
	if(flag==1){
		printf("%s is a constant\n",key);
	}	
	
}
    void main()
    {
        int a;
        FILE *filePointer;
        char ch;
        char key[250][50];
	int i=0,j=0;
        int n=0;
        filePointer = fopen("f.txt", "r");
        int flag=0;
        char operators[50] = {
   '+','-','*','/','=','%','{','}','(',')'}; 
	while ((ch = fgetc(filePointer)) != EOF)
		{	
                	a=ch;
                	if(ch=='#'){
                		printf("%c",ch);
                		while ((ch = fgetc(filePointer)) != '\n'){
                			printf("%c",ch);
                			
                		}
                		
                		printf(" is a header file\n");
                	
                	}
                	
                for(int k=0;k<8;k++){
	
			if(ch==operators[k]){
			printf("%c is an operator\n",ch);
			}
		}
	
	
	
	
			if((a<=57&&a>=48)||(a>=65&&a<=90)||(a>=97&&a<=122)||(a==95)){
				key[i][j]=ch;
				j++;
				
				
			}	
			
			
			
			else{
				key[i][j]='\0';
				analyse(key[i],j);
				
				i++;
				j=0;
			}
			
			

		}
 
        
        fclose(filePointer);

    }


