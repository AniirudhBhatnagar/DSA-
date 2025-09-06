#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
           
           int data;
           Node* left;
           Node* right;

           Node(int val){
             this->data = val;
             this->left = NULL;
             this->right = NULL;
           }
};

Node* buildBST(Node* root,int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }
    else{
        if(root->data > val){
           root->left = buildBST(root->left,val);
        }
        else{
           root->right = buildBST(root->right,val);
        }
    }
    return root;
}

Node* createTree(){
    cout << "Enter the value for the tree" << endl;
    int val;
    cin >> val;
    Node* root = NULL;

    while(val != -1){
         root =  buildBST(root,val);
         cout << "Enter the value for the tree" << endl;
         cin >> val;
    }
   return root;
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
            cout << front -> data << " ";
              if(front->left != NULL){
              q.push(front->left);
        }
         if(front->right != NULL){
            q.push(front->right);
        }
        }
    }
}

void maxValue(Node* root,int &ans){
    if(!root) return;
    ans = root->data;
    maxValue(root->right,ans);
}
void minValue(Node* root,int &ans){
    if(!root) return;
    ans = root->data;
    minValue(root->left,ans);
}

bool isPresent(Node* root,int target){
    bool ans = false;
    if(root->data == target) ans = true;
    else if(root->data > target){
       ans = isPresent(root->left,target);
    }
    else{
        ans = isPresent(root->right,target);
    }
    return ans;
}

int main(){
    Node* root = createTree();
    levelOrderTraversal(root);
    int maxAns = 0;
    int minAns = 0;
    maxValue(root,maxAns);
    minValue(root,minAns);
    cout << "Max Value of BST " << maxAns ;
    cout << endl;
    cout << "Min Value of BST " << minAns ;
    cout << endl;
    bool ans = isPresent(root,80);
    cout << ans << endl;
   return 0;
}