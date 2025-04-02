class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 0)
            return 0;
        unordered_set<int> st;
        for(int i = 0; i < n; i++)
        {
            st.insert(nums[i]);
        }
        int ln = 0;
        for(int i : st)
        {
            if(st.find(i-1) ==  st.end())
            {
                int ct = 1;
                while(st.find(i+ct) !=  st.end())
                {
                    ct++;
                }
                ln = max(ln, ct);
            }
        }
        return ln;
    }
};
