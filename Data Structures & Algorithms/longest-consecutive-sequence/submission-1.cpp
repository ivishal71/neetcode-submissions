class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        int count = 1;
        int largest = 1;
        sort(nums.begin(), nums.end());
        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]){
                continue;
            }
            else if(nums[i] == nums[i-1]+1){
                count++;
                largest = max(largest, count);
            }
            else{
                largest = max(largest, count);
                count = 1;
            }

        }
        largest = max(largest, count);
        return largest;
        
    }
};
