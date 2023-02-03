// 직사각형의 최소거리
// 백준 1085
#include <iostream>

using namespace std;

int GetDistance(istream& ins);

int main()
{
    cout << GetDistance(cin);
    return 0;
}

int GetDistance(istream& ins) {
    int x, y, w, h, resultX, resultY;
    ins >> x;
    ins >> y;
    ins >> w;
    ins >> h;

    resultX = (x < w - x) ? x : w - x;
    resultY = (y < h - y) ? y : h - y;

    return (resultX < resultY) ? resultX : resultY;
}