#include <iostream>
#include <vector>
#include <algorithm>  // binary_search, lower_bound
using namespace std;
//int main() {
//    vector<int> arr = { 1,2,4,5,6,7,8,9,13,17 };
//    // binary_search는 true/false만 반환 (존재 여부만 확인)
//    bool found8 = binary_search(arr.begin(), arr.end(), 8);
//    cout << "Is 8 in arr? " << (found8 ? "Yes" : "No") << endl;
//
//    // lower_bound는 정렬된 배열에서 값이 들어갈 수 있는 위치를 반환
//    auto pos8 = lower_bound(arr.begin(), arr.end(), 8) - arr.begin();
//    cout << "Position for 8: " << pos8 << endl;
//    return 0;
//}



//int binarySearch(int arr[], int size, int target)
//{
//    int start = 0;
//    int end = size;
//    while (end > start)
//    {
//        int mid = (start + end) / 2;
//        int value = arr[mid];
//        if (value == target)
//            return mid;
//        else if (value > target)
//            end = mid;
//        else
//            start = mid + 1;
//    }
//    return -1;
//}
//int main() {
//    int arr[] = { 1,2,4,5,6,7,8,9,13,17 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int index = binarySearch(arr, size, 4);
//    cout << "찾은 번호 : " << index << endl;
//    return 0;
//}

//int main() {
//	vector<int> arr = { 1,2,3,4,5,5,5,5,7 };
//	int p1 = lower_bound(arr.begin(), arr.end(), 5) - arr.begin();
//	auto p2 = lower_bound(arr.begin(), arr.end(), 5);
//	auto it = upper_bound(arr.begin(), arr.end(), 5);
//	int it2 = upper_bound(arr.begin(), arr.end(), 5) - arr.begin();
//	cout << p1 << endl;
//	cout << *p2 << endl;
//	cout << *it << endl;
//	cout << it2;
//}
