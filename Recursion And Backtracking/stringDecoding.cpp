#include <bits/stdc++.h>
using namespace std;

vector<string> mymap = {"", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
void decodeHelper(vector<string>& result, string& digits, int index, string strSoFar) {
    if (index >= digits.size()) {
        result.push_back(strSoFar);
        return;
    }
    int index1 = int(digits[index] - '0');
    if (index1 == 0) {
        return;
    }
    decodeHelper(result, digits, index+1, strSoFar + mymap[index1]);

    if (index + 1 >= digits.size()) {
        return;
    }

    int index2 = int(digits[index + 1] - '0');
    if (10*index1 + index2 <= 26)
        decodeHelper(result, digits, index+2, strSoFar + mymap[10*index1 + index2]);
}
vector<string> decodeString(string& digits) {
    if (digits == "") {
        return vector<string>{};
    }
    vector<string> result;
    decodeHelper(result, digits, 0, "");
    return result; 

}
int main() {
    string decode = "121222121211212112214414112"; 
    vector<string> result = decodeString(decode);
    for (auto  X : result) {
        cout << X << " ";
    }
}