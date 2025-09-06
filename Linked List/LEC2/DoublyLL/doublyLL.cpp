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

int main(){

    return 0;
}