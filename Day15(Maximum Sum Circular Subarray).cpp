class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int total_sum=0,max_end=0,min_end=0,max_sum=INT_MIN,min_sum=INT_MAX;
        for(auto x:A){
            total_sum+=x;
            max_end=max(max_end+x,x);
            max_sum=max(max_end,max_sum);
            min_end=min(min_end+x,x);
            min_sum=min(min_end,min_sum);
        }
        if(max_sum>0) 
            return max(max_sum,total_sum-min_sum);
        return max_sum;
    }
};
