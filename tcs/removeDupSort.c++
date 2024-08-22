// Remove duplicates from a sorted array

#include <bits/stdc++.h>
using namespace std;

int remove_duplicate(vector<int> &arr) {
        int count=1;
        int n = arr.size();
        for(int i = 1;i<n;i++){
            if(arr[i] != arr[i-1]){
                arr[count] = arr[i];
                count++;
            }
        }
        return count;
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