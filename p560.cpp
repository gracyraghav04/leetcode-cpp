#include <iostream>
#include <vector>
#include <unordered_map>  //time complexity:O(n)
                          // space complexity:O(n)  this is optimized approach

using namespace std;

int subarraySum(vector<int>& nums, int k)
{
    unordered_map<int,int> mp;

    int prefixSum = 0;
    int count = 0;

    mp[0] = 1;

    for(int num : nums)
    {
        prefixSum += num;

        if(mp.count(prefixSum - k))
        {
            count += mp[prefixSum - k];
        }

        mp[prefixSum]++;
    }

    return count;
}

int main()
{
    int n,k;

    cout<<"Enter number of elements: ";
    cin>>n;

    vector<int> nums(n);

    cout<<"Enter array elements: ";

    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    cout<<"Enter value of k: ";
    cin>>k;

    cout<<"Answer = "<<subarraySum(nums,k);

    return 0;
}
//BRUTE FORCE:HOW I THINK IT FIRST  space complexity:O(1) and time complexity:O(n^2)
/*
 int subarraySum(vector<int>& nums, int k) {
       int cnt=0;
       for(int i=0;i<nums.size();i++){
        int sum=0;
        for(int j=i;j<nums.size();j++){
            sum+=nums[j];
            if(sum==k){ cnt+=1;}
        }
       }return cnt;

            }
         */

