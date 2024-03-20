#include <stdio.h>
#include <stdlib.h>

struct LinkedList {
    int data;
    struct LinkedList *next;
};

typedef struct LinkedList node;

void printList(node *head) {
    node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;

    head = (node*)malloc(sizeof(node));
    second = (node*)malloc(sizeof(node));
    third = (node*)malloc(sizeof(node));

    if (head == NULL || second == NULL || third == NULL) {
        printf("Memory allocation failed.\n");
        return -1;
    }

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    printList(head);

    // Free allocated memory
    free(head);
    free(second);
    free(third);

    return 0;
}
