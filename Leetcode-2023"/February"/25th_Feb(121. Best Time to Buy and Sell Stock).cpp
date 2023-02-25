class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprofit=0;
        int minisofar=prices[0];
        for(int i=0;i<n;i++){
            minisofar=min(minisofar,prices[i]);
            int profit=prices[i]-minisofar;
            maxprofit=max(profit,maxprofit);
        }
        return maxprofit;
        
        
        
        //Time comp-O(N)
                                    //space comp-O(1)
        
    }
};
