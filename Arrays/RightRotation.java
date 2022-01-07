/* A right rotation operation on an array of size 'n' shifts each of the array's elements 1 unit to the right. 
Given an integer,'d', rotate the array that many steps right and return the result.
Example:
d=2
arr=[1,2,3,4,5]
After 2 rotations, arr' = [4,5,1,2,3]
*/



import java.util.Scanner;
class Main {  
    public static void main(String[] args) {  
        Scanner s = new Scanner(System.in);
        //Initialize array  
         int n,k;
        int [] arr = new int [100] ;
       
        System.out.println("number of elements in array: ");
        k = s.nextInt();
        //n determine the number of times an array should be rotated  
        System.out.println("value of n: ");
        n = s.nextInt();
         for(int i=0;i<k;i++){
             arr[i] = s.nextInt();
         }
        //Displays original array  
        System.out.println("Original array: ");  
        for (int i = 0; i < k; i++) {   
            System.out.print(arr[i] + " ");   
        }    
          
        //Rotate the given array by n times toward right 
        for(int i = 0; i < n; i++){  
            int j, last;  
            //Stores the last element of the array  
            last = arr[k-1];  
            for(j = k-1; j >0; j--){  
                //Shift element of array by one  
                arr[j] = arr[j-1];  
            }  
            //last element of array will be added to the beginning of the array  
            arr[0] = last;  
        }  
          
        System.out.println();  
          
        //Displays resulting array after rotation  
        System.out.println("Array after right rotation: ");  
        for(int i = 0; i< k; i++){  
            System.out.print(arr[i] + " ");  
        }  
    }  
} 
