#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int >v;
    int size;
    cout<<"the sixe of vector: ";
    cin>>size;
     for(int i = 0; i < size; i++) {
        int n;
        cin >> n;
        v.push_back(n); // Inserting element into vector
    }
    sort(v.begin(),v.end());
    cout<<" 2nd largest elememt is "<<v[size-2]<<endl;
    cout<<" 2nd minimum element is : "<<v[1]<<endl;

}