#include<stdio.h>

#include"stackFunctions.h"
//for spaces edit->advanced -> set
//ctrl+r +w


int main(void)
{
    int item = 5;
    PStack myStack = CreateStack();
    StackPush(myStack, &item);
    StackPush(myStack, &item);

    printf_s("%d", StackSize(myStack));
    int *pop = StackPop(myStack);
    StackPrint(myStack);


    return 0;
}
