#include<iostream>
#include<map>
using namespace std;
int main(){

// creation of unoredered map 

unordered_map<int,int> desk_map;

// initalisation of unordered map 

desk_map[1] = 50;
desk_map[2] = 53;
desk_map[3] = 54;

// here we can also reasign or over write or update tha value

desk_map[2] = 52;

// now if we want to traverse through the map we have to make an iterator 

// creation of an iterator 

unordered_map<int,int>::iterator it;

// now iterating all the elements of the map using iterator and for loop 

for(it = desk_map.begin(); it != desk_map.end();it++){

    // aur key ko access karne ka lia hume -> use karna padega jaise it -> index

int key = it -> first;
int value = it -> second;

cout <<"key: "<< key << "value: " << value << endl;

// isme values ulti print ho rahi hai kyuki maps mai order maintained nahi rehta hai 

}


// another syntax
// in this auto will automatically determine its type 

for(auto it : desk_map){
    int key = it.first;
    int value = it.second;
    cout <<"key: "<< key << "value: " << value << endl;
}

// now koi entry access ya find kaise karenge .

// find table mai ya map mai bhot fast hota hai kyuki time complexity average case ki o(1) hoti hai  aur worst case ki toh o(n) he hoti hai .

// vector mai v.end() mtlb last part nahi hota hai last part ka baad hota hai 

if(desk_map.find(2) != desk_map.end()){

// iska matlb agar pura iterate nahi huwa to pahale he mil gaya hoga esliye found mtlb end se pahale he mil gaya to mtlb hai aur agar end la equal ho gaya to nahi hai toh loop ka bahar aa jaaega aur end ka equal nhi huwa to loop ka andar chala jaaega 

    //found
    int value = desk_map[2];
    cout <<"found: "<< value << endl;
}
else {
    //not found
    cout << "not found" << endl;
}

// now how to delete in map
// deletion 
// key se he hota hai deletion  

desk_map.erase(2);

if(desk_map.find(2) != desk_map.end()){
 int value = desk_map[2];
    cout <<"found: "<< value << endl;
}
else {
    cout << "not found" << endl;
}

return 0;


}

 
