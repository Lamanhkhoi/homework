# Review Question:
<img src="./img/bài 1.1 chapter 1.png" />
- cách 1 /* chú thích */ <br>
- cách 2 // chú thích <br>

<img src="./img/câu 1.2.png"/>
- thiếu dấu ; ở hàng int main() <br>

<img src="./img/1.3.png"/>
- câu lệnh này không có sai 

<img src="./img/1.4.png"/> <br>
- có 4 lỗi sai tất cả : <br>
    + sau khai báo thư viện không cần ; <br>
    + sau lệnh main phải có () <br>
    + dấu //  dùng để chú thích nên không in ra đc dòng số 3 <br>
    + chư khai báo biến n <br>

<img src="./img/1.5.png"/>
- declaration ( <b>câu lệnh tuyên bố </b>) tác dụng để chương trình dịch thuật ( compiler ) hiểu được biến vừa được khai báo thuộc loại gì và tên gì.

<img src="./img/1.6.png"/>
- mục đích của preprocessing directive: <br>
+ Khai báo các macro: Định nghĩa các đoạn mã con được sử dụng nhiều lần trong chương trình. <br>
+ Bao gồm các file header: Kết hợp nội dung của các file header khác vào file hiện tại. <br>
+ Điều kiện biên dịch: Cho phép biên dịch các đoạn mã khác nhau dựa trên các điều kiện nhất định. <br>

<img src="./img/1.7.png"/>
- #include <iostream> <br>
int main(){}

<img src="./img/1.8.png"/>
- Tên C++ là tên kế thừa của chương trình C và dấu " ++ " trong toán học thường được sử dụng để biểu thị phép tăng giá trị của một biến. Ta có thể hiểu đơn giản là C++ là phiên bản hoàn thiện hơn và tối ưu hơn.

<img src="./img/1.9.png"/>
- sai chữ new vì new là thì khoá trong bản Appendix B List 62 keyword nên ko sài được.

<img src="./img/1.10.png"/>
<b>A</b>. m *= n++
    m có giá trị là 10 và n có giá trị là 3 <br>
<b>B</b>. m += --n
    m có giá trị là 6 và n có giá trị là 1 <br>

<img src="./img/1.11.png"/>
<b>A</b>. m - 8 - n ==> 25-8-7=10 <br>
<b>B</b>. m = n = 3 ==> biến m = 3 và biến n = 3 <br>
<b>C</b>. m%n ==> 25%7=4 <br>
<b>D</b>. m%n++ ==> 25%7=4 <br>
<b>E</b>. m%++n ==> giá trị của n là 8 do ++n => 25%8=1 <br>
<b>F</b>. ++m - n-- ==> m có giá trị là 26 và n vẫn giữ nguyên giá trị là 7 => 26-7=19

<img src="./img/1.12.png"/>
-keyword: int, main, cin, cout, endl. <br>
-identifier: n. <br>
-operators: >>, *=, <<. <br>
-literals: "n=". <br>
-punctuations: (), {}, ;. <br>
-comment:// multiply n by 3 <br>

<img src="./img/1.13.png"/>
<b>A</b>. sai chỗ >> vì keyword cout có tác dụng suất ra còn dấu << dùng để nhập dữ liệu từ bên ngoài. <br>
<b>B</b>. sai chỗ double vì keyword double không được phép làm 1 biến để gáng giá trị.

<img src="./img/1.14.png"/>
- cả 2 câu lệnh đều có tác dụng giống nhau đều khởi tại biến ch và khi xuất ra màn hình biến ch sẽ có giá trị là 65

<img src="./img/1.15 to 1.20.png"/>
1.15/
    <img src="./img/bài 1.15.png"/>
    kết quả xuất ra mà hình là chữ D <br>

1.16/
-<b>Floating-point</b> là một thuật ngữ trong khoa học máy tính dùng để chỉ một kiểu số thực, được sử dụng để biểu diễn các số có phần thập phân. <br>
- vì số dạng floating-point thường được biểu diễn dưới dạng ký pháp khoa học, ví dụ: 1.23e+10 tương đương với 12300000000. Ký tự "e" đại diện cho "lũy thừa của 10" và số sau "e" cho biết số mũ. <br>

1.17/
- <b>Numeric overflow</b>, hay thường gọi là tràn số, là một tình trạng xảy ra trong lập trình khi một phép tính toán tạo ra một kết quả vượt quá phạm vi mà một kiểu dữ liệu có thể biểu diễn.<br>
VD: khi ta sài kiểu dữ liệu short mà ta cho giá trị của 1 biến trong kiểu dữ liễu đó quá lớn như 100000000000 thì sẽ bị Numeric overflow. <br>

1.18/
- <b>Integer overflow</b> Khi xảy ra tràn số nguyên, giá trị thường "cuốn trở lại" từ giá trị lớn nhất sang giá trị nhỏ nhất hoặc ngược lại. Ví dụ, nếu bạn cộng hai số nguyên lớn và kết quả vượt quá giá trị lớn nhất mà kiểu dữ liệu có thể biểu diễn, kết quả có thể trở thành một số âm lớn.<br>
- <b>Floating-point overflow</b> <br>
    +Tính chất liên tục: Các số thực có thể có phần thập phân và có thể biểu diễn một phạm vi giá trị rất lớn. <br>
    +Biểu diễn gần đúng: Các số thực thường được biểu diễn dưới dạng gần đúng trong máy tính, do đó tràn số thực có thể dẫn đến việc mất độ chính xác. <br>
    +Giá trị vô cực: Khi một số thực trở nên quá lớn, nó có thể được biểu diễn bằng giá trị vô cực dương hoặc âm. <br>
    +Giá trị không xác định (NaN): Một số phép toán trên số thực có thể dẫn đến kết quả không xác định, chẳng hạn như chia cho 0.<br>

1.19/
- <b>run-time error</b> là một loại lỗi trong lập trình xảy ra khi chương trình đang thực thi. Khác với lỗi biên dịch (compile-time error) xảy ra khi biên dịch mã nguồn, lỗi thời gian chạy thường xuất hiện khi chương trình đã được biên dịch thành mã máy và đang chạy. <br>
VD: <br>
1/Lỗi trỏ (Pointer error)<br>
2/Lỗi ngoại lệ (Exception) <br>

1.20/
- <b>compile-time error</b> là một loại lỗi trong lập trình xảy ra khi trình biên dịch cố gắng chuyển đổi mã nguồn (ví dụ: C++, Java) thành mã máy mà máy tính có thể hiểu được. Lỗi này xảy ra khi mã nguồn vi phạm các quy tắc cú pháp hoặc ngữ nghĩa của ngôn ngữ lập trình. Nói cách khác, đây là những lỗi mà trình biên dịch phát hiện ra trước khi chương trình được thực thi.<br>
VD: <br>
1/Lỗi cú pháp<br>
2/Lỗi cú pháp