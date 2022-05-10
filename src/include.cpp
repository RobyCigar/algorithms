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
