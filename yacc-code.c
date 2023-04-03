%{
  #include<stdio.h>
  #include<stdlib.h>
  #include<unistd.h>
%}
  
%token A B NL
  
%%
string: A A A A A S B NL {
	     printf("a valid string has been entered\n");
             exit(0);
             }
;
S: S A
|
;
%%
  
int yyerror(char *msg)
{
  printf("an invalid string has been entered\n");
  exit(0);
}
    
void main()
{
  printf("enter the string\n");
  yyparse();
}
