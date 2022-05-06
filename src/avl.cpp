#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    int height;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
        this->height = 1;
    }
};

class AVLTree
{

    TreeNode *root;

public:
    AVLTree(int data)
    {
        this->root = new TreeNode(data);
    }

    TreeNode *leftRotate(TreeNode *node)
    {
        TreeNode *y = node->right;
        TreeNode *T2 = y->left;

        y->left = node;
        node->right = T2;

        node->height = max(height(node->left), height(node->right)) + 1;
        y->height = max(height(y->left), height(y->right)) + 1;

        return y;
    }

    TreeNode *rightRotate(TreeNode *node)
    {

        TreeNode *y = node->left;
        TreeNode *T2 = y->right;

        y->right = node;
        node->left = T2;

        node->height = max(height(node->left), height(node->right)) + 1;
        y->height = max(height(y->left), height(y->right)) + 1;

        return y;
    }

    vector<int> printLevelOrder()
    {

        queue<TreeNode *> traversalQueue;
        traversalQueue.push(this->root);
        traversalQueue.push(NULL);
        vector<int> traversal;

        cout << '\n';

        while (traversalQueue.size() > 1)
        {

            TreeNode *top = traversalQueue.front();
            traversalQueue.pop();
            if (top == NULL)
            {
                cout << '\n';
                traversalQueue.push(NULL);
            }
            else
            {
                // traversal.emplace_back(top->val);
                cout << top->val << ' ';

                if (top->left)
                {
                    traversalQueue.push(top->left);
                }
                if (top->right)
                {
                    traversalQueue.push(top->right);
                }
            }
        }

        cout << "\n";

        return traversal;
    }

    void insertNodeIterative(int data)
    {

        TreeNode *temp = this->root;

        while (true)
        {
            if (data < temp->val)
            {

                if (temp->left == NULL)
                {
                    temp->left = new TreeNode(data);
                    break;
                }
                else
                {
                    temp = temp->left;
                }
            }
            else if (data > temp->val)
            {

                if (temp->right == NULL)
                {
                    temp->right = new TreeNode(data);
                    break;
                }
                else
                {
                    temp = temp->right;
                }
            }
            else
            {
                break;
            }
        }
    }

    int height(TreeNode *node)
    {
        if (node == NULL)
            return 0;
        else
            return node->height;
    }

    int getBalance(TreeNode *node)
    {
        if (node == NULL)
            return 0;
        else
            return height(node->left) - height(node->right);
    }

    TreeNode *insertNode(TreeNode *node, int data)
    {

        /* Base case returns from here itself */

        if (node == NULL) {
            return new TreeNode(data);
        }

        /* 1. Normal BST Insertion */

        if (data < node->val) {
            node->left = this->insertNode(node->left, data);
        } else if (data > node->val) {
            node->right = this->insertNode(node->right, data);
        } else {
            return node;
        }

        /* 2. Control comes back here once the child is inserted, check balance factor of this node */

        node->height = 1 + max(height(node->left), height(node->right));

        /* Time to check the balance of the tree */

        int bal = getBalance(node);

        if (bal > 1)
        {

            if (data < node->left->val)
            {
                return rightRotate(node);
            } else if (data > node->left->val) {
                node->left = leftRotate(node->left);
                return rightRotate(node);
            }
        } else if (bal < -1) {

            if (data < node->right->val)
            {
                node->right = rightRotate(node->right);
                return leftRotate(node);
            }
            else if (data > node->right->val)
            {
                return leftRotate(node);
            }
        } else {

            return node;
        }
    }

    auto insertNode(int data)
    {

        this->root = this->insertNode(this->root, data);
    }
};

int main()
{

    AVLTree avlTree(5);


    int num = 1;
    int a = 5;
    int b = 6;
    int c = 7;
    int d = 8;

    avlTree.printLevelOrder();

    while (true)
    {

        cin >> num;

        if (num < 0)
        {
            break;
        }
        else
        {
            avlTree.insertNode(num);
            avlTree.insertNode(a);
            avlTree.insertNode(b);
            avlTree.insertNode(c);
            avlTree.insertNode(d);
            avlTree.printLevelOrder();

        }
    }

    return 0;
}