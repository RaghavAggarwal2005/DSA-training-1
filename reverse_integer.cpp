#include<iostream>
#include<climits>
using namespace std;

int main() {
   int x;
   cin>>x;
        int reversed=0;
        while(x != 0){
            int lastDigit =x%10;
             if((reversed>INT_MAX/10)||(reversed<INT_MIN/10)){
                return 0;
            }
            reversed=reversed*10+lastDigit;
            x/=10;
        }
            cout<<reversed;
};