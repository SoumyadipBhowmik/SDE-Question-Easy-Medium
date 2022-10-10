#include <iostream>
using namespace std;

//This function will create a linear search by traversing the rows and columns
bool isPresent(int arr[][3], int target, int row, int col){
        for(row = 0; row < 3; row++){
            for(col = 0; col < 3; col++){
                if(arr[row][col]== target)
                return true;
            }
        }
        return false;
}

//The rest of the program is pretty self-explanatory
int main(){
    //creation of a 2D array
    int arr[3][3];
    int target;

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cin >> arr[row][col];
        }
    }
    cout << "Enter the number to search: ";
    cin >> target;
    if(isPresent(arr, target, 3, 3)){
        cout << "Number found";
    }
    else{
        cout << "Not found";
    }
    return 0;
}

