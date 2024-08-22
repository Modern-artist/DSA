#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> arr = {7, 8, 9, 3, 6, 5, 9, 7, 2, 4, 3, 8, 1, 4};
    int k = 4;
    // cin>>k;
    int n = arr.size();
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin()+k+1, arr.end());
    reverse(arr.begin(),arr.end());
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    return 0;
}