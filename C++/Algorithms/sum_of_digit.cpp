#include <bits/stdc++.h>


void SumofDigit(double x){
    int sum = 0;
    while(x>0){
        sum = sum + int (x)%10;
        x = x/10;

    }
    std :: cout << sum << std :: endl;
}
