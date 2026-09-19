class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int odd=0;
        int n=nums.size();
        for(int i=0; i<n;i++){
            odd+=(nums[i] &1 );
        }
        int even = n-odd;

        for(int i=0;i<even;i++){
            nums[i]=0;
        }
        for(int i=even ; i<n;i++){
            nums[i]=1;
        }
        return nums;
    }
};