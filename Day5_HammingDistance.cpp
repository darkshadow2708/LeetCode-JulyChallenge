class Solution {
public:
    int hammingDistance(int x, int y) {
        string u="", v="";//string to store binary of both x and y
        int ans=0;
        while(x!=0||y!=0)//binary conversion
        {
            u+=to_string(x%2);
            v+=to_string(y%2);
            x/=2;
            y/=2;
        }
        while(u.length()!=32)//making both x and y 32 bits
            u+="0";
        while(v.length()!=32)
            v+="0";
        for(int i=0;i<32;i++)
            if(u[i]!=v[i])
                ans++;
        return ans;
        
    }
};
