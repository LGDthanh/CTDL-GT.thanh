// String- Chuỗi ký tự
// Nhập chuỗi: getline(cin, <biến>)
// Cần nhập số trước nhập chuỗi: cin.ignore();
/*
Method:
string str = "Thanh"
- str.substr(x,y); // x là chỉ số bắt đầu cắt, y à số ký tự bị cắt.
- str.find(s); // trả ra index
- str.erase(x, n); // Xóa đi n ký tự bắt đầu từ x
- str.replace(x, n, s); // thay thế n phân tử tại vị trí x bằng chuỗi s
- str.compare(s); // So sánh str = s => 0, str > s => 1, str < s => -1
- str.insert(x, s); // Chèn chuỗi s vào vị trí x
- str.length(), str.size() // độ dài string
Đếm tổng số lượng byte
*/
// Bài 1: Viết chương trình nhập vào 1 chuỗi gồm các ký tự từ a-z vaf có thể chứa khoảng trắng. Hãy loại bỏ các khoảng trắng ở đầu và cuối chuỗi

// #include <bits/stdc++.h>
// // #include<string>
// using namespace std;

// int main() {
//     string str;
//     cout<< " Nhap chuoi: ";
//     getline(cin, str);
//     // Cắt bỏ khoảng trống đầu 
//     while(str[0] == ' ')
//     {
//     str.erase(0, 1);
//     }
//     // Cắt b khoảng trống cuối
//     while(str[str.length()-1] == ' '){
//         str.erase(str.length()-1, 1);
//     }
//     cout<< " Chuoi cua ban la: " << str << endl; 
//     return 0;
// }
// Bài 2: Viêt chương trình nhập vào 1 chuỗi ký tự từ a -> z và có thể chứa khoảng trắng. Hãy loai bỏ các khoảng trăng dư thừa ở các từ.
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     string str;
//     cout<< " Nhap chuoi: ";
//     getline(cin, str);
//     // Cắt bỏ khoảng trắng dư thừa
//     int i=0;
//     while( i< str.length()){
//         if(str[i] == ' ' && str[i+1] == ' '){
//         str.erase(i, 1);
//         }else{
//         i++;
//         }
//     }
//     cout<< " Chuoi cua ban la: "<< str;
//     return 0;
// }
// Bài 3: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z, A-> Z vaf có thể chứa khoảng trắng. hay viết hoa các chữ cái đầu mỗi từ, Các chữ cái còn lại để ở dang viết thường.
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     string str;
//     cout<< " Nhap chuoi: ";
//     getline(cin, str);
//     // Viết hoa chữ cái đầu và chữ cái đầu viết thường
//     // chuyển các ký tự thành chữ viết thường
//     int i=0;
//     while(i< str.length()){
//         // if(str[i] >=65 && str[i]<=90){
//         //     str[i] = str[i] + 32;
//         // }
// // OR
//         str[i] = tolower(str[i]);
//         i++;
//     }
//     i=0;
//     // Chuyen ký tư đầu thành chữ hoa
//     while(i< str.length()){
//         if(str[0] != ' '){
//             str[0] = toupper(str[0]);
//         }
//         if(str[i] == ' ' && str[i+1] != ' '){
//             str[i+1] = toupper(str[i+1]);
//         }
//         i++;
//         }
    
//     cout << str;
//     return 0;
// }
// Bài 4: Chuẩn hóa chuỗi: B1+B2+B3
// #include <bits/stdc++.h>
// #include<string>
// using namespace std;

// int main() {
//     string str;
//     cout<<" Nhap chuoi:";
//     getline(cin, str);
//     // Loai bo khoang trang o dau
//     while(str[0] == ' '){
//         str.erase(0, 1);
//     }
//      // Loai bo khoang trang o cuoi
//     while(str[str.length() -1] == ' '){
//         str.erase(str.length() -1, 1);
//     }
//     // Loai bỏ khoảng trắng giữa các từ
//     int i=0;
//     while(i< str.length()){
//         if(str[i] == ' ' && str[i+1] == ' '){
//             str.erase(i, 1);
//     }else{
//         i++;
//     }
//     }
//     // biến tất cả thành chữ thường
//     for(int i = 0; i<str.length();i++){
//         str[i]= tolower(str[i]);
//     }
//     // Viết hoa chữ cái đầu
//     str[0] = toupper(str[0]);
//     for(int i = 0; i<str.length();i++){
//         if(str[i] == ' ' && str[i+1] != ' '){
//             str[i+1] = toupper(str[i+1]);
//         }
//     }
//     cout<< str;
//     return 0;
// }