#include<iostream>
#include<vector>
using namespace std;
int main(){
int target;
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
                    for(int k=0;k<n;k++){
                        cout<<"{"<<i<<j<<"}";
                }
            }
        } 
    }
cout<<"not valid";
}