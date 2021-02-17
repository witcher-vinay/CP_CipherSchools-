#include<bits/stdc++.h>
using namespace std;

vector<string> keypad = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
void combinationsHelper(string digits,vector<string>& ans, string soFar , int digitIndex){
    if(digitIndex==digits.size()){
        ans.push_back(soFar);
        return;
    }
    string currentKey = keypad[digits[digitIndex]-'0'];
    for(int i =0;i<currentKey.size();i++){
        soFar.push_back(currentKey[i]);
        combinationsHelper(digits,ans,soFar,digitIndex+1);
        soFar.pop_back();
    }
}

vector<string> generateCombinations(string digits) {
    vector<string> ans;
    if(digits.size()==0) return ans;
    combinationsHelper(digits,ans,"",0);
    return ans;
}

int main(){
    vector<string> ans = generateCombinations( "123");
    for(auto X: ans){
        cout << X << " ";
    }
}