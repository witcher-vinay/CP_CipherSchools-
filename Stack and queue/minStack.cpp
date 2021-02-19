#include <bits/stdc++.h>
using namespace std;

stack<int> S;
int getMin;
void push(int temp) {
    if (S.empty()) {
        S.push(temp);
        getMin = temp;
    } else {

        if (temp >= getMin)
            S.push(temp);
        else {
            S.push(2*temp - getMin);
            getMin = temp;
        }
    }
}

void pop() {
    if (S.empty()) {
        return;
    } else {
        int y = S.top();
        if (y >= getMin) 
            S.pop();
        else {
            getMin = (2*getMin - y);
            S.pop();
        }
    }
}

int getMinimum() {
    return getMin;
}

int main()
{
    stack<int> S;
    for (int i = 0; i < 5; i++)
        S.push(i + 1);
    
    for (int i = 0; i < 5; i++)
        S.pop(i + 1);

}