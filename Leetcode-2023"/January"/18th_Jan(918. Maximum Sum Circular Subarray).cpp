class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total_sum=0;
        int max_end=0;
        int min_end=0;
        int max_sum=INT_MIN;
        int min_sum=INT_MAX;

        for(int i: nums){
            total_sum +=i;
            max_end=max(max_end+i,i);
            max_sum=max(max_end,max_sum);
            min_end=min(min_end+i,i);
            min_sum=min(min_end,min_sum);

        }
        if(max_sum>0){
            return max(max_sum,total_sum-min_sum);
        }
        return max_sum;
    }
};
