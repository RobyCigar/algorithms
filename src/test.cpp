#include <iostream>
#include "../data_structure/linked_list.h"

using namespace std;

int main(int argc, char const *argv[]) {
    struct Node* head = NULL;
    head = Insert(head, 1);
    head = Insert(head, 2);
    head = Insert(head, 3);
    head = Insert(head, 4);

    Print(head);
    return 0;
}
// struct Node {
//     int data;
//     struct Node* next;
// };

// void Print(Node* head) {
//     while(head != NULL) {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main(int argc, char const *argv[]) {
//     struct Node* head = NULL;
//     Node *temp = (struct Node*)malloc(sizeof(struct Node));
//     temp->data = 30;
//     temp->next = NULL;

//     Node *temp1 = (struct Node*)malloc(sizeof(struct Node));
//     temp1->data = 20;
//     temp1->next = NULL;

//     head = temp;
//     head->next = temp1;


//     Print(head);

//     return 0;
// }

