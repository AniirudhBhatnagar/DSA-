#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next; 

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

void insertAtTail(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);
    
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return; 
    }

    tail->next = newNode;
    tail = newNode;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;

    if(tail == NULL) {
        tail = newNode;
    }
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
void deleteInLL(int position,Node* head,Node*tail){
    if(head==NULL && tail == NULL){
        cout << "No node to delete" << endl;
        return;
    }
    else if(head == tail){
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else{
    Node *temp = head;
    Node *curr = NULL;
    for(int i = 0; i < position - 2;i++){
        temp = temp -> next;
    }
    curr = temp->next;
    temp->next = curr-> next;
    curr->next = NULL;
    delete curr;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    insertAtTail(head, tail, 100);
    printLL(head);
    deleteInLL(3,head,tail);
    printLL(head);
    deleteInLL(4,head,tail);
    printLL(head);
    return 0;
}
