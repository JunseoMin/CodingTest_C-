// 재귀를 활용한 팰린드롬 판별, 재귀 횟수 출력
// 백준 25501
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

// recursion 횟수를 저장하는 전역변수의 필요성?
// cin 후에 바로 cout인지, cin을 N times 한 후 cout을 한번에 하는지?
// 이때, 0 <= N <= 20

int recursion(const char* s, int l, int r);
int isPalindrome(const char* s);

int rNum = 0;

int main()
{
    int get_num;
    string word;

    cin >> get_num;

    for (int i = 0; i < get_num; i++) {
        cin >> word;
        cout << isPalindrome(word.c_str()) << " ";
        cout << rNum + 1 << endl;
        rNum = 0;
    }
    return 0;
}

int recursion(const char* s, int l, int r) {
    if (r >= l) {
        return 1;
    }
    else if (s[l] == s[r]) {
        rNum++;
        return recursion(s, l - 1, r + 1);
    }
    else {
        return 0;
    }
}

int isPalindrome(const char* s) {
    return recursion(s, strlen(s) - 1, 0);
}