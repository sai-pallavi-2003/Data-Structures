/*Problem Statement
You have been given a text message. You have to return the Run-length Encoding of the given message.
Run-length encoding is a fast and simple method of encoding strings. The basic idea is to represent repeated successive characters as the character and a single count.
For example, the string "aaaabbbccdaa" would be encoded as "a4b3c2d1a2".

completing the given function*/

string encode(string &message)
{
  //YOUR CODE HERE
  
    int n = message.size(), i;
    string encodedMessage = "";
    for (i = 0; i < n; i++)
    {
        int Freq = 1;
        while (i<n-1 && message[i+1]==message[i])
        {
            i++;
            charFreq++;
        }
      //since we dont have to print anything we use 'vector' functions: push_back and append 
      //'push_back' adds the charecter first and then 'append' adds the frequency or appends it to the charecter
        encodedMessage.push_back(message[i]);
        encodedMessage.append(to_string(Freq));
    }
    return encodedMessage;
}

