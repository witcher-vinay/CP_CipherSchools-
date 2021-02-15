#include <bits/stdc++.h>
using namespace std;

void spiralMatrix(vector<vector<int>> matrix)
{
    int rowStart = 0, rowEnds = matrix.size() - 1, columnStarts = 0, columnEnds = matrix[0].size() - 1;

    while (rowStart <= rowEnds && columnStarts <= columnEnds)
    {
        for (int i = columnStarts; i <= columnEnds; i++)
        {
            cout << matrix[rowStart][i] << " ";
        }
        rowStart++;

        for (int j = rowStart; j <= rowEnds; j++)
        {
            cout << matrix[j][columnEnds] << " ";
        }
        columnEnds--;

        if (rowStart <= rowEnds)
        {
            for (int i = columnEnds; i >= columnStarts; i--)
            {
                cout << matrix[rowEnds][i] << " ";
            }
            rowEnds--;
        }

        if (columnStarts <= columnEnds)
        {
            for (int j = rowEnds; j >= rowStart; j--)
            {
                cout << matrix[j][columnStarts] << " ";
            }
            columnStarts++;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4, 5,6, 7, 8, 9, 10}, {11, 12, 13, 14, 15,16, 17, 18, 19, 20}};
    spiralMatrix(matrix);
    return 0;
}