class Solution {
public:
    int firstUniqChar(string s) 
    {
        int a[26] = {0};
        int l = s.size();
        for(int i = 0; i < l; i++)
        {
            a[s[i]-'a']++;
        }
        for(int i = 0; i < l; i++)
        {
            if(a[s[i]-'a']== 1)
                return i;
        }
        
        return -1;
    }
};
