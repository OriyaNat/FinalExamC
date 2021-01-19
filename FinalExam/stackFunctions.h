#pragma once

/**
*@file stackFunctions.h
*stack functions libary.
*/

typedef struct Node_t
{
    void *val;
    PNode next;
}Node, *PNode;

typedef struct Stack_t
{
    PNode head;
}Stack, *PStack;

/**
 * @brief   create a new stack.
 * @return  pointer to stack created.
*/
PStack CreateStack(void);

/**
 * @brief           delete all stack from memoery.
 * @param stack     pointer of stack to delete. 
*/
void DeleteStack(PStack stack);

/**
 * @brief           insert a new item to head (start) of stack. 
 * @param stack     pointer of stack to insert toward. 
 * @param item      an item to insert
*/
void StackPush(PStack stack, void *item);

/**
 * @brief            remove the last value inserted to stack (LIFO).
 * @param stack      pointer to stack.
 * @return           value at head of stack.
*/
void *StackPop(PStack stack);


int StackGetLastError(Stack *);

/**
 * @brief           count items in the stack.
 * @param stack     stack to be count.   
 * @return          the number of items.
*/
size_t StackSize(PStack stack);

/**
 * @brief       print all items.
 * @param stack pointer of stack to print.
*/
void StackPrint(PStack stack);

