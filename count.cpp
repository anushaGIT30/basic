#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rem;
    int count=0;
    while(n!=0){
        rem=n%10;
        n/=10;
        count=count+1;
    }
    cout<<count;
}