#include <iostream>
using namespace std;

void printrowSum(int arr[][3], int row, int col){
    for(row = 0; row < 3; row++){
        int sum = 0;
        for(col = 0; col < 3; col++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}
int main(){
    int arr[3][3];
    for(int rows = 0; rows < 3; rows++){
        for(int col = 0; col < 3; col++){
            cin >> arr[rows][col];
        }
    }
    printrowSum(arr, 3, 3);
    return 0;
}