#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int numberOfSubarrays(vector<int>& nums, int k)  //time complexity:O(n)   space complexity:O(n)
{
    unordered_map<int, int> mp;


    int oddCount = 0;


    int count = 0;


    mp[0] = 1;

    // Traverse the array
    for (int num : nums)
    {
        // Update odd count
        if (num % 2 != 0)
        {
            oddCount++;
        }

        // Check if required previous prefix exists
        if (mp.count(oddCount - k))
        {
            count += mp[oddCount - k];
        }

        // Store current odd count
        mp[oddCount]++;
    }

    return count;
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int k;
    cout << "Enter value of k: ";
    cin >> k;

    int ans = numberOfSubarrays(nums, k);

    cout << "Number of Nice Subarrays = " << ans << endl;

    return 0;
}
