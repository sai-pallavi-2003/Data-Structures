/*given two sorted arrays of sizes m and n, print the common elements of the two arrays*/

#include<iostream>
using namespace std;
void printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j]){
            j++;
        }
        else {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
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
    cout << "Arrays After Intersection : ";
    printUnion(arr1, arr2, m, n);

}
