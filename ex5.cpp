#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"enter the value of n";
     cin>>n;
    int arr[n]={};
    for(int t=0;t<n;t++){
        cout<<"enter the element";
        cin>>arr[t];
    }
    int prefix[n]={};
    for(int i=0;i<n;i++){
        if(i==0){
        prefix[i]=arr[i];
        }
        else{
        prefix[i]=prefix[i-1]+arr[i];
        }
    }
    for(int j=0;j<n;j++){
        cout<<"the prefix sum:"<<prefix[j]<<",";
    }
    int l,r;
    int m;
    cout<<"enter the no. of queries ";
    cin>>m;
    for(int q;q<m+1;q++){
    cout<<"enter the value of l and r ";
    cin>>l>>r;
    }
    int sum;
    for(int g=0;g<m+1;g++){
    if(l>0){
       sum=prefix[r]-prefix[l-1]; 
    }
    else{
        sum=prefix[r];
    }
    cout<<sum;
}
}