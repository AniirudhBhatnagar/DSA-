// for impelementing queue we neend 1) Array 2) size of array 3)fornt 4) rear;
// in normal queue pop hamesha front se hota hai 
 
#include<iostream>
using namespace std;

class Queue{
    private:
        int* arr;
        int size;
        int front;
        int rear;
    public:
        Queue(int capacity){
            arr = new int[capacity];
            size = capacity;
            front = -1;
            rear = -1;
        }

void push(int value){
    if(rear == size - 1){
        cout << "Cannot insert , Queue is Full" << endl;
    }
    else if(front == -1 && rear == -1){
        rear++;
        front++;
        arr[rear] = value;
    }
    else{
        rear++;
        arr[rear] = value;
    }

}

void pop(){
      if(front == -1 && rear == -1){
        cout << " Underflow,Cannot Pop any item." << endl;
    }
    else if(front == rear){
        arr[rear] = -1;
        rear--;
        front--;
    }
    else{
        arr[rear] = -1;
        rear --;
    }
}

int getFront(){
    if(front == -1){
     cout << "Queue is Empty" << endl;
    }
    else{
        return arr[front];
    }
}

int getRear(){
 if(rear == -1){
     cout << "Queue is Empty" << endl;
    }
    else{
        return arr[rear];
    }
}

int getSize(){
    if(front == -1 && rear == -1){
        cout << " stack is Empty" << endl;
    }
    else{
        rear - front + 1;
    }
}

bool isEmpty(){
    if(front == -1 && rear == -1){
        return true;
    }
    else{
        return false;
    }
}
};

int main(){

    Queue q(5);

    q.push(100);
    q.push(110);
    q.push(120);
    q.push(130);
    q.push(140);

    cout << q.getSize() << endl;

    
    return 0;
}