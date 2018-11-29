#include <stdio.h>
#include <stdlib.h>

typedef struct DoublyNode
{
    int data;
    struct DoublyNode *prev;
    struct DoublyNode *next;
} DoublyNode;

DoublyNode *head;

struct DoublyNode *createNewNode(int d)
{
    struct DoublyNode *nn = (struct DoublyNode *)malloc(sizeof(struct DoublyNode));
    nn->data = d;
    nn->next = NULL;
    nn->prev = NULL;
    return nn;
}

void insertAtHead(DoublyNode *head, int d)
{
    struct DoublyNode *nn = (struct DoublyNode *)malloc(sizeof(struct DoublyNode));
    nn->data = d;
    nn->next = NULL;
    nn->prev = NULL;
    if (head == NULL)
    {
        head = nn;
        return;
    }
    head->prev = nn;
    nn->next = head;
    head = nn;
}

// void insertAtLast(DoublyNode *head, int data)
// {
//     DoublyNode *temp = createNewNode(data);
//     DoublyNode *a = head;
//     if (a == NULL)
//     {
//         head = temp;
//         return;
//     }
//     while (a != NULL)
//     {
//         a = a->next;
//     }
//     a->next = temp;
//     temp->prev = head;
// }

void print(struct DoublyNode *head)
{
    // printf("%d ", head->data);
    struct DoublyNode *temp = head;
    if (temp == NULL)
        printf("hello");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    head = NULL;
    insertAtHead(head, 4);
    // printf("%d ", head->data);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    // insertAtLast(head, 5);
    print(head);
    return 0;
}