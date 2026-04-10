class Solution {
private:
    bool isAnagram(string& s1, string& s2) {
        if (s1.size() != s2.size()) return false;
        vector<int> count(26, 0);
        for (int i = 0; i < s1.size(); i++) {
            count[s1[i] - 'a']++;
            count[s2[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) return false;
        }
        return true;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> results;
        for(int i=0;i<strs.size();i++){
            vector<string> anagrams;
            anagrams.push_back(strs[i]);
            for(int j=i+1;j<strs.size();j++){
                if(isAnagram(strs[i], strs[j])){
                    anagrams.push_back(strs[j]);
                    strs.erase(strs.begin()+j);
                    j--;
                }
            }
            results.push_back(anagrams);
            strs.erase(strs.begin()+i);
            i--;
        }
        return results;
    }
};