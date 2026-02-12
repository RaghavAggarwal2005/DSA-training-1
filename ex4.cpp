#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        vector<int> ans;

        int maxRight = arr[n-1];
        ans.push_back(maxRight);

        for(int i = n-2; i >= 0; i--) {
            if(arr[i] >= maxRight) {
                maxRight = arr[i];
                ans.push_back(arr[i]);
            }
        }

        reverse(ans.begin(), ans.end());
        for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}