// Đề bài: https://tmath.vn/problem/ch

#include <bits/stdc++.h>

using namespace std;

int main() {
    // Bắt buộc khai báo long long hoặc các dạng 64bit, vì để bài bắt buộc phải là 64bit
    long long a;
    long long b;
    cin >> a;
    cin >> b;
    if (b == 0){
        cout << -1;
        return 0;
    }
    else{
        if (a % b == 0){
            cout << "YES";
            return 0;
        }
        else {
            cout << "NO";
            return 0;
        }
    }
}