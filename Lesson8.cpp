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
// #include <bits/stdc++.h>
// using namespace std;

// void input_int(string label, int &n){
//     cout << label;
//     cin >> n;
// }
// bool kt_nt(int n){
//     for(int i = 2; i<=sqrt(n);i++){
//         if(n%i == 0){
//             return false;
//             }
//     }
//         return true;

// }

// int main() {
//     int n;
//     input_int(" n = ", n);
//     if(kt_nt(n)){

//         cout << " la so nguyen to." << endl;
//     } else{
//         cout << "khong phai la so nguyen to." << endl;
//     }
//     return 0;
// }
// Bài 2: viết chương trình nhập vào 1 số nguyên dương n (n>1). Tính và in ra màn hình tổng các số nguyên tố từ 2 -> n. (sử dụng đệ quy)
// #include <bits/stdc++.h>

// using namespace std;

//  void input_int(string label, int &n){
//     cout << label;
//     cin >> n;
// }

// bool kt_nt(int x){
//     for(int i = 2; i<=sqrt(x); i++){
//     if(x%i == 0){
//         return false;
//     }
//     }
//     return true;
// }
// int sum_sont(int n){
//     int sum=0;
//     for(int i = 2; i<=n; i++){
//         if(kt_nt(i)){
//             sum += i;
//             }
//             }
//             return sum;
// }
// int sum_sont2( int x){
//     if(x==2){
//         return 2;
//     }
//     if(kt_nt(x)){
//         return x + sum_sont2(x-1);
//     }
//     return sum_sont2(x-1);
// }
// int main() {
//     int n;
//     input_int(" n = ", n);
//     cout<< sum_sont2(n);
//     return 0;
// }
// Bài 3: Viết chương trình nhập vào 1 số nguyên dương n. Tính và in ra màn hình n!
// #include <bits/stdc++.h>

// using namespace std;
//  void input_int(string label, int &n){
//     cout << label;
//     cin >> n;
// }

// int sum_n_gt(int x){
//     if(x == 1){
//         return 1;
//     }
//     return x*sum_n_gt(x-1);
// }
// long long sum_n_gt2(int x){
//     int giaithua=1;
//     for(int i = 1; i<=x;i++){
//         giaithua *=i;
//     }
//     return giaithua;
// }

// int main() {
//     int n;
//     input_int("n = ", n);
    
//     cout << sum_n_gt2(n);
//     return 0;
// }