%{
	int numChars = 0;
%}

%%
[0-9]+		{numChars++;}
.			;
%%

int main() 
{
	yylex();
	printf("%d set(s) of numbers found\n", numChars);
}