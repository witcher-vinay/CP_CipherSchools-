#include<bits/stdc++.h>
using namespace std;
int kSmallestElement( vector < int > vec , int element  )
{
    sort(vec.begin() , vec.end());
    return vec[element-1];
}

int main()
{
    vector < int > vec ={5,6 ,8,4,2,9,7,8,2,1,5,7,8,9 ,12,34,56,78,90};
    int ans= kSmallestElement(  vec , 5 );
    cout << ans << endl;

}