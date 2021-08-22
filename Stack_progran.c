 #include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "Stack_congif.h"
#include "Stack_interface.h"

/* Declare and Initialize Stack Pointer Variable */
 int Stack_Pointer = -1 ;
 /* Create Stack Array */
 int stack [Stack_Size] ;
/* pointer that refers to Array Stack */
  int *ptrToArray = stack ;
 /* Push Function to Push Data to the Stack */
 void push (int u8_data)
 {
     /* if the Stack is full */
     if (isFull())
     {
         printf("Stack Over Flow \n");
     }
     /* otherwise increment the stack pointer and Push data to stack */
     else
     {
        Stack_Pointer ++ ;
        stack[Stack_Pointer] = u8_data ;
     }
 }
 /* Pull Function to pop the data from the stack */
 u8 pull(void)
 {
    /* Local Variable that used to return data from the function */
     u8 u8_Localdata = 0  ;
     /* if the stack is Empty */
     if (isEmpty())
     {

        printf("Stack Is Empty \n");
     }
     /* Otherwise get the data from the stack and decrement the stack pointer */
     else
     {
       u8_Localdata = stack[Stack_Pointer] ;
        stack[Stack_Pointer]= '\0' ;
        Stack_Pointer -- ;
        return u8_Localdata ;
     }
 }
 /* check if the Stack is Empty or non */
 u8 isEmpty(void)
 {
    if (Stack_Pointer == -1)
    {
        return 1 ;
    }
    else
        return 0 ;
 }
  /* check if the Stack is Full or non */
u8 isFull(void)
{
    if (Stack_Pointer == ((sizeof(stack)/ sizeof(stack[0]))-1 ))
        return 1 ;
    else
        return 0 ;
}
/* Print Stack Data */
void printStack(void)
{
    for (u8 i =0 ; i < Stack_Size ; i++ )
    {
        printf("Stack element Number %d is  %d  \n", i+1,stack[i]) ;
    }
}
