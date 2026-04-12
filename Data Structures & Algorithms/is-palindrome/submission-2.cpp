class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i] - 'A' + 'a';
            }
            else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                continue;
            }
            else{
                s.erase(i, 1);      // 從字串 s 的索引位置 i 開始，刪除剛好 1 個字元。
                i--;                // 因為刪除字串會讓後面的往前擠，所以計數器要往回一個，確保所有字元都有讀取到
            }
        }
        string s_reverse = "";
        for(int i=s.length()-1;i>=0;i--){
            s_reverse += s[i];
        }
        if(s_reverse == s){
            return true;
        }
        else{
            return false;
        }
    }
};