#include<iostream>
using namespace std;
int main(){
    int first,last,sum;
    cout<<"enter your first number: ";
    cin>>first;
    cout<<"enter your last number : ";
    cin>>last;
    sum=0;
    for(int i=first;i<=last;i++){
        sum=sum+i;
    }
    cout<<"sum is : "<<sum;
}