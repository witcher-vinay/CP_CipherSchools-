#include<bits/stdc++.h>
using namespace std;
int bestValue(vector <int >  vec)
{    
        int maxValue=vec[0];
        int ans=0;
        for(auto x : vec)
        {
            if(x < maxValue)
                maxValue=x;
            else
                ans=max(ans,(x-maxValue));  
        }
         return ans; 
}
int main()
{
    vector <int > vec ={3,4,6,7,12,34,56,3,90,87,65 };
    int ans = bestValue(vec);
    cout<< ans << endl; 

}