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
int getLength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        temp = temp -> next;
        count++;
    }
    return count;
}

void deleteInLL(int position,Node* &head,Node* &tail){
    int length = getLength(head);
   if(head == NULL && tail == NULL){
    cout << "No Node to Delete" << endl;
    return;
   }
   else if(head == tail){
    Node* temp = head;
    head = NULL;
    tail = NULL;
    delete temp;
   }
   else if(position == 1){
    Node* temp = head;
    head = head->next;
    head-> prev = NULL;
    delete temp;
   }
   else if(position == length){
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    Node* back = temp->prev;
    back->next = NULL;
    temp-> prev = NULL;
    tail = back;
    delete temp;
   }
   else{
    Node *back = head;
    Node *temp = NULL;
    Node *front = NULL;
    for(int i = 0; i < position - 2;i++){
        back = back -> next;
    }
    temp = back -> next;
    front = temp -> next;
    back-> next = front;
    front -> prev = back;
    temp -> prev = NULL;
    temp-> next = NULL; 
    delete temp;
   } 
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(10,head,tail);
    insertAtHead(20,head,tail);
    insertAtHead(30,head,tail);
    insertAtHead(40,head,tail);
    insertAtTail(101,head,tail);
    printLL(head);
    deleteInLL(5,head,tail);
    printLL(head);
    return 0;
}