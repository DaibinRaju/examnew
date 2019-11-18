num (1*(01*01*)*)|(0*1(0110*1)*)
%%
{num} printf("accepted");
.+ printf(" not accepted");
%%
main()
{
yyin = stdin;
printf("Enter the string");
yylex();
}
