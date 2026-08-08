class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> aaa;
        for(int i= 1; i <= n; i++)
        {
            if(i %3 ==0 && i % 5 ==0)
            {
                aaa.push_back("FizzBuzz");
            }
            else if(i%3==0)
            {
                aaa.push_back("Fizz");
            }
            else if(i%5==0)
            {
                aaa.push_back("Buzz");
            }
            else
            {
                aaa.push_back(std::to_string(i));
            }
        }
        return aaa;
    }
};