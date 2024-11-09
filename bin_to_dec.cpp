/*  
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of arr: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int m=n-1;//store the size of arr;
    int dec=0;
    for(int i=0;i<n;i++){
         dec= dec+arr[i]*pow(2,m);
         m=m-1;
    }
    cout<<"decimal NO : "<<dec;
}*/

#include <iostream>
using namespace std;
 
int main()
{
  string binaryNumber;
    cin >> binaryNumber;
    
    // format stoi(binary_in_string_format, 0, base_value)
    cout << stoi(binaryNumber, 0, 2);
 
    return 0;
}