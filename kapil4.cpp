#include<bits/stdc++.h>
using namespace std;
int main(){
int size_a;
int size_b;
cout<<"enter the size of array A and B: ";
cin>>size_a>>size_b;
vector<int> a(size_a), b(size_b);

    
    cout << "Enter elements of array A: ";
    for (int i = 0; i < size_a; i++) {
        cin >> a[i];
    }

    
    cout << "Enter elements of array B: ";
    for (int i = 0; i < size_b; i++) {
        cin >> b[i];
    }

int size_temp;
 size_temp=size_a+size_b;
int temp[size_temp];
 int i = 0, j = 0, k = 0;

    // Merge the arrays in sorted order
    while (i < size_a && j < size_b) {
        if (a[i] < b[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = b[j++];
        }
    }

    // Copy remaining elements from array A if any
    while (i < size_a) {
        temp[k++] = a[i++];
    }

    // Copy remaining elements from array B if any
    while (j < size_b) {
        temp[k++] = b[j++];
    }
for(int i=0;i<size_temp;i++){
    cout<<temp[i]<<" ";
}
}
