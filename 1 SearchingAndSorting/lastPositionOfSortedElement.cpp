#include<bits/stdc++.h>
using namespace std;
int binarySearch ( vector < int > vec , int start , int end , int element )
{
    int middle = (start+end)/2;
    if(element == vec[middle])
    {
        return middle;
    }
    else
    {
        if(vec[middle] >=  element) 
        {
            return binarySearch(  vec ,  start , middle , element);
        }
        else
        {
            return binarySearch( vec , middle , end , element);
        }
    }

}
int countOccurance( const vector < int > vec  , int  element  )

{
    int position = binarySearch(  vec , 0 , vec.size()   ,  element ) ;
    int position1 =position+1;
    int count = 0;
    while( position >= 0 &&  vec[position]== element )
    {
        count ++;
        position--;
    }
    while( position < vec.size() &&  vec[position1]== element )
    {
        count ++;
        position1++;
    }
    return count ;

}
int main()
{
        vector < int > vec = {1,1,1,2,2,3,4,5,6,7,7,7,8,8,8,8,8,8};
        int ans=countOccurance ( vec , 7 ) ;
        cout << ans << endl ;
}