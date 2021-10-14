// Three Sum Problem.

#include <bits/stdc++.h>
using namespace std;

// TC : O(n^3)
// vector<vector<int>> threeSum(vector<int> &nums, int target) {
// 	vector<vector<int>> result;

// 	int n = nums.size();
// 	for (int i = 0; i <= n - 3; i++) {
// 		for (int j = i + 1; j <= n - 2; j++) {
// 			for (int k = j + 1; k <= n - 1; k++)
// 			{
// 				if (nums[i] + nums[j] + nums[k] == target) {
// 					vector<int> temp(3);
// 					temp[0] = i;
// 					temp[1] = j;
// 					temp[2] = k;
// 					result.push_back(temp);
// 				}
// 			}
// 		}
// 	}
// 	return result;
// }



// TC : O(n^2)*log(m)  SC: O(m) + O(n)
// set<vector<int>> threeSum(vector<int> &nums, int target) {
// 	set<vector<int>> result;
// 	int n = nums.size();
// 	unordered_map<int, int> mpp;

// 	for (int i = 0; i < n; i++)
// 		mpp[nums[i]]++;

// 	// a+b+c=0 : c = -(a+b);
// 	for (int i = 0; i <= n - 2; i++)
// 	{
// 		mpp[nums[i]]--;		// a
// 		for (int j = i + 1; j <= n - 1; j++) {
// 			mpp[nums[j]]--; // b
// 			int key = target - (nums[i] + nums[j]); // c
// 			if (mpp[key] > 0) {
// 				vector<int> temp(3);
// 				temp[0] = nums[i];
// 				temp[1] = nums[j];
// 				temp[2] = key;
// 				sort(temp.begin(), temp.end());
// 				result.insert(temp);
// 			}
// 			mpp[nums[j]]++;
// 		}
// 		mpp[nums[i]]++;
// 	}
// 	return result;
// }


// TC: O(n^2)  SC : O(1)
vector<vector<int>> threeSum(vector<int> &nums, int target) {
	vector<vector<int>> result;
	int n = nums.size();

	if (n < 3) return result;

	sort(nums.begin(), nums.end());

	for (int i = 0; i < n - 2; i++) {

		if (i == 0 || (i > 0 && nums[i] != nums[i - 1])) {

			int low = i + 1, high = n - 1, sum = target - nums[i];

			while (low < high) {
				if (nums[low] + nums[high] == sum) {
					result.push_back({nums[i], nums[low], nums[high]});

					while (low < high && nums[low] == nums[low + 1]) low++;
					while (low < high && nums[high] == nums[high - 1]) high--;
					low++; high--;
				}
				else if (nums[low] + nums[high] < sum)
					low++;
				else
					high--;
			}
		}
	}
	return result;
}


int main() {

	int n, x;
	cin >> n >> x;

	vector<int> nums(n);
	for (int i = 0; i < n; ++i) {
		cin >> nums[i];
	}

	vector<vector<int>> result = threeSum(nums, x);

	if (result.size() == 0)
		cout << "No Triplet Found";
	else {
		for (vector<int> one : result) {
			for (int index : one)
				cout << index << " ";
			cout << "\n";
		}
	}

	return 0;
}

