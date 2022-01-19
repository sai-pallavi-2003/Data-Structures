/*given two sorted arrays, to print Union of the two arrays.
array1 of size m and array2 of size n.*/



#include<iostream>
using namespace std;
void printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
        {
          /* since the arrays are sorted, print the smaller element and move to the comparision of next element by i++ nad vice versa by j++*/
            cout << arr1[i] << " ";
            i++;
        }
        else if (arr1[i] > arr2[j]){
          cout << arr2[j] << " ";
            j++;
        }
        else {
          /* if the elements are same print only once and increase both the counters*/
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
    while (i < m)
      /*printing the remaining elements of array1*/
        cout << arr1[i++] << " ";

    while (j < n)
      /*printing the remaining elements of array2*/
        cout << arr2[j++] << " ";
}
int main()
{
    int m ,n; 
    cout << "Enter size of 1st array: ";
    cin >> m;
    int arr1[m];
    cout << "Enter elements of 1st array: ";
    for(int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter size of 2nd array: ";
    cin >> n;
    int arr2[n];
    cout << "Enter elements of 2nd array: ";
    for(int j = 0; j < n; j++)
    {
        cin >> arr2[j];
    }
    cout << "Arrays After Union : ";
    printUnion(arr1, arr2, m, n);

}
