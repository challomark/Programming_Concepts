# Singly Linked List

* A singly linked list is a fundamental data structure in computer science and programming. It's a collection of nodes, where each node contains two parts:
	* Data: The actual value or data you want to store in the list.
	* Next: A reference (or pointer) to the next node in the list. This reference is used to link nodes together, forming the list.

* Here are some key concepts and operations related to singly linked lists:

## Defining a Node Structure:
* In C, you can represent a node of a singly linked list using a struct. Here's an example:
~~~~
struct Node {
    int data;           // Data stored in the node
    struct Node* next;  // Pointer to the next node
};
~~~~

## Create Functions for List Operations:
* To create a singly linked list, you typically start with a head pointer, which points to the first node in the list. Initially, the list is empty, so the head pointer should be set to NULL.
~~~~
struct Node* head = NULL;
~~~~

## Insertion:
* Insert at the Beginning: To insert a node at the beginning of the list, you create a new node, update its next pointer to point to the current head, and then update the head to point to the new node.
* Insert at the End: To insert a node at the end of the list, you traverse the list until you reach the last node (where next is NULL), then update the next of the last node to point to the new node.
* Insert at a Specific Position: To insert a node at a specific position, you traverse the list until you reach the position before the desired location, then update the next pointers accordingly.

## Deletion:
* Delete at the Beginning: To delete the first node, update the head pointer to point to the second node and free the memory of the old head node.
* Delete at the End: To delete the last node, traverse the list until you reach the node before the last one and update its next pointer to NULL, then free the memory of the last node.
* Delete a Specific Node: To delete a node at a specific position, traverse the list until you reach the node before the desired node to be deleted, then update the next pointers accordingly and free the memory of the deleted node.

## Searching: 
* You can traverse the linked list using a loop, checking each node's data field until you find the desired element or reach the end of the list.

## Traversal:
* To iterate through the entire list, you can use a loop that follows the next pointers from the head node to the end of the list, processing each node's data as you go.

## Memory Management:
* Don't forget to free the memory allocated for nodes you delete to prevent memory leaks.

## Example using singly linked list:
~~~~
// Function to create a new node with the given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the beginning of the list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to delete a node with a given data value
void deleteNode(struct Node** head, int data) {
    struct Node* current = *head;
    struct Node* previous = NULL;

    while (current != NULL && current->data != data) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) {
        // Node with data not found
        return;
    }

    if (previous == NULL) {
        // Node to be deleted is the first node
        *head = current->next;
    } else {
        // Node to be deleted is not the first node
        previous->next = current->next;
    }

    free(current);
}

// Function to traverse and print the linked list
void traverse(struct Node* head) {
    struct Node* current = head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
~~~~

## Use the Linked List
* Now, you can create a linked list, insert elements, delete elements, and traverse the list using the defined functions:
~~~~
int main() {
    struct Node* myList = NULL;

    insertAtBeginning(&myList, 10);
    insertAtBeginning(&myList, 20);
    insertAtBeginning(&myList, 30);

    printf("Linked List: ");
    traverse(myList);

    deleteNode(&myList, 20);

    printf("Linked List after deleting 20: ");
    traverse(myList);

    return 0;
}
~~~~
## Advantages:
* Singly linked lists are efficient for inserting and deleting elements at the beginning of the list. They also use memory efficiently because nodes can be dynamically allocated.

## Disadvantages:
* They are less efficient for operations that involve accessing elements by index since you need to traverse the list from the beginning.

#### Singly linked lists are a fundamental building block for more complex data structures and algorithms, so understanding them is crucial for a programmer. They are commonly used in various programming tasks and are a key concept in data structures and algorithms courses.
