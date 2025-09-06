// It basically stores the address of the variabls.
// Pointer is just a variable that stores the address of another variable.

// agar apan isme  bole int a = 5 toh iska mtlb ek symbol table hoti hai usme entery banti hai jaise a -> 104 a ki location 104 hai aise .

// if we want to access the address of the variable we use &a .

 #include<iostream>
 using namespace std;

 int main(){
    int a = 5;
    int *p = &a;
    int *q = p;

    cout << "a :  " << a << endl; 
    cout << "&a: " << &a << endl;
    cout << "p :  " << p << endl;
    cout << "&p: " << &p << endl;
    cout << "*p: " << *p << endl;
    cout << "q :  " << q << endl;
    cout << "&q: " << &q << endl;
    cout << "*q: " << *q << endl;
    
    int arr[] = {1,2,3,4};
    cout << arr + 1 << endl;
    return 0;
 }
