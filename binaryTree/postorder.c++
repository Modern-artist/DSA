#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *right;
    Node *left;
    Node(int val) : data(val), right(nullptr), left(nullptr) {}
};

void postorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout << "Preorder Traversal\n";
    postorder(root);
    return 0;
}