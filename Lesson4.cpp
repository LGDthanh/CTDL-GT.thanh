/* Mảng - Array
*/
// Bài 1: Tạo mảng số nguyên dương có n phần tử( tối đa 10 phần tử). Nhập vào 1 số nguyên dương x và thêm x vào cuối mảng vừa tạo
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n,x;
//     cout << "Nhap n: ";
//     cin >> n;
//     int Array[n-1];
//     // Nhập mảng
//     for ( int i = 0; i<n; i++){
//         cin >> Array[i];
//     }
//     // Thêm vào cuối mảng
//     cin >> x;
//     Array[n]=x;
//     n++;
//     // Xuất mảng
//     for ( int i = 0; i<n; i++){
//     cout << Array[i] << " ";
//  }
//     return 0;
// }
// bài 2: tạo mảng số nguyên dương  có n phần tử (tối đa 10 phần tử). Nhập vào 1 số nguyên dương x (0<= x <=9) và xóa phần tử ở vị trí x
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n,x;
//     cout << "Nhap n: ";
//     cin >> n;
//     int Array[n-1];
//     // Nhập mảng
//     for(int i = 0; i <n; i++){
//         cin >> Array[i];
//     }
//     // Xóa phần tử ở vị trí x
//     cout<< "x = ";
//     cin >> x; // x là index cần đổi sang thành x-1
//     for(int i = x-1; i<n-1; i++){
//         Array[i] = Array[i+1];
//     }
//     n--;
//     // Xuất mảng
//     for(int i = 0; i<n; i++){
//         cout << Array[i]<< " ";
//     }
//     return 0;
// }
// Bài 3: Tao mảng số nguyên dương có n phần tử ( tối đa 10 phần tử). nhập vào 1 số nguyên dương x (0<= x <= 9) và số nguyên dương y. Thêm y vào vị trí x của mảng
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n,x,y;
//     cout << "Nhap n: ";
//     cin >> n;
//     int Array[n-1];
//     // Nhập mảng
//     for(int i = 0; i<n; i++){
//         cin >> Array[i];
//     }
//     // them y vào vị trí x
//     cout << "x = ";
//     cin >> x;
//     cout << "y = ";
//     cin >> y;
//     for(int i = n; i>x; i-- ){
//         Array[i] = Array[i-1];
//     }
//     Array[x] = y;
//     n++;
//     // Xuât mảng
//     for(int i = 0; i<n; i++){
//         cout << Array[i]<< " ";
//     }
//     return 0;
// }