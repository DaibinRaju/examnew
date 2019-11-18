num (a|b)*ab
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
