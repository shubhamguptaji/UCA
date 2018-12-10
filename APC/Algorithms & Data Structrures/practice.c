#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    node *next;
    int data;
} node;

node *createNewNode()
{
    node *nn = (node *)malloc(sizeof(node));
    return nn;
}

void addAtBeg(node **h, int data)
{
    node *nn = createNewNode();
    nn->data = data;
    nn->next = *h;
    *h = nn;
}

void addAtLast(node **h, int data)
{
    node *nn = createNewNode();
    nn->data = data;
    nn->next = NULL;
    if (*h == NULL)
        *h = nn;
    else
    {
        node *curr = *h;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = nn;
    }
}