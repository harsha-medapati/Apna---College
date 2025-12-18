class Solution {
public:
    bool rotateString(string s, string goal) {
        string s1 = s;
        while(s1 != goal)
        {
            char ch = s1[0];
            s1.erase(0,1);
            s1.push_back(ch);
            if(s1 == s) return false;
        }
        return true;
    }
};