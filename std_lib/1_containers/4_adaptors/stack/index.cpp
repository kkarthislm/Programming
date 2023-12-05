
// stack LIFO

#include<iostream>
#include<string>
#include<stack>
#include<vector>

using namespace std;

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        int index = 0;
        vector<vector<int>> dp;
        for(int i = 0; i < candidates.size(); i++){
            int num = candidates[i];
            vector<int> temp;
            while(num <= target){
                temp.push_back(num);
                num += candidates[i];
            }
            dp.push_back(temp);
        }

        for(int i = 0; i < dp.size(); i++){
            int sum = 0;
            vector<int> res;
            for(int j = 0; j < dp[i].size(); j++){
                sum += dp[i][j];
                if(i == 0){
                    res.push_back(dp[i][j]);
                }else{
                    res.assign(j,dp[i][0]);
                }
                if(sum == target){
                    result.push_back(res);
                }
            }
        }

        return result;
    }

int searchInsert(vector<int>& nums, int target) {

        int size = nums.size();
        int left = 0, right = size-1;

        // base cases to check
        if(nums[0] > target) return 0;
        else if(nums[right] < target) return right+1;

        while(left <= right){
            int mid = (left+right)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target){
                right = mid;
            }else{
                left = mid;
            }
        }
        return left-right;
    }

int main(){
    stack<string> stk;
    stk.push("Kart");
    stk.push("hik");
    while(!stk.empty()){
        cout<<stk.top()<<endl;
        stk.pop();
    }

    int i = 1/2;
    cout<<i<<endl;
    vector<int> nums{1,3};
    searchInsert(nums,1);
    
    vector<int> nums{2,3,6,7};

    combinationSum(nums, 7);
}