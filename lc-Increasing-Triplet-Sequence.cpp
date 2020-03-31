// Contains the solution function to a really good short problem


bool increasingTriplet(vector<int>& nums) {
    int n=nums.size(), s, l;
    s=l=INT_MAX;
    for(int i=0;i<n;++i){
        if(nums[i]<=s)
            s=nums[i];
        else if(nums[i]<=l)
            l=nums[i];
        else
            return true;
    }
    return false;
}
