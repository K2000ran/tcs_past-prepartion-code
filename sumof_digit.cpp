#include<iostream>
using namespace std;
int main(){
    int n,sum,div;
    cin>>n;
    sum=0;
   while(n!=0){
    div=n%10;
    sum=sum+div;
    n=n/10;
   }
   cout<<"the sum of digits is : "<<sum<<endl;
}