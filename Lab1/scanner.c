#include <stdio.h>
#define DB 1
#define PORT 2
#define STRING 3
#define INTEGER 4

extern int yylex();
extern int yylineno;
extern char* yytext;

char* names[] = { NULL, "DB", "PORT" };

int main(void)
{
	int ntoken, vtoken;

	ntoken = yylex();
	while(ntoken)
	{
		switch(ntoken)
		{
			case DB:
				vtoken = yylex();
				if(vtoken != STRING)
				{
					printf("Syntax error on line %d, Expected 'db:' found %s\n", yylineno, yytext);
					return 1;
				}
			printf("%s syntax OK %s \n", names[ntoken], yytext);
			break;

			case PORT:
				vtoken = yylex();
				if(vtoken != INTEGER)
				{
					printf("Syntax error on line %d, Expected integer'port:' found %s\n", yylineno, yytext);
					return 1;
				
				}

			printf("%s syntax OK %s \n", names[ntoken], yytext);
			break;
		}
		ntoken = yylex();	
	}

	return 0;
}
