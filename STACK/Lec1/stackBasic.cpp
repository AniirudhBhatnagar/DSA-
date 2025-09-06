#include<iostream>
using namespace std;

class Stack{
      public:
      
      int* arr;
      int size;
      int top;

      Stack(int capacity){
        arr = new int[capacity];
        size = capacity;
        top = -1;
      }

      void push(int value){
        if(top == size - 1){
            cout << "Overflow, The Stack is full" << endl;
        }
        else{
            top++;
            arr[top] = value;
        }
      }

      void pop(){
        if(top == -1){
            cout << "Stack Empty" << endl;
        }
        else{
            arr[top] = -1;
            top --;
        }

      }

      int getSize(){
             return top + 1;
      }

      bool isEmpty(){
           if(top == -1){
            return true;
           }
           else{
            return false;
           }
      }

      int stackTop(){
           if(top == -1){
            cout << "No top" << endl;
            return -1;
           }
           else{
            return arr[top];
           }
      }

      void print(){
        cout << "Printing Stack" << endl;
        for(int i = 0; i < size ; i++){
            cout << arr[i] << " ";
        }
        cout << endl; 
      }
};
int main(){
    // creation 
    Stack s(5);
    s.print();
    // insertion
    s.push(10);
    s.push(20);
    s.push(30);

    s.print();

    s.push(40);
    s.push(50);
    
    s.print();

    // s.push(60);

    // check stack size

    cout << "Stack size is " << s.getSize() << endl;

    // check is stack empty 

    cout << s.isEmpty() << endl;

    // deletion on stack 

    s.pop();
    s.print();

    // checking what is at the top of the stack 

    cout << "The top of the stack is :" << s.stackTop() << endl;
    
    return 0;
}