/*Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:
Integers in each row are sorted from left to right. The first integer of each row is greater than the last integer of the previous row.
searching is the given target element is present in the array, if it is then printing its position*/

//(this question is taken from hackerrank "Search a 2D Matrix.

#include<iostream>
using namespace std;
int main(){
    int n,m,arr[100][100],target;
    cout<<"number of rows(m): ";
    cin>>m;
    cout<<"number of columns(n): ";
    cin>>n;
    cout<<"give the elements of the matrix: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"give the element to search: ";
    cin>>target;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==target){
                cout<<"found at: "<<i+1;
            }
        }
    }
}
