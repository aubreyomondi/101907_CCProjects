%{
%}

%%
[0-9]+		printf("Numbers identified!");
.			;
%%

int main()
{
	yylex();
	printf("Set(s) of Numbers");
}
