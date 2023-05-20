/* Bài tập chương 2 
Bài 1: Nhập vào 2 số a và b. Bạn hãy in ra màn hình tổng và hiệu của 2 số đó.
Ví dụ: a = 2
b = 3
a + b = 5
a - b = -1
// */
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int a, b;
   
//     cout << "a = ";
//     cin>> a;
//     cout << "b = " ;
//     cin >> b;
//     cout << "a + b = " << a + b << endl;
//     cout << "a - b = " << a - b << endl;

//     return 0;
// }
// Bài 2: Nhập vào 1 chữ cái viết thường bất kì. hãy in ra màn hình chữ cái đó dưới dạng viết hoa.
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     char a;
//     cout << "Chu cai viet thuong = ";
//     cin >> a;
//     char b = a-32;// Khi thực hiện phép tính sẽ tự động ép kiểu ngầm định nên cần ép kiểu lại
//     cout << "Chu cai viet hoa = " << b;
//     return 0;
// }
// Bài 3: Nhập vào 2 số nguyên a và b. Hãy hoán đổi giá trị của 2 số đó và in ra màn hình

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int a,b;
//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;
//     int tmp;
//     tmp = a;
//     a = b;
//     b = tmp;
//     cout << "Gia tri cua a la  " << a << endl;
//     cout << "Gia tri cua b la  " << b << endl;
//     return 0;
// }
// Bài 4: Nhập vào 2 số nguyên dương a và b (a và b không trùng giá trị). Hãy in ra màn hình số nhỏ hơn ( không dùng cấu trúc if else hoặc toán tử 3 ngôi)
// #include <bits/stdc++.h>
// // #include< math.h>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;
//     int total = a+b;
//     int hieu =abs(a-b);
//     cout << " Gia tri nho hon la " << (total - hieu)/2<< endl;
//     cout << " Gia tri lon hon la " << (total + hieu)/2;

//     return 0;
// }