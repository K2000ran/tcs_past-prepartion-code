#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int row,col;
    cout<<" enter the size of row and colum: ";
    cin>>row>>col;
    vector<vector<int>> M(row, vector<int>(col)); 
     // Input the matrix elements
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> M[i][j];
        }
    }
    int arr[row];
    for(int i = 0; i < row; i++) {
        int count=0;
        for(int j = 0; j < col; j++) {
            if(M[i][j]==1){
                count ++;

            }
        }
       arr[i]=count;
    }
    for(int i=0;i<row;i++){
        cout<<arr[i]<<" ";
    }
    int max=INT_MIN;
    int index=-1;
    for(int i=0;i<row;i++){
        if(arr[i]>max){
            index=i;
            max=arr[i];
        }
    }
   
    cout << "Row with the most 1's: " << index << endl;
}