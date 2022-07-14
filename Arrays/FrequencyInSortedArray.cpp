/*Given a sorted array of integers nums of size n and a target value k, find the frequency of the target element k in nums.*/

int solve(int n, vector<int> nums, int k){
//CODE HERE 
int ans;
unordered_map<int,int>hash;
for(int i=0;i<n;i++){
    hash[nums[i]]++;
}
for(int i=0;i<n;i++){
    if(nums[i]==k){
        ans=hash[nums[i]];
    }
}
return ans;
}
