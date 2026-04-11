class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<pair<int, int>> freq_vec(freq.begin(), freq.end());
        sort(freq_vec.begin(), freq_vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });
        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back(freq_vec[i].first);
        }
        return result;
    }
};
