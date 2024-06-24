
#include <iostream>
#include <cstdlib>

using namespace std;

int SumArrays(){
    int arr[10] = {121, 34, 5345, 88, 90};
    int sum = 0;
    for(int i=0; i<=4; i++){
        sum += arr[i];
    }
    return sum;

}

int MultidimensionalArrays(int n, int m){
    int arr[n][m];
    // MultiDimensional arrays can be accessed with different methods
    // 1. Using for loop
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // 2. Using Pointers
    int *ptr = &arr[0][0];
    // 3. Using Array Name
    //int (*ptr2)[3] = arr;

    // If You want to access a specific Element in the array
    // You can use the following methods
    cout << "The Element at 2nd Row and 3rd Column is: " << arr[1][2] << endl;
    // remember that the index starts from 0
    
}
int main(){
    /*int arr[10];

    for(int i=0; i<=9; i++){
        arr[i] = rand() ;
        cout <<"[" << arr[0] << "]" << endl;
    }*/
    int n;
    int m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;
    cout << "The sum of Elements of an array is: " << SumArrays();
    


}