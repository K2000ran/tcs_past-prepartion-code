#include <iostream>
using namespace std;
void convert_dec_to(int n){
    long long binary=0;
    int rem;
    int i=1;
    while(n!=0){
        rem=n%2;
        n=n/2;
        binary=binary+rem*i;
        //changing the ones into tens and tens into hundred
        i=i*10;
    }
    cout<<"the binary number is : "<<binary;
}
int main (){
    int n;
    cout<<"enter your decimal number : ";
    cin>>n;
    convert_dec_to(n);
}
