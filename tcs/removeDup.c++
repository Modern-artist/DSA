// Remove duplicates from an array

#include <bits/stdc++.h>
using namespace std;

void remove_duplicate(vector<int> &arr) {
        int count=1;
        int n = arr.size();
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++){
           mp[arr[i]]++;
        }
        for(i : mp ){
           cout<<mp.first;
        }

        // code here
    }

int main(){
    vector<int> arr = {7, 8, 9, 3, 6, 5, 9, 7, 2, 4, 3, 8, 1, 4};
    int n = remove_duplicate(arr);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
        }
        return 0;

}