#include <iostream>
#include <vector>
//  #include "./stdc++.h"
using namespace std;

void Frequency(vector<int> arr)
{
    int n = arr.size();
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
        map[arr[i]]++;

    for (auto x : map)
        cout << x.first << " " << x.second << endl;
}

int main()
{
    vector<int> arr = {7, 8, 9, 3, 6, 5, 9, 7, 2, 4, 3, 8, 1, 4};
    Frequency(arr);
    return 0;
}