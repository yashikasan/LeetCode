class Solution {
public:
    int smallestNumber(int n, int t) 
    {
        int num = n;
      while( num<=100)
      {
        int lastn = num%10;
        int firstn = num/10;
        int product = lastn * firstn;
        if(num<10)
        {
            if(num%t == 0)
            {
                return num;
            }
            else
            {
                num++;
            }
        }
        else if(product%t != 0)
        {
            num++;
        }
        else
        {
            return num;
        }
        
      }
      return num;
    }
};