class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<=30;i++)
        {
            int d=pow(2,i);
            if(d==n)
            {
                return true;
            }
        }
        return false;
    }
};
