#include "linked_list.h"

node *remove_duplicates(node *head)
{
    node *dummy = (node *)malloc(sizeof(node));

    // dummy node points
    // to the original head
    dummy->next = head;

    // node pointing to last
    // node which has no duplicate.
    node *prev = dummy;

    // node used to traverse
    // the linked list.
    node *current = head;

    while (current != NULL)
    {
        // Until the current and
        // previous values are
        // same, keep updating current
        while (current->next != NULL &&
               prev->next->data == current->next->data)
            current = current->next;

        // if current has unique value
        // i.e current is not updated,
        // Move the prev pointer to
        // next node
        if (prev->next == current)
            prev = prev->next;

        // when current is updated
        // to the last duplicate
        // value of that segment,
        // make prev the next of current
        else
            prev->next = current->next;

        current = current->next;
    }

    // update original head to
    // the next of dummy node
    head = dummy->next;
    return head;
}

int main()
{
    node *head = NULL;
    addAtBeg(&head, 5);
    addAtBeg(&head, 4);
    // addAtBeg(&head, 4);
    addAtBeg(&head, 4);
    addAtBeg(&head, 3);

    addAtBeg(&head, 3);
    addAtBeg(&head, 2);
    addAtBeg(&head, 1);
    addAtBeg(&head, 1);
    // addAtBeg(&head, 1);
    node *a = remove_duplicates(head);
    printList(&a);
    return 0;
}