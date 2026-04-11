class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int longest = 1;
        for(int i=0;i<nums.size();i++){
            int current = 1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j] == nums[j-1]) continue; // Skip duplicates
                if(nums[j] == nums[i]+current){
                    current++;
                    longest = max(longest, current);
                }
                else break;
            }
        }
        return longest;
    }
};