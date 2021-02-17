#include <bits/stdc++.h>
using namespace std;
string convert(int N) {
    string res;
    while (N>0) 
    {
        N--;
        res = char('A' + n%26) + res;
        N = N/26; 
    }
    return res;
}
int main(){
    int n = 28;
    cout<<convert(n);
    return 0;
}