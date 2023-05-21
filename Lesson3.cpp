/*
Vòng lặp
*/
// Bài 1: Nhập số nguyên dương n. In ra màn hình giá trị của S=1+2+3+.. +n.
// Ví dụ: 
// n= 4
// S= 10
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n;
//     cout<<"n = ";
//     cin>>n;

//     int s = 0;
// for(int i=0; i<=n; i++){
//      s +=i;
// }

// cout<< " S = "<< s;
    
// }
// Bài 2: Nhập 1 số nguyên dương n. In ra màn hình giá trị của S = 1^2 + 2^2 +3^2 + .. + n^2.
// Ví dụ:
// n = 5
// S = 125
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     int s = 0;
//     for(int i=0; i<=n; i++){
//         s = s + i*i;
//     }
//     cout<< " S = "<< s;
//     return 0;
// }
// Bài 3: nhập 1 số nguyên dương n. in ra màn hình giai thừa n!.
// Ví dụ:
// n = 5
// 5! = 120
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n;
//     cout<< " n = ";
//     cin >> n;
//     unsigned long long s = 1; // giới hạn lưu trữ số lượng lớn và không lưu giá trị âm
//     for(int i = 1; i<=n; i++){
//         s *=i;
//     }
//     cout<< " n! = "<< s;
//     return 0;
// }
// Bài 4: Nhập vào 1 số nguyên dương n. In ra màn hình các só chia hết cho 5 từ 1 đến n.
// Ví dụ:
// n = 20
// 5 10 15 20
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n;
//     cout << " n = ";
//     cin >> n;
//     for(int i = 5; i <=n; i+=5){
//         // if (i%5 == 0){
//         cout << i << " ";

//         // }

//     }
//     return 0;
// }
// Bài 1: Viết chương trình giải phương trình bậc nhất một ẩn ax +b =0, trong đó a và b là các hệ số nhập từ bàn phím.
// Ví dụ:
// a = 1
// b = 2
// Nghiem cua phuong trinh la -2
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     float a, b;
//     int n;

//     cout << " n = ";
//     cin >> n;
    
    
//     for(int i = 1; i<=n; i++){
//     cout << " a = ";
//     cin >> a;
//     cout << " b = ";
//     cin >> b;
//         if(a==0 && b==0){
//         cout<< " Phuong trinh co vo so nghiem"<< endl;
//     } else if(a == 0 && b !=0){
//         cout<< " Phuong trinh co vo nghiem"<< endl;
//     } else if(a !=0){
//         cout<< " Phuong trinh co nghiem duy nhat x = " << -b/a << endl;
//     }
//     }
//     return 0;
// }
// Bài 2: Viết chương trình nhập vào số nguyên dương n (n <= 100). Tính và hiển thị tổng các số tự nhiên lẻ từ 1 đén n.
// Ví dụ:
// n = 10
// Ket qua la 25
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n,t;
//     int tong = 0;
//     cout << " t = ";
//     cin >> t;
//     while(t--){
//         cout << " n = ";
//         cin >> n;
//         for(int i = 0; i<=n;i++){
        
//         if(i%2 == 1){
//             tong += i;
//         }
        
//         }
//         cout << " Ket qua la "<< tong<< endl;

        
        
//     }

//     return 0;
// }
// Bài 3: Viết chương trình nhập nhiệt độ F từ bàn phím rồi tính và hiển thị nhiệt ở C
// Ví dụ:
// F = 32
// C = 0
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     float t,f,c;
//     cout << " t = ";
//     cin >> t;
//     while(t--){
//         cout << " F = ";
//         cin >> f;
//         c = (f-32)/1.8;
//         cout << " C = " << c << endl;
//     }
//     return 0;
// }
// Bài 4: Viết chương trinh nhập vào một số n từ bàn phím. Hãy kiểm tra xem n có phải là số nguyên tố hay không.
// Ví dụ:
// N = 5
// 5 là số nguyên tố
// #include <bits/stdc++.h>

// using namespace std;
// bool nt(int n){
//     bool is_nt = true;
    
//     for ( int i= 2; i<= sqrt(n);i++){
//         if (n%i == 0){
//             is_nt = false;
//             break;
//         }
//     }
//     if(is_nt){
//         cout << " n1 la so nguyen to" << endl;
//     } else{
//         cout << "n1 khong phai la so nguyen to" << endl;
//     }
// }
// int main() {
//     int t;
//     cout << " t = ";
//     cin >> t;
//     while(t--){
//         int n;
//         cout << " N = ";
//         cin >> n;
//          nt(n);
           
        
//     }
//     return 0;
// }
// Bài 5: Viết chương trình nhập vào một số nguyên dương n từ bàn phím. Tính tổng các chữ số tạo nên số đó.
// Ví dụ:
// N = 2023
// Ket qua la 7
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n;
//     cout << " N = ";
//     cin >> n;
//     int tong = 0;
//     // while(n > 0){
//     //     int x = n%10;
//     //     tong += x;
//     //     n /= 10;
//     // }
//     for(; n>0; n/=10 ){
//         int i = n%10;
//         tong = tong + i;

//     }
//     cout << " Tong cua n = " << tong << endl;
//     return 0;
// }