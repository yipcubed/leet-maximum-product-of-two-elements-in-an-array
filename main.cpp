#include <algorithm>
#include <climits>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include "../utils/PrintUtils.hpp"
#include "../utils/VectorUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// https://leetcode.com/problems/check-if-it-is-a-straight-line/
// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() { // NOLINT
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();

class Solution {
public:
  int maxProduct(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int result = (nums[nums.size() - 1] - 1) * (nums[nums.size() - 2] - 1);
    return result;
  }
};

void test1() {
  cout << boolalpha;
  vector<int> arr{3, 4, 5, 2};

  cout << "12 ? " << Solution().maxProduct(arr) << endl;

  vector<int> arr2{1, 5, 4, 5};

  cout << "16 ? " << Solution().maxProduct(arr2) << endl;
}

void test2() {}

void test3() {}