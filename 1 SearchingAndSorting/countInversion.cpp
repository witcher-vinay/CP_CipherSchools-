#include<bits/stdc++.h>
using namespace std;
int countInversion( const vector <int>& vec )
{
    int ans = 0;
    for(int i = 0; i < vec.size()-1 ; i++ )
    {
        for( int j= i+1 ; j < vec.size() ; j++)
        {
            if(vec[i] > vec[j])
            {
                ans++;
            }
        }
    }

  return ans;
}
int main()
{
    vector < int > vec ={1,3,32,7,8,7,5,4,3,1,12,3,45,23,12,325,56,87,73,23,4 };
    int ans = countInversion(vec);
    cout << ans << endl ;
    return 0;  

}