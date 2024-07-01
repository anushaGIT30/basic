#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t1=0;
    int t2=1;
    int t3,sum=0;
    if(n<=0){
        cout<<"enter the good number";
    }
    cout<<t1<<" ";
    sum+=t1;
    if(n>1){
        cout<<t2<<" ";
        sum+=t2;
    }
   

    for(int i=2;i<n;i++){
        t3=t1+t2;
        cout<<t3<<" ";
        t1=t2;
        t2=t3;
        sum+=t3;

    }
    cout<<endl<<sum<<endl;
}