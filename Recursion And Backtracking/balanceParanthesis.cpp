#include<bits/stdc++.h>
using namespace std;
void  balanceParanthesis( vector <string> &result , int start , int end , int N , string str  )
    {
        if(start < 0 || end < 0 || end > start || start > N || end > N)
        {
            return;
        }
        if(start==N && end==N)
        {
            result.push_back(str);
            return ;
        }
            balanceParanthesis( result , start+1 , end , N , str+ "{");
            balanceParanthesis( result , start , end+1 , N , str+ "}");
        
    }
vector<string> paranthesis(int N)
{
    vector <string>  result ;
    balanceParanthesis( result , 0 , 0 , N , "");
    return result;

}

int main()
{
    vector <string> ans=paranthesis(4);
    for(auto x: ans)
    {
        cout<<x<<endl;
    }

}