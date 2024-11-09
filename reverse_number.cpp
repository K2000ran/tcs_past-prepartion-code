#include<iostream>
using namespace std;
int main (){
    int n;
    int sum=0;
    cout<<"enter the num: ";
    cin>>n;
    int num=n;
    while(n!=0){
        int div=n%10;
        sum=sum*10+div;
        n=n/10;

    }
    cout<<"the reversed Number: "<<sum<<endl;
    if (num==sum){
        cout<<"palidrome number: "<<endl;
    }
    else{
        cout<<" not paldrome"<<endl;
    }
}