class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        sort(costs.begin(),costs.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(costs[i]>coins){
                break;
            }
            coins=coins-costs[i];
            count++;
        }
        return count;
    }
};
