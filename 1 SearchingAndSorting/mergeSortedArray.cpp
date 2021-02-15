#include <bits/stdc++.h>
using namespace std;
vector<int> mergeSortedArrays(const vector<int>& firstArray, const vector<int>& secondArray)
{
    int i = 0, j = 0, k = 0;
    vector<int> resultArray(firstArray.size() + secondArray.size());

    while (i < firstArray.size() && j < secondArray.size())
    {
        if (firstArray[i] <= secondArray[j])
        {
            resultArray[k] = firstArray[i];
            i++;
        }
        else
        {
            resultArray[k] = secondArray[j];
            j++;
        }
        k++;
    }

    while (i < firstArray.size())
    {
        resultArray[k] = firstArray[i];
        i++;
        k++;
    }

    while (j < secondArray.size())
    {
        resultArray[k] = secondArray[j];
        j++;
        k++;
    }

    return resultArray;
}

int main()
{
    vector<int> firstArray =  {2, 3, 6,45,67,98,23,34,12};
    vector<int> secondArray = {1, 3, 4, 6, 77, 91};
    vector<int> resultArray = mergeSortedArrays(firstArray, secondArray);
    for (int i = 0; i < resultArray.size(); i++) {
        cout << resultArray[i] << " "; 
    }
    return 0;
}