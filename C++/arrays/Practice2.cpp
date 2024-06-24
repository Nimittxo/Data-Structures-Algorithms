#include <iostream>
#include <string>
using namespace std;

int main(){
    int arr[10];
    for(int i = 1; i <= 20; i++){
        if(i % 2 == 0){
            arr[i] = i;
            cout << arr[i] << " ";


        }
        
    }
    string letters[4][4] = {{"A", "B", "C", "D"},
                      {"E", "F", "G", "H"},
                      {"I", "J", "K", "L"},
                      {"M", "N", "O", "P"}};
    string mapping[5] = {"A", "E", "I", "O", "U"};    
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            for(int k = 0; k< 5; k++){
                if(letters[i][j] == mapping[k]){
                    cout << "\nThe vowels are: " << letters[i][j] << " ";
                }
            }
        }
        cout << endl;
    }
}