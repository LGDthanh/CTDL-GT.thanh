// Thuật toán sắp xếp bubble sort
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n;
//     cout << "n= ";
//     cin >> n;
//     int arr[n];
//     cout << "nhap phan tu cua mang: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         }
//     // Bubble sort
//     for (int i = n-1; i > 1; i--) {
//         for (int j = 0; j < i; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 }
//                 }
//                 }
//          // Xuat ra mang sau khi sắp xếp
//                 cout << "Mang sau khi sap xep: ";
//                 for (int i = 0; i < n; i++) {
//                     cout << arr[i] << " ";
//                     }
//                     cout << endl;
        
//     return 0;
// }
// Bài 1: viết chương trình nhập vào 1 số nguyên n (2<=n <=10). Nhập mảng có n số nguyên. Hãy sắp xếp lại mảng đó theo thứ tự giảm dần và in ra màn hình.
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n;
//     cout<< " n = ";
//     cin>> n;
//     // Nhập mảng 1 chiều
//     int arr[n];
//     for(int i =0; i<n; i++){
//         cin>> arr[i];
//     }
//     // Bubble sort
//     for(int i =n-1;i>0 ;i--){
//         for(int j = 0;j<i;j++){
//             if(arr[j]<arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     // Xuất mảng 1 chiều đã sắp xếp
//     for(int i= 0; i<n; i++){
//         cout<< arr[i]<< " ";

//     }
//     return 0;
// }
// bài 2: viết chương trình nhập vào 1 số nguyên n (2<=n <=10). Nhập mảng có n số nguyên và nhập số nguyên k. hẫy kiểm tra xem trong mảng có xuất hiện 2 phần tử có tổng bằng k hay không. Nếu có hãy in ra màn hình vị trí của 2 phần tử đó
// ( lấy 2 vị trí đầu tiên tìm được).
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n,k;
//     cout<< " n = ";
//     cin>> n;
//     int arr[n];
//     // nhập
//     for(int i =0; i<n; i++){
//         cin>> arr[i];
//     }
//     cout<< " k = ";
//     cin>> k;
//     int x=-1,y=-1;
//     for(int i=0;i<n;i++){
//         for(int j =0; j<n-1;j++){
//             if(i!=j && (arr[i]+ arr[j]) == k){
//                 x = i;
//                 y = j;
//                 break;
//             }
//         }
//          if(x!= -1 && y!= -1){
//             break;
    
//          }
//     }
//      if(x!= -1 && y!= -1){
//             cout<< " ket qua: "<< x+1<< " " <<y+1;
//         } else{
//             cout<< " NULL";
//         }
//     return 0;
// }
// Bài 3: Viết chương trình nhập vào 2 ma trận có n hàng và m côt (0<n<=10, 0<m<=10).In ra tổng của 2 ma trận.
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n,m;
//     cout <<" n = ";
//     cin>> n;
//     cout<<" m = ";
//     cin>>m;
//     int arr[n][m];
//     int arr2[n][m];
//     int totalarr[n][m];
//     cout<< " Ma tran 1:"<< endl;
//     // nhập
//     for(int i = 0; i<n;i++){
//         for(int j =0; j<m;j++){
//             cin>> arr[i][j];
//         }
//     }
//     cout<< " Ma tran 2: "<< endl;
//     // nhập
//     for(int i=0;i<n;i++){
//         for(int j =0; j<m;j++){
//         cin>> arr2[i][j];
//         }
//     }
//     // tổng
//     cout<<" Tong 2 ma tran: "<< endl;
//     for(int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             totalarr[i][j] = arr[i][j] + arr2[i][j];
//             cout<< totalarr[i][j]<<" ";
       
//        }
//        cout<< endl;
//     }
//     return 0;
// }
// Bài 4: Viết chương trình nhập vaof 1 ma trận có n hàng vaf m cột(0<n<=10, 0<m<=10). In ra màn hinhf tổng của các số lẻ xuất hiện trong ma trận.
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n,m,x;
//     cout <<" n = ";
//     cin>> n;
//     cout<<" m = ";
//     cin>>m;
//     int arr[n][m];
//     // nhập
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>> arr[i][j];
//         }
//     }
//     int sum=0;
//     // tổng số lẻ trong ma trân
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//            if(arr[i][j]%2==1){
//             sum+=arr[i][j];
//            }
//         }
//     }
//     cout<< sum;
//     return 0;
}