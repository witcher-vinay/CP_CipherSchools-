#include <bits/stdc++.h>
using namespace std;
bool ifPersonMeet( int firstSpeed , int secoundSpeed , int firstDistance , int secoundDistance )
{
        if ( firstSpeed > secoundSpeed && firstDistance >= secoundDistance )
        {
            return false;
        }
        else if ( firstSpeed < secoundSpeed && firstDistance <= secoundDistance )
        {
            return false;
        }
        else
        {
            if( firstDistance < secoundDistance )
            {
                swap( firstDistance , secoundDistance );
                swap(firstSpeed, secoundSpeed );
            }
            while( firstDistance > secoundDistance )
            {
                if ( firstDistance == secoundDistance )
                {
                    return true;
                }
                firstDistance += firstSpeed;
                secoundDistance +=secoundSpeed;
            }
            return false;
        }
}

int main()
{
    bool value = ifPersonMeet( 3, 4 , 6 , 12 );
    if(value)
    {
        cout << " YES " << endl ; 
    }
    else
    {
         cout << " NO " << endl;
    }
    return 0;
}
