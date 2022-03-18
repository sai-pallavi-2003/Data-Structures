/* You are given an array/list, 'arr’ of size ‘N’ update each element of the array by the value obtained by dividing the element by 4 (take only integer part).
If the value obtained by dividing element by 4 comes out to be 0, then update the element with value -1.*/
#include<vector>
void divideByFour(vector<int> &arr){
    // Write your code here.
    int siz = arr.size();
    
    for(int i=0;i<siz;i++){
        arr[i]=arr[i]/4;
        if(arr[i]==0){
            arr[i]=-1;
        }
        
        
    }
