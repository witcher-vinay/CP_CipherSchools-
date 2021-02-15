#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n){
    
      int ans=*max_element(arr, arr +n);
  int sum=0;
if(ans<=0)
{
  return ans;
}
else
{
    for(int i = 0 ; i < n ; i++ )
  {
    if(sum <= 0)
    {
      sum=0;
    }

    if(arr[i]>=0)
    {
      sum+=arr[i];
    }
    else
    {
      ans=max(sum,ans);
      sum+=arr[i];
    }
  }
  ans=max(sum,ans);
  return ans;
}
    
    
    
}


int main()
{
    int t,n;
    
    cin>>t; 
    while(t--) 
    {
        
        cin>>n;
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        
        cout << maxSubarraySum(a, n) << endl;
    }
}