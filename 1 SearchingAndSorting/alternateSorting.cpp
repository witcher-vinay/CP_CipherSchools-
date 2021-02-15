#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector < int  > vec ={ 1,9,8,7,6,5,4,3,2 };
    sort( vec.begin() , vec.end() ); 
    vector < int  > result(vec.size());
    int j=0;
    for ( int i=1 ; i < vec.size() ; i+=2 )
    {
        result[i] = vec[j];
        j++;
    } 
    j = vec.size()-1; 
    for(int i = 0 ; i < vec.size() ; i+=2 )
    {
            result[i]= vec[j];
            j--;
    }
    for( auto x : result)
    {
        cout<< x << " ";
    }

}