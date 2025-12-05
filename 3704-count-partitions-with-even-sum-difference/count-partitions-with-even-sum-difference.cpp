class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int sumi = 0, cnt = 0;
        for(int i = 0; i<n-1; i++){
            sumi += nums[i];
            int sumj = 0;
            for(int j = i+1; j<n; j++){
                sumj += nums[j];
            }
            if( (sumi%2 == 0 && sumj%2 == 0) || (sumi%2 != 0 && sumj%2 != 0)) cnt++;
        }
        return cnt;
    }
};