%{
#define DB 1
#define PORT 2
#define STRING 3
#define INTEGER 4
%}

%%
"db:"			return DB;
"port:"			return PORT;
([a-zA-Z])+		return STRING;
([0-9]+)+		return INTEGER;
[ \t\n]			;
.				printf("Invalid token\n");
%%

int yywrap(void)
{
	return 1;
}