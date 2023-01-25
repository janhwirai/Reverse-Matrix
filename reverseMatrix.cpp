#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(vector<vector<int>>&matrix,int n){
    //Reverse the matrix
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
/*
1   2   3       3   2   1
4   5   6       6   5   4
7   8   9       9   8   7
*/

int main(){
    int n;
    cout<<"Enter the size of matrix:-";
    cin>>n;
    vector<vector<int>> matrix(n);
    cout<<"Enter elements of matrix:-\n";
    for(int i=0;i<n;i++){
        matrix[i].assign(n,0);
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Given matrix is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    reverse(matrix,n);
    cout<<"The Reverse of the given matrix is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}