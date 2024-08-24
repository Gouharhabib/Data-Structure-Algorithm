int main() {
    int choice, item;
    printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &item);
                push(item); // Call the push function to insert the entered item onto the stack
                break;
            case 2:
                pop(); // Call the pop function to remove the top item from the stack
                break;
            case 3:
                display(); // Call the display function to show all elements in the stack
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!!\n");
        }
    }
    return 0;
}

