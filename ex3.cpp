#include<iostream>
#include<vector>
using namespace std;
int main(){
int target;
cin>>target;
int n;
cin>>n;
vector<int> nums(n);
for(int i=0;i<n;i++){
    cin>>nums[i];
}
//  int n= nums.size();
for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j] == target){
                        cout<<"{"<<i<<","<<j<<"}";
                        break;
                }
            } 
        }
    }