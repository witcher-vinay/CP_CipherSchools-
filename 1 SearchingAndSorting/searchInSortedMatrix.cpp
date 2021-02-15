#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4][4]= { { 1 ,  2, 3, 4  }
                    { 5  ,  6, 7, 8   }
                    { 9 ,  10,11,12   }
                    { 13,  14 ,15,16  }
    };
    int elementToSearch = 10;
    for( int i= 0 ; i <= 3 ; i++ )
    {
        for (int j = 0; j <= 3; j++ )
        {
            if(arr[i][j]== elementToSearch )
            {
                cout<< i << " " << j << endl;
                return 0;
            }
        }
        
    }
    cout << "Element does't exist " << endl; 
    return 0;
}