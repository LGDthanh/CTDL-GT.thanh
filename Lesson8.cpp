// Function
// Tham số và đối số( parameters and argument)
// Tham tri và tham chieu
// const int &x // Read only
// Hàm nguyên mẫu
// Đệ quy
// Ví dụ: Tính tổng s = 1 + 2 + 3 + .. +n
// #include <bits/stdc++.h>

// using namespace std;

// // Đệ quy
// int sum(int n){
//     if(n == 1){
//         return 1;
//     }
//     return n + sum(n - 1);
// }
// // Tính n!
// int factorial(int n){
//     if(n == 1){
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
// int main() {
//     int n;
//     cout << "Nhap n: ";
//     cin >> n;
//     cout<< sum(n);
//     cout<< endl;
//     cout<< factorial(n);
//     return 0;
// }
// Bài 1: Viết chương trình nhập vào 1 số nguyên dương n. kiểm tra xem số n có phải là số nguyên tố hay không.
#include <bits/stdc++.h>
using namespace std;

void input_int(string label, int &n){
    cout << label;
    cin >> n;
}
bool kt_nt(int n){
    for(int i = 2; i<=sqrt(n);i++){
        if(n%i == 0){
            return false;
            }
    }
        return true;

}

int main() {
    int n;
    input_int(" n = ", n);
    if(kt_nt(n)){

        cout << " la so nguyen to." << endl;
    } else{
        cout << "khong phai la so nguyen to." << endl;
    }
    return 0;
}