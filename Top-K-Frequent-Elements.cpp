class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        vector<pair<int, int>> a;
        for(int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }    
        for(auto i:mp)
        {
            a.push_back({i.second, i.first});
        }

        sort(a.begin(), a.end(), greater<pair<int, int>>());
        vector<int> ans;
        int i = 0;
        while(i < k)
        {
            ans.push_back(a[i].second);
            i++;
        }
        return ans;

    }
};
