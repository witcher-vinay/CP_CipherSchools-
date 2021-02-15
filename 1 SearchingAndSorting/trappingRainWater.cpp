#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector < int  > vec = {  3,5,3,6,7 }; 
    int size = vec.size();
    vector<int> fromRight(size);
    int fromLeft = vec[0];
    fromRight[size - 1] = vec[size - 1];
    for (int j = size - 2; j >= 0; j--)
    {
        fromRight[j] = max(fromRight[j + 1], vec[j]);
    }


    int water = 0;
    for (int i = 0; i < size; i++) {
        fromLeft = max(fromLeft, vec[i]);
        water += (min(fromLeft, fromRight[i]) - vec[i]);
        cout<< water<<" ";
    }

    cout<< water << endl ;
    return 0;
}
