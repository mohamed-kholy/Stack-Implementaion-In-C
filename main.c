#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "Stack_congif.h"
#include "Stack_interface.h"
#include "Check_Balanced.h"

int main()
{
/*
    ///Push To Stack Test Case
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    printStack();*/

/*
    //Pull from Stack Test Case
    push(1);
    push(2);
    push(3);
    u8 temp = pull();
    pull();
    printStack();
*/

/*
    //Stack Over Flow Test Case
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);
    push(11);*/

/*
    // Stack Empty Test Case
    pull();*/



    // Balanced Parentheses Test Case //
    // Balanced
    balancedCheck("{1+(2/5)+2}");
    // Balanced
    balancedCheck("(2*3+(5/2+(4*3)))");
    // UN Balanced
    balancedCheck("{({2+10}}*11}");


    return 0;
}
