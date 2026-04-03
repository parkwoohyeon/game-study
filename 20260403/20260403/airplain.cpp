#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long solution(int n, vector<int> times) {
	long long start = 1;
	long long end = (long long)*max_element(times.begin(), times.end()) * n;
	long long answer = 0;

	while (start <= end)
	{
		long long mid = (start + end) / 2;
		long long count = 0;

		for (int x : times)
		{
			count += mid / x;

		}

		if (count >= n) {
			answer = mid;
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}return answer;
}

int main() {
	int n = 6;
	vector<int> times = { 7, 10 };
	
	cout << solution(n, times);



}