class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0,i,n = 0;
        for(i=0;i<bank.size();i++)
        {
            string s = bank[i];
            int p = count(s.begin(),s.end(),'1');
            if(p > 0 && n == 0) n = p;
            else if(p > 0 && n > 0)
            {
                ans += n*p;
                n = p;
            }
        }
        return ans;
    }
};