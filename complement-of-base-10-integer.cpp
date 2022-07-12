class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
        {
            return 1;
        }
        int m=n;
        int maskk=0;
        while(m!=0)
        {
            maskk=(maskk<<1)|1;
            m=m>>1;
        }
        int a=(~n)&maskk;
        return a;
    }
};
