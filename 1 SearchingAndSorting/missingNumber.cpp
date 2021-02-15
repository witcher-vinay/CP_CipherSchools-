#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int > vec ={2,3,4,5,6,7,8,9};
    long long realSum=((vec.size()+1)*(vec.size()+2))/2;
    long long vecSum=0;
    for(auto X: vec)
    {
        vecSum+=X;
    }
    cout<< realSum - vecSum << endl; 
}