//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//long long solution(const vector<int>& tree, int m)
//{
//	int start = 1;
//	int end = *max_element(tree.begin(), tree.end());
//	int answer = 0;
//
//	while (start <= end)
//	{
//		long long mid = (start + end) / 2;
//		long long count = 0;
//
//		for (int x : tree)
//		{
//			if (x > mid) count += x - mid;
//				
//		}
//
//		if (count >= m) {
//			answer = mid;
//			end = mid - 1;
//		}
//		else {
//			start = mid + 1;
//		}
//
//	}return answer;
//}
//
//int main() {
//
//	vector<int> tree = { 20, 15, 10, 17 };
//	int m = 7;
//
//	cout << solution(tree, m) << endl;
//	return 0;
//
//}