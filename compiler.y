%{

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    int sym[26] = {0};
    int val[26];
    
    int right,condition = 0,check,cont,value,scheck = 0,index;

    char var[1000],store[1000][1000],var_value[1000];
    int count = 0,check1,check2,i;

    int decCheck(char str[1000]);
    int getAdd(char str[1000]);
    int match(char str1[1000], char str2[1000]);
%}

%union
{
    int valname;
    char varname[1000];
}


%start program 

%token <valname> INTEGER FLOAT CHAR DOUBLE LSB RSB SEMI COMMA NUMBER EQUAL PLUS MINUS CROSS DIV DEFAULT WHILE MOD
%token <valname> FTB LTB FFB LFB IF FS  GE GR LE LS EQ NEQ PRINT ELSE FOR INC DEC COS COE LOS LOE SWITCH CASE STOP COL
%token <varname> VAR
%type <valname> operation con dec

%%

program: program dec        
        | dec               
        ;

dec: type id SEMI 
    | VAR EQUAL operation SEMI                          {  
                                                            check1 = decCheck($1);
                                                            if(check1==0)
                                                            {
                                                                printf("This variable is not declared\n");

                                                            }
                                                            else
                                                            {
                                                                //printf("Declared\n");
                                                                index = getAdd($1);
                                                                var_value[index] = $3;
                                                            }

                                                        }
    
    | operation SEMI

    | IF FS con FS FTB dec LTB  SEMI                    {
                                                            //printf("ifelse\n");
                                                            if ( condition == 1 )
                                                            {
                                                                printf("Expression value in if is %d\n",$6);
                                                            }
                                                            else
                                                            {
                                                                printf("The condition in if is false\n");
                                                            }
                                                        }

    | IF FS con FS FTB dec LTB ELSE FTB dec LTB SEMI    {
                                                            //printf("ifelse\n");
                                                            if ( condition == 1 )
                                                            {
                                                                printf("Expression value in if is %d\n",$6);
                                                            }
                                                            else
                                                            {
                                                                printf("Expression value in else is %d\n",$10);
                                                            }
                                                        }                                                                  

    | PRINT FTB operation LTB SEMI                      { 
                                                            $$ = $3;
                                                            printf("%d\n",$3);
                                                        }
    | for  
    | fswitch    
    | fwhile                                             
    ;

type: INTEGER       {printf("Integer type variable\n");}
    | FLOAT         {printf("Float type variable\n");}
    | CHAR          {printf("Char type variable\n");}
    | DOUBLE        {printf("Double type variable\n");}
    ;


id: id COMMA LSB VAR RSB        {                                   
                                    check1 = decCheck($4);
                                    if(check1==0)
                                    {
                                        printf("Undeclared Variable\n");
                                        for(i=0;i<strlen($4);i++)
                                        {
                                            store[count][i] = $4[i];
                                        }
                                        count++;
                                    }
                                    else
                                    {
                                        printf("This variable is already declared\n");
                                        
                                    }
                                }   

    | LSB VAR RSB               {                                   
                                    check1 = decCheck($2);
                                    if(check1==0)
                                    {
                                        printf("Undeclared Variable\n");
                                        for(i=0;i<strlen($2);i++)
                                        {
                                            store[count][i] = $2[i];
                                        }
                                        count++;
                                    }
                                    else
                                    {
                                        printf("This variable is already declared\n");
                                        
                                    }
                                }
    |        
    ;


operation:
         NUMBER                                         { value = $1; }                                      
         | VAR                                          {  
                                                                    check1 = decCheck($1);
                                                                    if(check1==0)
                                                                    {
                                                                        printf("This variable is not declared\n");

                                                                    }
                                                                    else
                                                                    {
                                                                       //printf("Declared\n");
                                                                        index = getAdd($1);
                                                                        $$ = var_value[index] ; 
                                                                        value = var_value[index];                                                                     
                                                                    }

                                                        } 
                                                                                      
         | operation PLUS operation                     { $$ = $1 + $3; value = $$; }
         | operation MINUS operation                    { $$ = $1 - $3; value = $$; }
         | operation CROSS operation                    { $$ = $1 * $3; value = $$; }
         | operation DIV operation                      { 
                                                          if( $3 != 0 )
                                                          {
                                                              $$ = $1 / $3;
                                                          }
                                                          else
                                                          {
                                                              $$ = 0;
                                                              printf("Division by zero\n");
                                                          }
                                                        }
         | operation MOD operation                      { $$ = $1 % $3; value = $$; }                                              
         | FFB operation LFB                            { $$ = $2; }
         ;


con: 
    NUMBER
    | VAR                {  
                            check1 = decCheck($1);
                            if(check1==0)
                            {
                                printf("This variable is not declared\n");

                            }
                            else
                            {
                                //printf("Declared\n");
                                index = getAdd($1);
                                $$ = var_value[index] ;                                                                       
                            }

                         }

    | con GE con         { 
                            check = $3;
                            cont = 4;
                            if( $1 >= $3)
                            {
                                condition = 1;
                                printf("Greater equal\n");
                            }

                            else printf("Not greater equal\n");

                         }

    | con LE con         { 
                            check = $3;
                            cont = 2;
                            if( $1 <= $3)
                            {
                                condition = 1;
                                printf("Less equal\n");
                            }
                            else 
                            {
                                condition = 0;
                                printf("Not less equal\n");
                            }
                            
                         }

    | con GR con         { 
                             check = $3; 
                             cont = 1;     
                             if( $1 > $3)
                             {
                                condition = 1;
                                printf("Greater\n");

                             } 
                             else 
                             {
                                 condition = 0;
                                 printf("Not greater\n");
                                
                             }
                            
                         }

    | con LS con         {   
                            check = $3;
                            cont = 3;
                            if( $1 < $3)
                            {
                                condition = 1;
                                printf("Less\n");
                            }
                            else
                            {
                                condition = 0;
                                printf("Not less\n");
                            } 
                            
                         }

    | con EQ con         {   
                            check = $3;
                            if( $1 == $3)
                            {
                                condition = 1;
                                printf("Equal\n");
                            }
                            else 
                            {
                                condition = 0;
                                printf("Not equal\n");
                            }
                            
                         } 

    | con NEQ con        { 
                            check = $3;      
                            if( $1 != $3)
                            {
                                condition = 1;
                                printf("Not equal\n");
                            }
                            else 
                            {
                                condition = 0;
                                printf("Equal\n");
                            }
                            
                         } 
    ; 


    for: FOR COS VAR EQUAL operation SEMI con SEMI inc COE LOS dec LOE    { 
                                                                                    printf("for loop\n");
                                
                                                                                    check1 = decCheck($3);
                                                                                    if(check1==0)
                                                                                    {
                                                                                        printf("This variable is not declared\n");

                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        //printf("Declared\n");
                                                                                        index = getAdd($3);
                                                                                        var_value[index] = $5;                                                                       
                                                                                    }
                                                                                    int i;
                                                                                    
                                                                                    if( cont == 1 )
                                                                                    {
                                                                                        printf("Printing from %d to %d:\n",var_value[index],check+1);
                                                                                        for( i =  var_value[index]; i > check; i--)
                                                                                        {
                                                                                            printf("%d\n",i);
                                                                                            
                                                                                        }
                                                                                    }


                                                                                    else if( cont == 2 )
                                                                                    {
                                                                                        printf("Printing from %d to %d:\n",var_value[index],check);
                                                                                        for( i =  var_value[index]; i <= check; i++)
                                                                                        {
                                                                                            printf("%d\n",i);
                                                                                            
                                                                                        }
                                                                                    }

                                                                                    
                                                                                    else if( cont == 3 )
                                                                                    {
                                                                                        printf("Printing from %d to %d:\n",var_value[index],check-1);
                                                                                        for( i = var_value[index]; i < check; i++)
                                                                                        {
                                                                                            printf("%d\n",i);
                                                                                            //$$ = $12;
                                                                                           // printf("asad %d\n",$12);
                                                                                            
                                                                                        }
                                                                                    }
                                                                                    
                                                                                    else if( cont == 4 )
                                                                                    {
                                                                                        printf("Printing from %d to %d:\n",var_value[index],check);
                                                                                        for( i = var_value[index]; i >= check; i--)
                                                                                        {
                                                                                            printf("%d\n",i);
                                                                                            
                                                                                        }
                                                                                    }
                                                                                    
                                                                                    

                                                                              }
    |
    ;  

inc: VAR INC            {
                                 //val[$1] = val[$1] + 1;
                                 printf("increment\n"); 
                                 
                        }

    | VAR DEC           { printf("decrement\n"); }
    ; 


fswitch: SWITCH COS operation COE LSB scase RSB     { 
                                                        scheck = 0;
                                                        //printf("Condition value is %d\n",value);
                                                    }
        |
        ;

scase:
      scase fcase dflt
      | scase fcase
      | fcase     
      ;

fcase: CASE NUMBER COL program STOP SEMI          { 
                                                       // printf("value is %d\n",value);
                                                        if(value == $2)
                                                        {
                                                            printf("Case %d is true\n",$2);
                                                            scheck = 1;
                                                        }
                                                    

                                                        else 
                                                        {
                                                            printf("Case %d is false\n",$2);
                                                        }
                                                
                                                  }
      |
                                          
      ;

dflt: DEFAULT COL program STOP SEMI               { 
                                                        if( scheck == 0)
                                                        {
                                                            printf("It is default case\n"); 
                                                            printf("Expression value is %d\n",value);
                                                        }
                                                  }
    |
    ;

fwhile: WHILE COS operation COE FTB operation LTB   {
                                                        int wcount = $3;
                                                        while(wcount)
                                                        {
                                                            printf("Expression value in while is %d\n",$6);
                                                            wcount--;
                                                        }

                                                    }
      |
      ;




%%


int decCheck(char str[1000])
{

    int i;
    //printf("%s\n",str);
    for(i=0;i<count;i++)
    {
        if(strlen(str)==strlen(store[i]))
        {
            check2 =  match(str,store[i]);
            if(check2==1)
            {
                return 1;
            }
            else
            {
                continue;
            }
        }
        else
        {
            continue;
        }

    }

    return 0;

}

int match(char str1[1000], char str2[1000])
{
    int i,len;
    len = strlen(str1);

    for(i=0;i<len;i++)
    {
        if(str1[i]==str2[i])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int getAdd(char str[1000])
{
    int i;
    for(int i = 0; i < count; i++)
    {
        if(strlen(str) == strlen(store[i]))
        {
            if(match(str, store[i]))
            {
                return i;
            }
        }
        
    }
}