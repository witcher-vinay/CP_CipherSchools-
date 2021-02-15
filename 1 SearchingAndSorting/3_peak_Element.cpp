#include<bits/stdc++.h>
using namespace std;

int peakElement ( const vector < int > & vec )
{
    int vecSiz = vec.size();
    if(vecSiz == 1)
    {
        return vec[0];
    }
    else if( vec[0] > vec[1] )
    {
        return vec[0];
    }
    else if ( vec [ vecSiz-1 ] > vec [ vecSiz-2 ])
    {
        return vec[vecSiz-1];
    }
    else
    {
          for ( int i = 1 ; i < vecSiz-1 ; i++ )
            {
                if(vec[i] > vec[i-1]  && vec[i] > vec[i+1] )
                {
                    return vec[i];
                }
            }

    }
  

}
int main()
{
    vector < int > vec = { 2 , 3 , 7 , 11 ,19 , 21 , 2 , 7 , 11 };
    int peakEle = peakElement ( vec );
    cout << peakEle << endl ;  
 
}
