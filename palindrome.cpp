#include <iostream>
using namespace std;

char toLowerCase(char fromName){
    if(fromName >= 'a' && fromName <= 'z'){
        return fromName;
    }
    int temp = fromName - 'A' + 'a';
    return temp;
}

bool checkPalindrome(char name[], int n){
    int start = 0, end = n-1;
    while(start <= end){
        if(toLowerCase(name[start]) != toLowerCase(name[end])){
            return false;
        }
        start++;
        end--;
    }
    return true;
}


void getReverse(char name[], int n){
    int start = 0, end = n-1;
    while(start <= end){
        swap(name[start++], name[end--]);
    }
}

int getLength(char name[]){
    int len = 0;
    for(int i = 0; name[i] != '\0'; i++){
        len++;
    }
    return len;
}

int main(){
    char name[20];

    cout << "Enter your name: " << endl;
    cin >> name;
    int len = getLength(name);

    cout << "The length of the name is: " << len <<endl;
    getReverse(name, len);
    cout << "The reversed name is: " << name << endl;

    cout << "Is this palindrome? " << (checkPalindrome(name, len)) <<endl;
}