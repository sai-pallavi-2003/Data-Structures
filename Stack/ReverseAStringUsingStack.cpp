/* You are given a string S, the task is to reverse the string using stack.*/


//return the address of the string
char* reverse(char *S, int len)
{
    
    stack <char> s;
    for(int i=0;i<len;i++){
      //copy the contents of the string into the stack
        s.push(S[i]);
    }
    for(int i=0;i<len;i++){
        S[i]=s.top();
      //set the pointer to the top of the stack 
        s.pop();
      //pop out the elements 
    }
    return S;
    //code here
}
