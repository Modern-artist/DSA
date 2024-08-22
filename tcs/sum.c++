// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> arr = {7, 8, 9, 3, 6, 5, 9, 7, 2, 4, 3, 8, 1, 4};
    int n = arr.size();
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    cout<<"sum = "<<sum;
    return 0;
}