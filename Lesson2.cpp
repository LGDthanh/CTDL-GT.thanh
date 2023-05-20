/*
    - Cấu trúc if else:
    if else
    if (condition){
    code
    } else{
    code
    }
    - Switch case
    - Toán tử 3 ngôi
    <điều kiện> ? <giá trị 1> : < giá trị 2>
    int x=4,y;
    y=(x % 2) ? 1 : 0;
*/
// Bài 4: Nhập vào 2 số nguyên dương a và b (a và b không trùng giá trị). Hãy in ra màn hình số nhỏ hơn ( không dùng cấu trúc if else hoặc toán tử 3 ngôi)
// được sử dụng
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    // if (a > b) {
    //     cout << "gia tri nho hon la " << b <<endl;
    //     } else if (a < b) {
    //         cout << "gia tri nho hon la " <<a << endl;
    //         } else {
    //             cout << "a = b" << endl;
    //             }

    int c = (a>b)? b:a;
    cout<< "Gia tri nho hon la "<< c;
            return 0;
                }

