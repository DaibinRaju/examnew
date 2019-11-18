num (00|01|10|11)+(0|1)*
%%
{num} printf("accepted");
.+ printf("not accepted");
%%
main()
{
yyin = stdin;
printf("Enter the string");
yylex();
}
