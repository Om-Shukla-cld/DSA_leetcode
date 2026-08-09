class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        int n=prices.size()-1;
        int m=discounts.size()-1;
        double sum=0;
        int idx=0;
        while(n>=0&&m>=0){
            sum+= prices[n]*(1-discounts[m]/100.0);
            m--;
            n--;
          

        }
            while(n>=0){
                sum=sum+prices[n];
                n--;
            }
        
        return sum;
    }
};