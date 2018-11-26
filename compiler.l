%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "compiler.tab.h"

    void yyerror(const char *);

%}



%%

"intf"            { return INTEGER; }
"floatf"          { return FLOAT; }
"charf"           { return CHAR; }
"doublef"         { return DOUBLE;}
"{"               { return LSB; }   
"}"               { return RSB; }
";"               { return SEMI; }
","               { return COMMA; } 
":"               { return COL; }
"["               { return FTB; }
"]"               { return LTB; }
"("               { return FFB; }
")"               { return LFB; }
"<"               { return COS; }
">"               { return COE; }
"/*"              { return LOS; }
"*/"              { return LOE; }
"/"               { return FS; } 
"[plus]"          { return PLUS; }
"[minus]"         { return MINUS; }
"[cross]"         { return CROSS; }
"[div]"           { return DIV; }
"[equal]"         { return EQUAL; }
"[mod]"           { return MOD; }
"if"              { return IF; }
"[gr]"            { return GR; }
"[ls]"            { return LS; }
"[ge]"            { return GE; }
"[le]"            { return LE; }
"[eq]"            { return EQ; }
"[neq]"           { return NEQ; }
"print"           { return PRINT; }
"else"            { return ELSE; }
"for"             { return FOR; }
"[inc]"           { return INC; }
"[dec]"           { return DEC; }
"switch"          { return SWITCH; }
"stop"            { return STOP; }
"case"            { return CASE; }
"default"         { return DEFAULT; }
"while"           { return WHILE; }



[a-zA-Z]+[0-9a-zA-Z_]*   {
                            int i;
                            memset(&yylval.varname[0],0,sizeof(yylval.varname));

                            for(i = 0; i < strlen(yytext); i++)
                            {
                                yylval.varname[i] = yytext[i];
                            }

                            return VAR;
                         }

[0-9]+                   { 
                                yylval.valname = atoi(yytext);
                                return NUMBER;
                         } 

[ \n\t]                  { ; }    

%%

void yyerror(const char *s)
{
    printf("ERROR: %s",s);
}

int yywrap()
{

}

int main()
{ 
    yyin = freopen("input.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);
    yyparse();
}