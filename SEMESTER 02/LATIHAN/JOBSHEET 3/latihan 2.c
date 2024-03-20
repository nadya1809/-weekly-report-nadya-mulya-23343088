#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void printList(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

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
