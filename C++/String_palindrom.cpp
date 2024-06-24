#include <bits/stdc++.h>
using namespace std;
void Palindrome(string str) {
    int n = str.size();
    bool isPalindrome = true;
    for (int i = 0; i < n / 2; ++i) {
        if (str[i] != str[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

void Old_Palindrom(string str){
    int n = str.size();
    string str_rev;
    cout  << "Using Old method !" << endl;
    for(int i = n-1; i>=0; --i){
        str_rev.push_back(str[i]);

    }
    cout << str_rev;
    if(str == str_rev){
        cout << "\nYES" << endl;
    }
    else{
        cout << "\nNO" << endl;
    }
}


int main(){
    string str;
    getline(cin, str);
    Palindrome(str);
    Old_Palindrom(str);
    return 0;

}