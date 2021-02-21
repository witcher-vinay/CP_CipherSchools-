#include <bits/stdc++.h>
using namespace std;
bool areDistinct(string str, int i, int j)
{

    vector<bool> visited(26);
 
    for (int k = i; k <= j; k++) {
        if (visited[str[k] - 'a'] == true)
            return false;
        visited[str[k] - 'a'] = true;
    }
    return true;
}

int longestUniqueSubsttr(string str)
{
    int n = str.size();
    int res = 0; 
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (areDistinct(str, i, j))
                res = max(res, j - i + 1);
    return res;
}
int main()
{
    string str = "test";
    int len = longestUniqueSubsttr(str);
    cout << len;
    return 0;
}