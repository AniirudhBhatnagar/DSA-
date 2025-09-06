// Formula for Upper to Lower Case =>  ch = 'ch'- 'A' + 'a';
// Formula for Lower to Upper Case =>  ch = 'ch'- 'a' + 'A';

 #include<iostream>
 using namespace std;

 int getLength(char arr[],int size){
    int count = 0;
    int index = 0;
  
   while(arr[index] != '\0'){
    count ++;
    index ++;
   }
   return count;
 }

void lowerToUpperCase(char arr[],int size){

    int len = getLength(arr,size);
    for(int i = 0  ; i < len ; i ++){
        char ch = arr[i];
        //agar lower case hai then only convert it.
        if(ch >='a' && ch<='z'){
        ch = ch  - 'a' + 'A';
    }
     arr[i] = ch;
    }
}

void upperToLowerCase(char arr[],int size){

    int len = getLength(arr,size);
    for(int i = 0  ; i < len ; i ++){
        char ch = arr[i];
        //agar lower case hai then only convert it.
        if(ch >='A' && ch<='Z'){
        ch = ch  - 'A' + 'a';
    }
     arr[i] = ch;
    }
}


 int main(){
    char arr[10];
    cin >> arr;
    int size = 10;

    lowerToUpperCase(arr,size);
    cout << arr;
    
    cout << endl;

upperToLowerCase(arr,size);
    cout << arr;

    return 0;
 }