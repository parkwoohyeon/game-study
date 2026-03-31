#include <string>
#include <vector>
#include <iostream>
using namespace std;
vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
    int rows = arr1.size();//결과 행렬 행 수
    int cols = arr2[0].size();//결과 행렬 열 수
    int inner = arr1[0].size();//곱셉 공통 차원 arr1의 열 ==arr2의 행
    //벡터 크기만큼 할당 하고 0으로 초기화
    //(미리 생성할 수, 넣을 값(미리 생성할 수, 넣을 값))
    vector<vector<int>> answer(rows, vector<int>(cols, 0));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            for (int k = 0; k < inner; ++k)
            {
                answer[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    return answer;
}

int main()
{
    vector<vector<int>> arr1 =
    {
        {2,3,2},
        {4,2,4},
        {3,1,4},
    };
    vector<vector<int>> arr2 =
    {
        {5,4,3},
        {2,4,1},
        {3,1,1},
    };
    vector<vector<int>> result = solution(arr1, arr2);
    for (const auto& row : result)
    {
        for (const auto& elem : row)
        {
            std::cout << elem << ",";
        }
        std::cout << "\n";
    }
}