class Solution {
public:
    bool checkDivisibility(int n) 
    {
        int aa=n;
        int sum =0;
        int prod = 1;
        int digit=0;
        int ret = 0;;
        while(aa>0)
        {
            int digit = aa%10;
            sum = sum+ digit;
            prod = prod * digit;
            aa = aa/10;
        }
        ret = sum+prod;
        if(n%ret ==0)
        {
            return true;
        }
        return false;
    }
};