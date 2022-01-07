/* reversing an array using InPlace Algorithm.
In-Place algorithm is used to modify and transform input without using extra or auxiliary storage.
It modifies the input and reduces it to required output using temporary variables.
*/

#include<iostream>
using namespace std;
int main() {
    int arr[100];
    int i, j, s, temp;
    cout << "Enter size of an array:";
    cin>>s;
    cout << "Enter array elements:";
    for (i = 0; i < s; i++) {
        cin >> arr[i];
    }
    j = s - 1;
    for (i = 0; i < j; i++) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
     cout << "After reversing array elements are :";
    for (i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
