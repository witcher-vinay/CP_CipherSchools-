#include<bits/stdc++.h>
using namespace std;

int maxElement( const vector <int >& vec )
{
    int ans=vec[0];
    int maxCount = 0 ;    
    for( auto x : vec)
    {
        if ( maxCount == 0 )
        {
            ans = x ;
        }
        if( x == ans )
        {
            maxCount++;
        }
        
        if ( x != ans )
        {
            maxCount--;
        }
    }

    return ans ;

}
int main()
{
    vector < int > vec= { 2,2,2,2,4,5,6,7,8,9,2,3,4,5,6,78,2,2,2,2,2,2,2,2,2,2,2 };
    int ans = maxElement (vec) ;
    cout << ans << endl ;
}
