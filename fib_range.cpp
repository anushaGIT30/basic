#include<iostream>
using namespace std;
int main(){
    int low,high;
    cin>>low>>high;
    if(low<0 || high<0||low>high){
        return 1;
    }
    int t1=0,t2=1,t3=0;
    if(t1>=low && t1<=high){
        cout<<t1<<" ";
    }
    if(t2>=low  && t2<=high){
        cout<<t2<<" ";
    }
    for(int i=2;i<=high;i++){
        t3=t1+t2;
        if(t3>high){
            break;;
        }
        if(t3>=low)
        cout<<t3<<" ";
        t1=t2;
        t2=t3;
    }
    cout<<endl;
}