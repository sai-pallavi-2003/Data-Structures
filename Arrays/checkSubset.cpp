/* input an array of length na and subarray of length ns.
to check if all the elements of the subarray are also present in the array.
even if one element is not found in common, then it is not a subarray.
*/



#include<iostream>
using namespace std;
int checkSubSet(int array[], int na, int arrsub[],  int ns) {
  int i,j;
  for (i = 0; i < ns; i++) {
    for ( j = 0; j < na; j++) {
      if (arrsub[i] == array[j]) {
        break;
      }
      }
      /*if the above loop hasn't been breaked even once then it is not a subarray.
      as the value of j would have increased and the loop would have been terminated as the condition becomes false.
      hence we return 0*/
      if(j==na){
        return 0;
    }
  }
  /*if the control of the loop has reached till here it means all the subarray elements are present in array.*/
return 1;
}
int main(){
    int na,ns,array[100],arrsub[100];
    cout<<"length of array and subarray: ";
    cin>>na>>ns;
    cout<<"give array[]: ";
    for(int i=0;i<na;i++){
        cin>>array[i];
    }
    cout<<"give subarray[]: ";
     for(int i=0;i<ns;i++){
        cin>>arrsub[i];
    }
    if(checkSubSet(array,na,arrsub,ns)){
        cout<<"yes its a subarray";
    }
    else{
        cout<<"no its not a subarray";
    }
    
}

