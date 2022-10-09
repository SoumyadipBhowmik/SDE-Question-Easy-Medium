#include <bits/stdc++.h>
#include <iostream>
using namespace std;

char getMaxOccCharacter(string s){
    //initialized an array of 26 for mapping each character
    int arr[26] = {0};
    for(int i = 0; i < s.length(); i++){
    //this part is very important since i'm taking the string's ith value here.
        char ch = s[i];
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        else{
            number = ch - 'A';
        }
        //if the values are added record them in number in the array
        arr[number]++;
    }
    int maximum = -1, ans = 0;
    for(int i = 0; i < 26; i++){
        if(maximum < arr[i]){
            ans = i;
            maximum = arr[i];
        }
    }
    char returnAns = 'a'+ans;
    return returnAns;
    //theres one drawback of this program is that this will only return the first element from the alphabet table and ignore the rest
    //like for 'aabb' it will return a and ignore b
}


int main(){
    string s;
    cin >> s;

    cout << getMaxOccCharacter(s);

    return 0;
}