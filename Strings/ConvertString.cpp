/*Problem Statement
You are given a string 'STR'. You have to convert the first alphabet of each word in a string to UPPER CASE

Input Format :
The first line of input contains an integer ‘T’ denoting the number of test cases.
Then, the ‘T’ test cases follow.
The first and only line of each test case contains the string 'STR' that needs to be transformed.


Sample Input 1 :
3
I love programming
they are playing cricket
good to see you

Sample Output 1 :
I Love Programming
They Are Playing Cricket
Good To See You
*/

string convertString(string str) 
{
        // WRITE YOUR CODE HERE
    int i;
    int n= str.size();
    for(int i=0;i<n;i++){
        str[0]=toupper(str[0]);
        if(str[i]!=0 && str[i]==' '){
            str[i+1]=toupper(str[i+1]);
        }
    }
    return str;
	
}
