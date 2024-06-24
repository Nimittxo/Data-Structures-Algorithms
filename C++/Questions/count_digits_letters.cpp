#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int letters_only(string str){
    int count = 0;
    for (int i = 0; i < str.length(); i++){
        if (isalpha(str[i])){
            count++;
        }
    }
    return count;
}
int digits_only(string str){
    int count = 0;
    for (int i = 0; i < str.length(); i++){
        if (isdigit(str[i])){
            count++;
        }
    }
    return count;
}
int main(){
    string str;
    str = "SRMIST 2024";
    cout << "No. of Letters are: " << letters_only(str) << endl;
    cout << "No. of Digits are: " << digits_only(str) << endl;
}