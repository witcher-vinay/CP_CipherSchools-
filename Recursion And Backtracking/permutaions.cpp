#include <bits/stdc++.h>
using namespace std;

void permutationHelper(string str, int start, int end, vector<string>& result) {
    if (start >= end) {
        result.push_back(str);
    } else {
        for (int i = start; i <= end; i++) {
            swap(str[i], str[start]);
            permutationHelper(str, start+1, end, result);
            swap(str[i], str[start]);
        }
    }
}

vector<string> permutation(string str) {
    vector<string> result;
    permutationHelper(str, 0, str.size() - 1, result); 
    return result;
}

int main() {
    vector<string> result = permutation("ABCDEFG");
    for (string str : result) {
        cout << str << " ";
    }
}