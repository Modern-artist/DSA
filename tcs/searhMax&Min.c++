
#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

int searchMax(vector<int> arr)
{
    int maxi = arr[0], n = arr.size();
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}
int searchMin(vector<int> arr)
{
    int mini = arr[0], n = arr.size();
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
    }
    return mini;
}
int searchSecondMin(vector<int> arr)
{
    int secMin = INT_MAX, mini = INT_MAX, n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (mini > arr[i])
        {
            secMin = mini;
            mini = arr[i];
        }
        if (secMin > arr[i] && arr[i] != mini)
        {
            secMin = arr[i];
        }
    }
    return secMin;
}
int searchSecondMax(vector<int> arr)
{
    int secMax = -1, maxi = -1, n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (maxi < arr[i])
        {
            secMax = maxi;
            maxi = arr[i];
        }
        if (secMax < arr[i] && arr[i] != maxi)
        {
            secMax = arr[i];
        }
    }
    return secMax;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int maxi = searchMax(arr);
    cout << "max=" << maxi << endl;
    int mini = searchMin(arr);
    cout << "mini=" << mini << endl;
    int secMaxi = searchSecondMax(arr);
    cout << "secMaxi=" << secMaxi << endl;
    int secMini = searchSecondMin(arr);
    cout << "secMini=" << secMini << endl;
    return 0;
}