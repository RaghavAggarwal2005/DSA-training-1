#include<iostream>
#include<string>
#include<cstring>
#include<vector>
using namespace std;
int main(){
    string str;
    cout<<"enter a string ";
    cin>>str;
    int n=str.size();
    char arr[1000];
    strcpy(arr,str.c_str());
    int i=0; 
    int j=n-1;
    while(i<n/2){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    string str1(arr);
    cout<<str1;
}