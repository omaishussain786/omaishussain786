#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtEnd(struct Node** head, int value);
void deleteNode(struct Node** head, int value);
void displayList(struct Node* head);

int main() {
    struct Node* head = NULL;
    int choice, value;

    while (1) {
        printf("\n---- Circular Linked List Menu ----\n");
        printf("1. Insert at End\n");
        printf("2. Delete Node\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertAtEnd(&head, value);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(&head, value);
                break;
            case 3:
                displayList(head);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
}

void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    if (*head == NULL) {
        *head = newNode;
        newNode->next = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != *head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = *head;
}

void deleteNode(struct Node** head, int value) {
    if (*head == NULL) {
        printf("List empty.\n");
        return;
    }
    struct Node *curr = *head, *prev = NULL;
    while (curr->data != value) {
        if (curr->next == *head) {
            printf("Value not found.\n");
            return;
        }
        prev = curr;
        curr = curr->next;
    }
    if (curr->next == *head && prev == NULL) {
        *head = NULL;
        free(curr);
        return;
    }
    if (curr == *head) {
        prev = *head;
        while (prev->next != *head)
            prev = prev->next;
        *head = (*head)->next;
        prev->next = *head;
        free(curr);
    } else {
        prev->next = curr->next;
        free(curr);
    }
}

void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List empty.\n");
        return;
    }
    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}