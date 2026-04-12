class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> results;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size(); j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]+nums[j]+nums[k] == 0){
                        results.insert({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }

        return vector<vector<int>> (results.begin(), results.end());
    }
};