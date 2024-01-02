// Trees are the non-linear data structures having multiple childs.
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// how to build a tree.
node *buildTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of data " << data << endl;
    root->right = buildTree(root->right);
    return root;
}
int main()
{
    node *root = NULL;
    root = buildTree(root);
    return 0;
}