#include<bits/stdc++.h> 
using namespace std; 
int dig[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};  
int nonZero(int n) { 
    if (n < 10) return dig[n]; 
    if (((n/10)%10)%2 == 0) return (6*nonZero(n/5)*dig[n%10]) % 10; 
    else return (4*nonZero(n/5)*dig[n%10]) % 10; 
}  
int main() { 
    int n = 14; 
    cout << nonZero(n); 
    return 0; 
} 