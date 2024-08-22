#include <bits/stdc++.h>
using namespace std;
int find_median(vector<int> v)
		{
		    sort(v.begin(),v.end());
		    int n = v.size();
		    int ans;
		    if(n%2==0){
		        ans = (v[n/2-1]+v[n/2])/2;
		    } else {
		        ans = v[n/2];
		    }
		    return ans;
		}

int main()
{
    vector<int> arr = {7, 8, 9, 3, 6, 5, 9, 7, 2, 4, 3, 8, 1, 4};
    int median = find_median(arr);
    cout<<median;
    return 0;
}