#include <bits/stdc++.h>
using namespace std;

void insertAtRightPlace(stack<int> &Stac, int temp)
{
    if (Stac.empty() || Stac.top() <= temp)
    {
        Stac.push(temp);
    }
    else
    {
        int temp1 = Stac.top();
        Stac.pop();
        insertAtRightPlace(Stac, temp);
        Stac.push(temp1);
    }
}

void reverseStack(stack<int> &Stac)
{
    if (!Stac.empty())
    {
        int temp = Stac.top();
        Stac.pop();
        reverseStack(Stac);
        insertAtRightPlace(Stac, temp);
    }
}
int main()
{
    stack<int> Stac;
    for (int i = 0; i < 5; i++)
        Stac.push(i + 1);
    reverseStack(Stac);
    while (!Stac.empty())
    {
        cout << Stac.top() << " ";
        Stac.pop();
    }
    return 0;
}