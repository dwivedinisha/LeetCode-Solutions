class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int>ans;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     // int rem = target - nums[i]; 
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j] == target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //         }
        //     }
        // }
        // return ans;
        vector<int>ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int rem = target - nums[i]; 
            for(int j=i+1;j<n;j++){
                if(nums[j] == rem){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};