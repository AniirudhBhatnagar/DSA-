#include <iostream>
using namespace std;
class Node{
  public:
    int data;
    Node* next;
    Node(int value) {
      this->data = value;
      this->next = NULL;
    }
};

Node* insertAtHead(int value, Node* &head, Node* &tail) {
  if(head == NULL && tail == NULL ) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
  }
  else {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
  }
  return head;
}

void insertAtTail(int value, Node* &head, Node* &tail) {
  if(head == NULL && tail == NULL) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
  }
  else {
    Node* newNode = new Node(value);
    tail->next  = newNode;
    tail = newNode;
  }

}void print(Node* head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp -> data << "->";
    temp = temp-> next;
  }
  cout<<"NULL" << endl;
}

int getLength(Node* head) {
  int len = 0;
  Node* temp = head;
  while(temp != NULL) {
    temp = temp->next;
    len++;
  }
  return len;
}
bool searchInLL(int value,Node* head,Node*tail,int length){
    Node *temp = head;
    while(temp != NULL){
        // if(length == 1){
        //     if(temp -> data == value){
        //         return true;
        //     }
        //     else{
        //         return false;
        //     }
        // }
        if(temp-> data == value){
            return true;
        }
        else{
            temp = temp -> next;
        }
    }
    return false;
}
int main() {

  Node* head = NULL;
  Node* tail = NULL;

  int length = getLength(head);

  insertAtHead(20,head,tail);
  insertAtHead(40,head,tail);
  insertAtHead(60,head,tail);
  insertAtTail(101,head,tail);s  
  insertAtTail(102,head,tail);
  insertAtTail(103,head,tail);
  print(head);
  bool ans = searchInLL(101,head,tail,length);
  cout << ans << endl;
  return 0;
}