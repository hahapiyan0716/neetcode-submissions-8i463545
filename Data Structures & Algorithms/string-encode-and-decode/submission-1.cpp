class Solution {
public:
    string encode(vector<string>& strs) {
        if(strs.empty()) return "";

        for(auto &str : strs){
            // 為了能夠在解碼的時候知道每個字串的長度，我們在每個字串前面加上它的長度和一個特殊字符（例如 #）作為分隔符。
            // to_string(str.size()) 是將字串的長度轉換為字串形式，例如 "5"。這樣在解碼的時候，可以讀取這個長度，然後知道接下來的幾個字符是原始字串的一部分。
            str = to_string(str.size()) + "#" + str;
        }
        // 將所有處理過的字串連接起來
        string encoded = "";
        for(const auto &str : strs){
            encoded += str;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        if(s.empty()) return {};

        vector<string> decoded;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i, j-i)); // 讀取字串的長度
            i = j + 1;
            j = i + length;
            decoded.push_back(s.substr(i, length)); // 根據長度讀取原始字串
            i = j;
        }
        return decoded;
    }
};