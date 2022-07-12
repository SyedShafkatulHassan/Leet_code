class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0))
        {
            return false;
        }
        string s= to_string (x);
        string s1=s;
        reverse(s.begin(),s.end());
        int flg=0;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]!=s1[i])
           {
               flg=1;
               return false;
           }
        }
        return true;
    }
};
