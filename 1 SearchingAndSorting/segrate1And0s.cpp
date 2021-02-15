#include<bits/stdc++.h>
using namespace std;
void sorting(vector <int>& vec )
{
    int count = 0 ;
    for(auto x : vec ) 
    {
        if( x == 0 )
        {
            count++ ;
        }
    }
    for(int i = 0 ; i < vec.size() ; i++ )
    {
        if( count != 0 )
        {
            vec [i] = 0 ;
            count -- ;
        }
       
        else
        {
            vec[i]=1;
        }
    }
        return ;

}

int main()
{
    vector <int> vec= { 1,0,0,0,1,0,1,0,0 };
    sorting(vec);
    
    for(auto x : vec)
    {
        cout<< x << " " ;
    }
    
    return 0;
}
