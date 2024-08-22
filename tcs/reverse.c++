#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(vector<int> &arr)
{
    int n = arr.size();
    int l = 0, r = n - 1;
    int temp;
    while (l < r)
    {
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}

int main()
{
    vector<int> arr = {7, 8, 9, 3, 6, 5, 9, 7, 2, 4, 3, 8, 1, 4};
    int n = arr.size();
    reverse(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    return 0;
}