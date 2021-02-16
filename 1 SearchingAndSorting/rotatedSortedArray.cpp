#include <bits/stdc++.h>
using namespace std;
int binarySearch ( vector < int > vec , int start , int end , int element )
{
    int middle = (start+end)/2;
    if(element == vec[middle])
    {
        return middle;
    }
    else
    {
        if(vec[middle] >=  element) 
        {
            return binarySearch(  vec ,  start , middle , element);
        }
        else
        {
            return binarySearch( vec , middle , end , element);
        }
    }

}

int findPivot(vector<int> vec, int start, int end){
    if (start  > end)
        return -1;

    if (start == end)
        return start;
    int mid = start + (end - start)/2;
    if (mid < end && vec[mid] >= vec[mid + 1]) {
        return mid;
    }

    if (start < mid && vec[mid - 1] >= vec[mid]) {
        return mid - 1;
    }

    if (vec[start] <= vec[mid]) {
        return findPivot(vec, mid + 1, end);
    } else {
        return findPivot(vec, start, mid - 1);
    }
}
int searchInSortedRotated(vector<int> vec, int x) {
    int i = 0, j = vec.size() - 1;
    int pivotElement = findPivot(vec, i, j);

    int res1 = binarySearch(vec, i, pivotElement, x);
    int res2 = binarySearch(vec, pivotElement+1, j, x);
    if (res1 < 0) {
        return res2;
    } else {
        return res1;
    }
}

int main() {
    vector<int> vec = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 1, 2, 3, 4};
    cout << findPivot(vec, 0, vec.size() - 1) << endl; 
    return 0;
}