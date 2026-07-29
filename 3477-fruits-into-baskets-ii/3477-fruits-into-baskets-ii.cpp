class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int NOToutput =0;
        for(int f = 0; f < fruits.size(); f++)
        {
        	for(int b = 0; b < baskets.size(); b++ )
	        {
		        if ( fruits[f] <= baskets[b])
		        {
			        NOToutput = NOToutput +1;
                    baskets[b] =0;
			        break;
		        }
	        }
        }
          return fruits.size()-NOToutput;
    }
};