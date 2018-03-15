class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int exists [256];
        int maxlength=0;
        int count=0;
        for(int i=0;i!=s.length();i++)
        {
            if (exists[s.at(i)]!=1)
            {
                exists[s.at(i)]=1;
                ++count;
            
            }
            else if (count>=maxlength)
            {
            
                maxlength=count;
                count=0;
             }
           
        }
            return maxlength;
        }
};
