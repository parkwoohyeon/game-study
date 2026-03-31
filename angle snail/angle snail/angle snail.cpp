#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <iostream>
using namespace std;
vector<int> solution2(int n) {

    vector<int> dx = { 0,1,-1 };
    vector<int> dy = { 1,0,-1 };
    vector<vector<int>> triangle(n, vector<int>(n, 0));
    int v = 1;//순서
    int x = 0;//방향용 x,y
    int y = 0;
    int d = 0;
    while (true)
    {
        triangle[y][x] = v++;
        int nx = x + dx[d];
        int ny = y + dy[d];

        if (nx >= n || ny >= n ||
            nx < 0 || ny < 0 ||
            triangle[ny][nx] != 0)
        {
            d = (d + 1) % 3; //방향 변경. 3넘으면 다시 0으로
            nx = x + dx[d];
            ny = y + dy[d];

            if (nx >= n || ny >= n ||
                nx < 0 || ny < 0 ||
                triangle[ny][nx] != 0)
                break;
        }
        x = nx;
        y = ny;
    }

    vector<int> answer;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            answer.push_back(triangle[i][j]);
        }
    }

    return answer;
}


vector<int> solution(int n) {
    vector<vector<int>> triangle(n, vector<int>(n, 0));
    int v = 1;//순서
    int x = 0;//방향용 x,y
    int y = 0;

    while (true)
    {
        //아래 방향
        while (true)
        {
            triangle[y][x] = v++;
            //밖이면, 이미 누가 지나갔으면
            if (y + 1 == n || triangle[y + 1][x] != 0)
                break;
            y += 1;
        }

        //갈방향 미리 한번 체크해서 아니면 루프 끝냄
        if (x + 1 == n || triangle[y][x + 1] != 0)
            break;
        x += 1;

        while (true)
        {
            triangle[y][x] = v++;
            //밖이면, 이미 누가 지나갔으면
            if (x + 1 == n || triangle[y][x + 1] != 0)
                break;
            x += 1;
        }

        if (triangle[y - 1][x - 1] != 0)
            break;

        y -= 1;
        x -= 1;

        //왼쪽 위방향
        while (true)
        {
            triangle[y][x] = v++;
            //밖이면, 이미 누가 지나갔으면
            if (triangle[y - 1][x - 1] != 0)
                break;

            x -= 1;
            y -= 1;
        }


        if (y + 1 == n || triangle[y + 1][x] != 0)
            break;

        y += 1;
    }

    vector<int> answer;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            answer.push_back(triangle[i][j]);
        }
    }

    return answer;
}

int main()
{
    int grid = 4;
    vector<int> result = solution2(grid);
    int count = 0;
    for (int i = 0; i < grid; ++i) {
        for (int k = 0; k < grid - i; ++k)
            cout << "  ";

        for (int j = 0; j <= i; ++j)
            cout << "[" << result[count++] << "]";
        cout << "\n";
    }
}