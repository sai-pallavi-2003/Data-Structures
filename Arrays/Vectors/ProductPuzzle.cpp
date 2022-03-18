/* product except self:
You are given an array of ‘N’ integers. 
You need to return another array ‘product’ such that ‘product[i]’ contains the product of all the arrays except the element at the ith position in the given array.
*/
//Brute force : T.C :O(n^2)


int mod = 1e9 + 7;

vector < int > productPuzzle(vector < int > & arr, int n) {

    vector < int > product(n, 0);
    for (int i = 0; i < n; ++i) {
        int temp = 1;
        
        for (int j = 0; j < n; ++j) {
            if (j != i) {
                temp = (int)(((long) temp * arr[j]) % mod);
            }
        }
        product[i] = temp;
    }

    return product;
}
