// // Mảng 2 chiều
// // Nhập, xuất mảng
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     const int SO_HANG = 2;
//     const int SO_COT = 3;
//     int arr[SO_HANG][SO_COT];
// // Nhập
//     for(int i = 0; i< SO_HANG; i++){
//         for(int j = 0; j< SO_COT; j++){
//             cout<< "arr["<< i <<"]["<<j<<"]= ";
//             cin>> arr[i][j];
//     }
//     }
//     // Xuất
//     for(int i = 0; i< SO_HANG; i++){
//         for(int j = 0; j< SO_COT; j++){
//             cout<< arr[i][j]<< " ";
//             }
//             cout<< endl;
//             }
//     return 0;
// } 
// Bài 1: viết chương trình nhập vào 2 số nguyên dương n và m ( 0 < n <= 10, 0< m <= 10 ).
// tạo mảng 2 chiều chứa các số nguyên có hàng n và cột m, Tính và in ra màn hình tổng các phần tử có trong mảng
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n,m,total=0;
//     cout << "Nhap n va m: ";
//     cin >> n>> m;
//     int arr[n][m];
    
//     // Nhập mảng
//     for(int i = 0; i< n; i++){
//         for(int j = 0; j< m; j++){
//             cin >> arr[i][j];
//             }
//             }
//             // Xuất mảng
//       for(int i = 0; i< n; i++){
//            for(int j = 0; j< m; j++){
//                cout << arr[i][j] << " ";
//              }
//              cout<< endl;
//           }
//             // Tính tổng các phần tử trong mảng
//             for(int i =0;i<n; i++){
//                 for(int j =0; j< m; j++){
//                     total += arr[i][j];
//             }
//             }
//             // In ra màn hình
//             cout << total;    

//     return 0;
// }
// Bài 2: Viết chương trình nhập vào số nguyên dương n ( 0< n <= 10). tạo mảng 1 chiều có n phần tử là số nguyên và in ra màn hình phần tử có giá trị lớn nhất.
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n;
//     cout << "Nhap n: ";
//     cin >> n;
//     int arr[n-1];
//     // Nhập
//     for(int i = 0; i< n; i++){
//         cin >> arr[i];
//         }
//         // Xuất
//         for(int i = 0; i< n; i++){
//             cout << arr[i] << " ";
//             }
//             cout<< endl;
//             // Tìm max
//             int max=0;
//     for( int i = 0; i <n; i++){
//         if(max < arr[i]){
//             max = arr[i];
//         } else{
//             max = max;
//         }
// }
//     cout<< max;
//     return 0;
// }
// Bài 3: viết chương trinh nhập vào 2 số nguyên dương n và m (0< n <= 10, 0< m <=10). Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột.
// In ra màn hình các phần tử lớn nhất của các hàng
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n, m;
//     cout << "Nhap n: ";
//     cout<< " Nhap m: ";
//     cin >> n>>m;
//     int arr[n][m];
//     // Nhập
//     for(int i = 0; i< n; i++){
//         for(int j = 0; j< m; j++){
//             cin >> arr[i][j];
//             }
//             }
//             // Xuất
//     for(int i = 0; i< n; i++){
//                 for(int j = 0; j< m; j++){
//                     cout << arr[i][j] << " ";
//                     }
//                     cout<< endl;
//                     }
//         // Tìm max của các hàng
//         int max=0;
//         for( int i = 0; i <n; i++){
//             max = 0;
//             for( int j = 0; j <m; j++){
//             if(max < arr[i][j]){
//                 max = arr[i][j];
//                 } else{
//                     max = max;
//                     }
//                     }
//                     cout << max<< " ";
//             }


//     return 0;
// }
// Bài 4: viết chương trình nhập vào 2 số nguyên dương n và m( 2<= n<=10, 2<=m<=10). Tạo mảng 2 chiều chứa các số nguyên dương n hàng và m cột. 
// Tính tổng các giá trị biên của mảng vừa tạo.
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n,m,sum =0;
//     cout << "Nhap n: ";
//     cout << "Nhap m: ";
//     cin >> n>> m;
//     int arr[n][m];
//     // Nhập
//     for(int i = 0; i< n; i++){
//         for(int j = 0; j< m; j++){
//             cin >> arr[i][j];
//         }}
//         // Xuất
//         for(int i = 0; i< n; i++){
//             for(int j = 0; j< m; j++){
//                 cout << arr[i][j] << " ";
//             }
//             cout<< endl;
//             }
            
//     // Tính tổng các giá trị biên của mảng vừa tạo
//     for(int i = 0; i< n; i++){
//         for(int j = 0; j< m; j++){
//             if(i== 0 || j==0 ||i == n-1|| j ==m-1){
//             sum += arr[i][j];}
//             }}

//             cout<< sum;
//     return 0;
// }