#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode fake(-1);
    ListNode* last = &fake;
    while(l1 != NULL && l2 != NULL) {
        if(l1->val < l2->val) {
            last->next = l1;
            last = l1;
            l1 = l1->next;
        } else {
            last->next = l2;
            last = l2;
            l2 = l2->next;
        }
    }

    // menambahkan vertex yang masih tersisa ke pointer "last->next"
    if(l1 != NULL) {
        last->next = l1;
    }

    if(l2 !=NULL) {
        last->next = l2;
    }

    return fake.next;
}

int main() {
    return 0;
}
