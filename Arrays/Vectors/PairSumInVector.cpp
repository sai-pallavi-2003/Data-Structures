/*You are given a vector V of size n. The vector hold pair of integers. Example V={(1,2),(3,4)...}. Now, you need to sum the second elements.*/
/*the function contains vector of pairs*/
//Complete this function to print the sum
void sum(vector<pair<int,int>>v)
{
    long long sum=0;
    //Your code here
    for(int i=0;i<v.size();i++){
        sum+=v[i].second;
    }
    cout<<sum;
    cout<<endl;
}
