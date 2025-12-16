class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        // code here.
        string ans;
        int i;
        stack<char>st;
        for(i=0;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
                continue;
            }
            if(st.top() == s[i])
            {
                continue;
            }
            else
            {
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};