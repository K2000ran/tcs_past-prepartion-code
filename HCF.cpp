#include<iostream>
using namespace std;
int main(){
    int num1,num2,hcf,lcm;
    hcf=1;
    cout<<"enter the num1 and num2: ";
    cin>>num1>>num2;
    for(int i =1;i<=num1 || i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            hcf=i;
        }
    }
    cout<<"hcf is : "<<hcf<<endl;
    lcm=(num1*num2)/hcf;
    cout<<" lcm is : "<<lcm;
}