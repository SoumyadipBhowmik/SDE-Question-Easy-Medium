/*Complete program on how to rotate an array CLOCKWISE OR ANTICLOCKWISE with Time COmplexity O(N) and space O(1)*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LEFT 0
#define RIGHT 1

void reverse(vector<int> &arr, int start, int end){
    //reverse the array elements from front to end using reverse algorithm
    while( start <= end){
        swap(arr[start++], arr[end--]);
    }
}
void rotate(vector<int> &arr, int key, int dir){
    //this function will use the function reverse to reverse certain parts of the array as instructed
    int n = arr.size();

    //this rotates the array anticlockwise or towards LEFT
    if (dir == LEFT){
        int k = n + key;
        reverse(arr, 0, (k - 1) % n);
        reverse(arr, k % n, n - 1);
        reverse(arr, 0, n - 1);
    }
    else if (dir == RIGHT){
    //this movement is basically clockwise (Assuming that the value of k is not in negative)
        reverse(arr, 0, n - key - 1); //this goes for the index and not the number value in that index
        reverse(arr, n - key, n - 1);
        reverse(arr, 0, n - 1);
    }
}
void printArray(vector<int> arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//driver code
int main(){
    int key, dir;
    cout << "Enter key value: ";
    cin >> key;
    cout << "Press 0 for LEFT and 1 for RIGHT: ";
    cin >> dir;
    vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(9);
    arr.push_back(10);


    cout << "The Default array: " << endl << endl;
    printArray(arr);

    cout << endl;
    cout << "Rotated array: " << endl << endl;
    rotate(arr, key, dir);
    printArray(arr);


    return 0;
}