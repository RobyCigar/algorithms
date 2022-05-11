#ifndef LINKED_LIST
#define LINKED_LIST

#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

Node* Insert(Node* head, int data) {
    Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
    } else {
        Node *temp2 = head;
        while (temp2->next != NULL) {
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }

    return head;
}

void Print(Node* head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

#endif

// int main(int argc, char const *argv[]) {
//     struct Node* head = NULL;
//     head = Insert(head, 1);
//     head = Insert(head, 2);
//     head = Insert(head, 3);
//     head = Insert(head, 4);
//     head = Insert(head, 5);
//     Print(head);
    
//     return 0;
// }
