#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "Stack_interface.h"
#include "Stack_congif.h"
#include "Check_Balanced.h"

/* Function That Check Balance */

void balancedCheck(u8 *exp)
{
    /* get pointer to Array from Stack.c File */
    extern *ptrToArray ;
      /* get The Stack Pointer from Stack.c File */
    extern Stack_Pointer ;
    /* local Variable holds iteration number */
    u8 expr_indx = 0 ;
    /* while loop on the content of the expression */
    while (exp[expr_indx]!='\0')
    {
        if ((exp[expr_indx]== '[') || (exp[expr_indx] == '{') || (exp[expr_indx]=='('))
           {
                push(exp[expr_indx]);
            }
          if ((exp[expr_indx]== ']') || (exp[expr_indx] == '}') || (exp[expr_indx]==')'))
            {
                if ((exp[expr_indx]== ')'))
                {
                    if(*(ptrToArray+Stack_Pointer) == '(')
                    {
                        pull();
                    }
                    else
                    {
                        printf("Expression UN Balanced\n ") ;
                        break ;
                    }
                }
                if ((exp[expr_indx]== ']'))
                {
                    if(*(ptrToArray+Stack_Pointer)=='[')
                    {
                        pull();
                    }
                    else
                    {
                        printf("Expression UN Balanced\n ") ;
                        break ;
                    }

                }
                if ((exp[expr_indx]== '}'))
                {
                    if(*(ptrToArray+Stack_Pointer)=='{')
                    {
                        pull();
                    }
                    else
                    {
                        printf("Expression UN Balanced\n ") ;
                        break ;
                    }

                }

    }
    /* while The Stack become empty then the Expression is Balanced */
    if (Stack_Pointer == -1 )
    {
        printf("Expression Balanced\n ") ;
    }
    /* Increment of the iteration variable */
    expr_indx++ ;
}
}



