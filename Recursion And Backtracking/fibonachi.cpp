#include<bits/stdc++.h>
using namespace std;
int fibonachi( int n )
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    return fibonachi(n-1) + fibonachi(n-2);
}

int main()
{
    int ans= fibonachi(9);
    cout << ans << endl ;


}