#include<bits/stdc++.h>
using namespace std;
int main(){
    int nl;
    cout<<" enter the num: ";
    cin>>nl;
    int temp=nl;
    int sum=0;
    int rem;
    while(nl!=0){
        rem=nl%10;
        sum=sum*10+rem;
        nl/=10;
    }
    cout<<sum<<endl;
    if (sum==temp){
        cout<<" palidrome ";
    }
    else{
        cout<<"not palidrome ";
    }
}