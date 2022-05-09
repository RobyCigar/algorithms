#include <iostream>

using namespace std;

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Node* head;

// function to reverse a linked list
struct Node* reverse(struct Node** head_ref) 
{
    struct Node *current, *prev, *next;
    current = *head_ref;
    prev = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
    return head;
}

int main(int argc, char const *argv[]) {
    //happy coding!
    return 0;
}