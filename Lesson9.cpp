// Con trỏ
// Cấp phát động: stack, heap
// Bài 1: Tạo mảng động có n phần tử nguyên( tối đa 10 phần tử). nhập vào 1 số nguyên x và thêm x vào cuối mảng vừa tạo
// #include <bits/stdc++.h>

// using namespace std;

// void intput_int(string label, int &n);
// void input_array(int *arr, int size);
// void print_array(int *arr, int size);
// void push(int* &arr, int &size, int new_element);

// int main() {
//     int n,x;
//     intput_int(" n = " , n);
//     int *numbers = new int[n];
//     input_array(numbers, n);
//     intput_int("x = ", x);
//     push(numbers, n, x);
//     print_array(numbers, n);

    
//     return 0;
// }
// void intput_int(string label, int &n){
//     cout<< label;
//     cin >>n;
// };
// void input_array(int *arr, int size){
//     for(int i = 0; i<size; i++){
//     cin >> arr[i];
//     }
// };
// void print_array(int *arr, int size){
//     for(int i = 0; i<size; i++){
//         cout << arr[i] << " ";
//     }
// };
// void push(int* &arr, int &size, int new_element){
//     // Tạo 1 mảng mới
//     int new_size = size +1;
//     int *tmp_arr = new int[new_size];

//     // Copy toàn bộ phần tử cũ sang mảng mới
//     for(int i = 0; i<size; i++){
//         tmp_arr[i] = arr[i];
//     }
//     // thêm phần tử mới vào cuối mảng mới
//     tmp_arr[new_size -1] = new_element;
//     // Gán mảng mới sáng cho con trỏ cũ và tăng size lên 1 đơn vị
//     delete[] arr;
//     arr = tmp_arr;
//     size = new_size;
// };
// Bài 2: Tạo mảng động có n phần tử nguyên ( tối đa 10 phần tử). Nhập vào 1 số nguyên dương x (0<= x<= 9) và xóa phần tử ở vị trí x.
// #include <bits/stdc++.h>

// using namespace std;

// void input_int(string label, int &n);
// void input_array(int *arr, int size);
// void output_array( int *arr,int size);
// void remove(int* &arr, int &size, int x);

// int main() {
//     int n,x;
//     input_int("n = ", n);
//     int *numbers = new int[n];
//     input_array(numbers, n);
//     input_int("x = ", x);
//     remove(numbers, n, x);
//     output_array(numbers, n);

//     return 0;
// }
// void input_int(string label, int &n){
//     cout<< label;
//     cin >> n;
// }
// void input_array(int *arr, int size){
//     for(int i = 0; i<size; i++){
//         cin>> arr[i];
//         }
// }
// void output_array( int *arr,int size){
//     for(int i = 0; i<size; i++){
//         cout<< arr[i] << " ";
//     }
// }
// void remove(int* &arr, int &size, int x){
//     // xóa phần tử cần xóa trên mảng động cũ
//     for(int i = x; i<size-1;i++){
//         arr[i] = arr[i+1];
//     }

//     // tạo 1 mảng mới có số lượng phần tử size -1
//     int *new_arr = new int[size-1];
//     // Copy phần tử bên mảng cũ sang mảng mới
//     for(int i = 0; i<size-1; i++){
//         new_arr[i] = arr[i];
//     }
//     // gán mảng mới sang cho mảng cũ và giảm size
//     delete[] arr;
//     arr = new_arr;
//     size = size - 1;
// }
// Bài 3: Tạo mạng động có n phần tử nguyên ( tối đa 10 phần tử). Nhập vào 1 số nguyên dương x(0<= x<= 9) và số nguyên y. Thêm y vào vị trí x của mảng
// #include <bits/stdc++.h>

// using namespace std;

// void input_int(string label, int &n);
// void input_array(int *arr , int size);
// void output_array(int *arr , int size);
// void update(int* &arr, int &size, int x, int y);


// int main() {
//     int x,n,y;
//     input_int(" Nhap n = ", n);
//     int *numbers = new int[n];
//     input_array(numbers, n);
//     input_int(" Nhap x = ", x);
//     input_int(" Nhap y = ", y);
//     update(numbers, n, x, y);
//     output_array(numbers, n);
//     return 0;
// }
// void input_int(string label, int &n){
//     cout<< label;
//     cin >> n;
// }
// void input_array(int *arr , int size){
//     for(int i = 0; i<size;i++){
//         cin>> arr[i];
//     }
// };
// void output_array(int *arr , int size){
//     for(int i = 0; i<size;i++){
//         cout<< arr[i] << " ";
//         }
// };
// void update(int* &arr, int &size, int x, int y){
//     // Tạo 1 mảng mới có số lượng phần tử size = size
//     int *new_arr = new int[size+1];
//     // Copy phần tử mảng cũ sang mảng mới
//     for(int i = 0; i<size;i++){
//         new_arr[i] = arr[i];
//         }
//     //thêm y vào vị trí x
//     for(int i=size+1-1; i>x;i--){
//         new_arr[i] = new_arr[i-1];
//     }
//     new_arr[x] = y;
    
//     // Gán mảng mới cho mảng cũ
//     delete[] arr;
//     arr = new_arr;
//     size = size+1;
// };
