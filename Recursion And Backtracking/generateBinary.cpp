#include <bits/stdc++.h>
using namespace std;
void binaryHelper(vector<string>& ans, vector<int>& soFar, int ind, int N) {
    if (ind == N) {
        string str = "";
        for (int i  = 0; i < N; i++) {
            str += to_string(soFar[i]);
        }
        ans.push_back(str);
        return;
    } 
    soFar[ind] = 0;
    binaryHelper(ans, soFar, ind+1, N);
    soFar[ind] = 1;
    binaryHelper(ans, soFar, ind+1, N);
}
vector<string> generateBinary(int N) {
    vector<int> soFar(N, 0);
    vector<string> ans;
    binaryHelper(ans, soFar, 0, N);
    return ans;
}
int main() {
    vector<string> ans = generateBinary(5);
    for (auto X : ans) {
        cout << X << endl;
    }
}