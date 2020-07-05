//We will make use of the fact that next ugly number will be 2 times,3 times or 5 times the previous ugly number.
class Solution {
public:
    int nthUglyNumber(int n) {
int i=0,j=0,k=0;
        int next_ugly_number=1;
        int next_multiple2=2;
        int next_multiple3=3;
        int next_multiple5=5;
        int v=1;
		    int ans[n];
	     	ans[0]=1;
        while(1)
        {
            if(v==n)
                break;
            next_ugly_number=min(next_multiple2,min(next_multiple3,next_multiple5));
			 ans[v]=next_ugly_number;
			 v++;
             if(next_ugly_number==next_multiple2)
             {
				 i++;
                  next_multiple2=ans[i]*2;
             }
                 if(next_ugly_number==next_multiple3)
             {
				 j++;
                  next_multiple3=ans[j]*3;
             }
                 if(next_ugly_number==next_multiple5)
             {
				 k++;
                  next_multiple5=ans[k]*5;
             }
		}
 return ans[n-1];
        
    }
};
