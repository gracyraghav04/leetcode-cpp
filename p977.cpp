

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class Solution{
    public:
     vector<int> sortedSquares(vector<int>& nums){
        int l=0;
        int r=nums.size()-1;
        int k=nums.size()-1;
        vector<int> res(nums.size());
        while(l<=r){
            if(abs(nums[l])>abs(nums[r])){
                res[k]=nums[l]*nums[l];
                l++;
            }
            else{
                res[k]=nums[r]*nums[r];
                r--;
            }
            k--;
        }
        return res;

     }

};
int main() {

    Solution obj;

    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> ans = obj.sortedSquares(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
