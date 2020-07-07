class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int i,n=digits.size();
        
         for(i=n-1; i>=0; i--)
         {
            if(digits[i]!=9)//if last digit is not 9,increament the digit
            {
                digits[i]++;
                break;
            }
             else//if  digits are  9
                 digits[i]=0;
        }
        
        if(i==-1)//if all the digits are 9
        digits.insert(digits.begin(),1);
        
        return digits;
        
    }
};
