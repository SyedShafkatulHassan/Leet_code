class Solution {
public:
    int fib(int n) {
        vector<int>v;
        v.push_back(0);
        v.push_back(1);
        v.push_back(1);
        for(int i=3;i<=30;i++)
        {
            int d=v[i-2];
            d=d+v[i-1];
            v.push_back(d);
        }
        return v[n];
    }
};
