#include<iostream>
using namespace std;

class Node{
   public:
    Node* prev;
    int data;
    Node* next;

    Node(int value){
        prev = NULL;
        data = value;
        next = NULL;
    }
};
void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp-> next;
    }
    cout << endl;
}
void getLength(Node* head,int &length){
    Node *temp = head;
    while(temp != NULL){
        temp = temp-> next;
        length++;
    }
}
Node* insertAtHead(int data,Node* &head,Node* &tail){
    if(head==NULL && tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;
    }
    return head;
}
void insertAtTail(int data,Node* head,Node* &tail){
     if(head==NULL && tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    else{
       
        Node* newNode = new Node(data);
        tail -> next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
bool searchInLL(int target,Node* head,Node* tail){
    Node* temp = head;
    while(temp!= NULL){
        if(temp-> data == target){
            return true;
        }
        else{
            temp = temp-> next;
        }
    }
    return false;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int length = 0;

    insertAtHead(10,head,tail);
    insertAtHead(20,head,tail);
    insertAtHead(30,head,tail);
    insertAtHead(40,head,tail);
    printLL(head);
    insertAtTail(101,head,tail);
    printLL(head);
    cout << searchInLL(30,head,tail) << endl;
    return 0;
}