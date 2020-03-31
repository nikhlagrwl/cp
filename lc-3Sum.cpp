// Contains the solution function to 3sum problem from leetcode

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> a;
    sort(nums.begin(), nums.end());
    int n=nums.size();

    for(int i=0;i<nums.size();++i){
        int j=i+1;
        int k=n-1;

        if(i>0 && nums[i]==nums[i-1])
            continue;

        while(j<k){
            if(k<n-1 && nums[k]==nums[k+1]){
                k--;
                continue;
            }
            if(nums[i] + nums[j] + nums[k] > 0)
                k--;
            else if(nums[i] + nums[j] + nums[k] < 0)
                j++;
            else{
                a.push_back({nums[i], nums[j], nums[k]});
                ++j, --k;
            }
        }
    }
    return a;
}
