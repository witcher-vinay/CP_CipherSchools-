#include<bits/stdc++.h>
using namespace std;
void sorting(vector <int>& vec )
{
    int count0 = 0 , count1 = 0 ;
    for(auto x : vec ) 
    {
        if( x == 0 )
        {
            count0++ ;
        }
        else if( x == 1 )
        {
            count1++ ;

        }
    }
    for(int i = 0 ; i < vec.size() ; i++ )
    {
        if( count0 != 0 )
        {
            vec [i] = 0 ;
            count0 -- ;
        }
        else if( count1 != 0 )
        {
            vec [i] = 1 ;
            count1 -- ;
        }
        else
        {
            vec[i]=2;
        }
    }
        return ;

}

int main()
{
    vector <int> vec= { 1,0,2,0,0,2,1,0,1,2,0,0 };
    sorting(vec);
    
    for(auto x : vec)
    {
        cout<< x << " " ;
    }
    
    return 0;
}
