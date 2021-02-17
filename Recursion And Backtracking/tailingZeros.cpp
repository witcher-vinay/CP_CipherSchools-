#include <bits/stdc++.h>
using namespace std;

int trailingZero(int n){
    int count = 0;
    for (int i = 5; n / i >= 1; i)
    {
        count = count + n / i;
        i=i*5;
    } 
    return count;
}
int main(){
    int n = 100;
    cout<<trailingZero(n);
}