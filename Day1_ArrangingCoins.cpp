//we need to find a given p
such that p*p+p<=2*n
class Solution {
public:
    int arrangeCoins(int n) {
        long long  m=2*(long long)(n);
        if(n==0)
            return 0;
        long long p=sqrt(m);
        while(1)
        {
            if(p*p+p<=m)
                return p;
            p--;
        }
        
    }
};
