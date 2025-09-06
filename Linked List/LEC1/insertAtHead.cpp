#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next; 

    Node(){
      this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void printLL(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next; 
    }
    cout << endl;
}
int getLength(Node *head){
    Node* temp = head;
    int length = 0;
    while(temp!= NULL){
        length++;
        temp = temp->next;
    }
    return length;
}
void insertAtHead(Node* &head ,int data){
     if(head == NULL){
        Node* newNode = new Node(data);
        newNode = head;
    }
    Node* newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
}
int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next = second;
    second->next = third;

    Node *head = first; 
    printLL(head);

    cout << "New LL is : " << endl;


    insertAtHead(head,100);

    printLL(head);

    return 0;
}