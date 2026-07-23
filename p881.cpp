#include <iostream>
#include <vector>
#include <algorithm>   total TC:O(nlogn)  SC:O(1) as all variables used hold a constant value
using namespace std;

int numRescueBoats(vector<int>& people, int limit) {   //sorting+two pointers

    sort(people.begin(), people.end());  //O(nlogn)

    int left = 0;
    int right = people.size() - 1;
    int boats = 0;

    while (left <= right) {   //O(n)

        if (people[left] + people[right] <= limit) {
            left++;
        }

        right--;
        boats++;
    }

    return boats;
}

int main() {

    int n;
    cin >> n;

    vector<int> people(n);

    for (int i = 0; i < n; i++) {
        cin >> people[i];
    }

    int limit;
    cin >> limit;

    cout << numRescueBoats(people, limit);

    return 0;
}

