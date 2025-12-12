class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(i == (k-1)) return arr[i];
        }
        return 0;
    }
};