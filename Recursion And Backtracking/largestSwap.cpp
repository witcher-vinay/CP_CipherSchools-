#include <bits/stdc++.h>
using namespace std;

void findMax(
    string stringOne, int k,
    string& max, int count)
{
    if (k == 0)
    {
        return;
    } 
    int n = stringOne.size();
    char maximumu1 = stringOne[count];
    for (int j = count + 1; j < n; j++) 
    {
        if (maximumu1 < stringOne[j]) maximumu1 = stringOne[j];
    }
    if (maximumu1 != stringOne[count])
    {
        --k;
    } 
 
    for (int j = count; j < n; j++) {
        if (stringOne[j] == maximumu1) {
            swap(stringOne[count], stringOne[j]);
            if (stringOne.compare(max) > 0) max = stringOne;
            findMax(stringOne, k, max, count + 1);
            swap(stringOne[count], stringOne[j]);
        }
    }
}
 
int main(){
    string stringOne = "12989";
    int k = 4;
    string max = stringOne;
    findMax(stringOne, k, max, 0);
    cout << max << endl;
    return 0;
}