#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/
// expected output: 1 2 4 14 23 37 108 111 115 116 83 84 85 
    void leftView(Node* root) {
        if(!root) return;
        leftView(root->left);
        cout << root->data << " ";
    }

    void rightView(Node* root) {
        if(!root) return;
        rightView(root->right);
        cout << root->data << " ";
    }

    void topView(Node * root) {
        if(!root) return;
        if(root->left) {
            leftView(root->left);
        }
        cout << root->data << " ";
        
        if(root->right) {
            rightView(root->right);
        }
    }
}; //End of Solution


int main() {
    
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    myTree.topView(root);

    return 0;
}
