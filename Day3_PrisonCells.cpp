class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N)
    {
        vector<int> ans(8,0);//ans vectcor to store answer
        if(N%14==0)//After every 14 days this cycle will get repeated
        N=14;
        else
        N=N%14;
        for (int i = 1; i <= N; ++i) {
            
            for (int idx = 1; idx <= cells.size() - 2; ++idx) {
               if(cells[idx-1]==cells[idx+1])
               ans[idx]=1;
               else
               ans[idx]=0;
            }
            
            for (int idx = 0; idx < cells.size(); ++idx) {
                cells[idx] = ans[idx];//changing cells state to current state
            }
        }
        
        return ans;
    }
    
    
};
