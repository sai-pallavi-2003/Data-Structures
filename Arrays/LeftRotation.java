/* A left rotation operation on an array of size 'n' shifts each of the array's elements 1 unit to the left. 
Given an integer,'d', rotate the array that many steps left and return the result.
Example:
d=2
arr=[1,2,3,4,5]
After 2 rotations, arr' = [3,4,5,1,2]
*/




import java.util.Scanner;
class Main {  
    public static void main(String[] args) {  
        Scanner s = new Scanner(System.in);
        //Initialize array   
        int [] arr = new int [100] ;
        int n,k;
        System.out.println("number of elements in array: ");
        k = s.nextInt();
        //n determine the number of times an array should be rotated  
        System.out.println("value of n: ");
        n = s.nextInt();
        System.out.println("Give the elements: ");
         for(int i=0;i<k;i++){
             arr[i] = s.nextInt();
         }
        //Displays original array  
        System.out.println("Original array: ");  
        for (int i = 0; i < k; i++) {   
            System.out.print(arr[i] + " ");   
        }    
          
        //Rotate the given array by n times toward left  
        for(int i = 0; i < n; i++){  
            int j, first;  
            //Stores the first element of the array  
            first = arr[0];  
            for(j = 0; j < k-1; j++){  
                //Shift element of array by one  
                arr[j] = arr[j+1];  
            }  
            //First element of array will be added to the end  
            arr[j] = first;  
        }  
          
        System.out.println();  
          
        //Displays resulting array after rotation  
        System.out.println("Array after left rotation: ");  
        for(int i = 0; i< k; i++){  
            System.out.print(arr[i] + " ");  
        }  
    }  
}  
