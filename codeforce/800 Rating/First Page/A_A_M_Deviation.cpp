#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 3);
      
        while ((arr[0] + arr[2] - 2 * arr[1]) > 1)
            {
                arr[1]++;
                arr[2]--;
            }
        while ((-arr[0] - arr[2] + 2 * arr[1]) > 1)
            {
                arr[2]++;
                arr[1]--;
            }
        if (abs(arr[0] + arr[2] - 2 * arr[1]) == 0)
        {
            cout << "0"
                 << "\n";
        }
        else if (abs(arr[0] + arr[2] - 2 * arr[1]) == 1)
        {
            cout << "1"
                 << "\n";
        }
    }
}