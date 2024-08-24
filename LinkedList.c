#include <stdio.h>
#include <stdlib.h>

// Define the node structure for the doubly linked list
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to insert a node at the end of the doubly linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Function to delete a node with a given key
void deleteNode(struct Node** head, int key) {
    struct Node* temp = *head;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(temp);
        return;
    }

    // Search for the key to be deleted
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    // If key was not present in the linked list
    if (temp == NULL) return;

    // Unlink the node from linked list
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }
    free(temp);
}

// Function to display the doubly linked list
void displayList(struct Node* node) {
    while (node != NULL) {
        printf("%d <-> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Main function to test the doubly linked list implementation
int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 4);

    printf("Doubly linked list: ");
    displayList(head);

    deleteNode(&head, 3);
    printf("Doubly linked list after deletion of 3: ");
    displayList(head);

    return 0;
}
