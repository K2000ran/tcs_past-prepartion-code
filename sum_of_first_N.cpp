#include <iostream>
using namespace std;
int main(){
    int n,sum;
    sum=0;
    cout<<"enter your n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"the sum of first n number is : "<<sum<<endl;
}