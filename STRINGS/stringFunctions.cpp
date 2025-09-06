#include<iostream>
using namespace std;

int main(){

    string name = "Maharana Pratap";
    
    cout << name[0] << endl;
    cout << name.at(0) << endl; 

    cout << name.front() << endl;        //front element of the string will be printed
    cout << name.back() << endl;          //end element of the string will be printed

    cout << name.length() << endl;

    auto it = name.begin();

    while(it != name.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;
     
      string hi = "Hello My Name is Ani ";
 cout << hi.substr(0,10) << endl;      // ye kisi index se kaha tak
 cout << hi.substr(5) << endl;          // ye fifth index se end tak 
  
string yo = " Hello ji kaise ho saare" ;
string word = "kaise";

int ans = yo.find(word);
cout << ans << endl;


    return 0;
}