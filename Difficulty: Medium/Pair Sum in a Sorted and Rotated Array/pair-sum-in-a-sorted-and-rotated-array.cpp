// User function Template for C++

class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        // code here
        int i=0,j=arr.size()-1;
        sort(arr.begin(),arr.end());
        while(i < j)
        {
            if(arr[i] + arr[j] == target)
            {
                return true;
            }
            if(arr[i] + arr[j] < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return false;
    }
};