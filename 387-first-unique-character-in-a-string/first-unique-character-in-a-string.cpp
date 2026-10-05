class Solution {
public:
    int firstUniqChar(string s) {
        queue<int> q;
        unordered_map<char,int> freq;

        for(char ch: s) {
            freq[ch]++;
        }

        for(int i = 0; i < s.length(); i++) {
            if(freq[s[i]] == 1) {
                q.push(i);
            }
        }
        return (q.empty()) ? -1 : q.front();
    }
};