// Naive approach with O(n^2) time


int maxSubArray(vector<int>& nums) {
    int sum, mx=INT_MIN;
    for(int i=0;i<nums.size();++i){
        sum=0;
        for(int j=i;j<nums.size();++j)
            sum+=nums[j], mx=max(mx,sum);
    }
    return mx;
}

// Kadane's Algorithm with O(n) time

int maxSubArray(vector<int>& nums) {
    int cur, mx;
    cur=mx=nums[0];
    for(int i=1;i<nums.size();++i){
        cur=max(nums[i], nums[i]+cur);
        mx=max(cur,mx);
    }

    return mx;
}
