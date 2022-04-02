/* Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
*/


class Solution {
public:
    bool isValid(string s) {
         // Your code here
        stack<char> x;
      //creating a charecter stack x
     for(int i=0; i<s.length(); i++){
         char ch = s[i];     
         //if opening bracket,push it onto stack
         //if closing bracket, check the stack top if its closing bracket and pop it    
         if(ch == '(' || ch == '{' || ch == '['){
             x.push(ch);
         }
         else
         {
             //for closing bracket
             if(!x.empty()) {
                  char top = x.top();
                  if( (ch == ')' && top == '(') || 
                     ( ch == '}' && top == '{') || 
                     (ch == ']' && top == '[') ) {
                      x.pop();
                  }
                 else
                 {
                     return false;
                 }
             }
             else
             {
                 return false;
             } 
         }  
     }
      // return false if there is no closing bracket or if there are 2 opening brackets simultaneously 
    
    if(x.empty())
        return true;
    else
        return false;
        
    }
};
