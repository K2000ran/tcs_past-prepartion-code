#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the num: ";
    cin>>n;
    int temp=n;
    int rem;
    int count=0;
    while(n!=0){
        
        rem=n%10;
        int a=rem;
        if(temp%a==0){
            count++;
        }
        n/=10;  
    }
    cout<<count<<endl;
}