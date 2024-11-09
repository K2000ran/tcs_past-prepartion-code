#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c;
    a=0;
    b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        //for series for fibb number
        cout<<c<<" ";
    }
    cout<<endl;
    //for nth fib number
    cout<<c;

}
