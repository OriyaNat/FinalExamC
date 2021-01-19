#include <stdio.h>
#include"stackFunctions.h"


PStack CreateStack(void)
{
    Stack newStack;
    newStack.head = (PNode)malloc(sizeof(Node));
    newStack.head->next = NULL;
    return &newStack;
}

void DeleteStack(PStack  stack)
{
    PNode current = stack->head;
    PNode temp;
    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }
}

void StackPush(PStack stack, void *item)
{
    PNode newNode = (PNode)malloc(sizeof(Node));
    newNode->val = item;
    newNode->next = stack->head;
    stack->head = newNode; 

}

void *StackPop(PStack stack)
{
    if (stack->head == NULL)
    {
        return -1;
    }
    void *value = stack->head->val;
    free(stack->head);
    stack->head = stack->head->next;
}

size_t StackSize(PStack stack)
{
    size_t count = 0;
    PNode current = stack->head;
    while (current != NULL)
    {
        ++count;
        current = current->next;
    }
    return count;
}

void StackPrint(PStack stack)
{
    size_t i = 1;
    PNode current = stack->head;
    while (current != NULL)
    {
        current = current->next;
        printf_s("item number %d -> %p\n", i, current->val);
        ++i;
    }
}
void printList(struct Node *node, void (*fptr)(void *))
{

}