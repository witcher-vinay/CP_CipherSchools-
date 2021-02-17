#include<bits/stdc++.h> 
using namespace std; 
int lDid[] = {1, 1, 2, 6};  
int sol(int n) { 
    if (n < 10) 
    {
        return lDid[n];
    } 
    if (((n/10)%10)%2 == 0)
    {
      return (6*sol(n/5)*lDid[n%10]) % 10;  
    }  
    else
    {
        return (4*sol(n/5)*lDid[n%10]) % 10;
    }  
}  
int main() { 
    int n = 14; 
    cout << sol(n); 
    return 0; 
} 