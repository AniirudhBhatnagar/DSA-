#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *Left;
    Node *Right;

    Node(int val)
    {
        this->data = val;
        Left = NULL;
        Right = NULL;
    }
};

Node *createTree()
{
    int val;
    cout << "Enter The Value" << endl;
    cin >> val;

    if (val == -1)
    {
        return NULL;
    }
    else
    {
        Node *root = new Node(val);
        cout << "Adding to Left Child for" << val << endl;
        root->Left = createTree();
        cout << "Adding to Right Child for" << val << endl;
        root->Right = createTree();
        return root;
    }
}

int main(){
    Node* root;
    root = createTree();
    return 0;
}