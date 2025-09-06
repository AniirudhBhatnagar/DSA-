#include<iostream>
#include<queue>
using namespace std;

class Node{
    
public:
       int data;
       Node* left;
       Node* right;
       
       Node(int value){
           this->data = value;
           left = NULL;
           right = NULL;
       }
};

Node* createTree(){
    int value;
//   cout << "Enter Value : " << endl;
   cin >> value;
   
   if(value == -1) return NULL;
   else{
       Node* root = new Node(value);
       root->left = createTree();
       root->right = createTree();
       return root;
   }
}

void preOrderTraversal(Node* root){
    if(root == NULL) return;
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
     if(root == NULL) return;
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
     cout << root->data << " ";
}

void inOrderTraversal(Node* root){
     if(root == NULL) return;
    preOrderTraversal(root->left);
    cout << root->data << " ";
    preOrderTraversal(root->right);
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
          Node* front = q.front();
          q.pop();
    if(front == NULL){
        cout << endl;
        if(!q.empty()){
q.push(NULL);
        }
    }
    else{
      cout << front->data << " ";
    
    if(front->left != NULL){
        q.push(front->left);
    }
    if(front->right != NULL){
        q.push(front->right);
    }
    }
    }
}
int main() {
    Node* root;
    root = createTree();
    preOrderTraversal(root);
    cout << endl;
    postOrderTraversal(root);
    cout << endl;
    inOrderTraversal(root);
    cout<<endl;
    levelOrderTraversal(root);
	return 0;
}