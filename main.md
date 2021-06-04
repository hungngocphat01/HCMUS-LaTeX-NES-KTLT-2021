<center>
<b>Trường Đại học Khoa học Tự Nhiên, ĐHQG-HCM.<br>
Mảng Điện tử Kỹ thuật, Câu lạc bộ Học thuật NES.</b>
<h1>
Ôn tập cuối kỳ môn <br>Kỹ thuật lập trình
</h1>
<img width="200" src="https://scontent.fvca1-1.fna.fbcdn.net/v/t1.18169-9/10592709_1468895370031070_8590196893426379293_n.jpg?_nc_cat=100&ccb=1-3&_nc_sid=09cbfe&_nc_ohc=6thJGOpcYQkAX8uUImA&_nc_ht=scontent.fvca1-1.fna&oh=00f26759e2f4bd9db0f02f3ec5486eae&oe=60DDD014" href="https://www.facebook.com/CLBNES">

</center>


<!--
Quân làm 1, 2
Phát làm 3, 4
Hiếu 5, 6
-->

# P1: Đề bài 
## 1. Con trỏ cơ bản

## 2. Danh sách liên kết
### Bài 1

## 3. Con trỏ nâng cao

## 4. Ngăn xếp, hàng đợi
*Bài toán Balanced Brackets trên HackerRank, nhóm Data Structure, độ khó Medium.  
Tác giả: @saikiran9194.*  

Cho một chuỗi chứa các cặp dấu ngoặc `()` `[]` `{}`. Một chuỗi các dấu ngoặc được gọi là "hợp lệ" nếu như với mỗi dấu mở ngoặc thì nó sẽ có một dấu đóng ngoặc tương ứng.  
Ví dụ: các chuỗi sau là hợp lệ: `()[]{}`, `{[()]}`, `([]{})`, `[{(){}}]`, ... 

Thực hiện các yêu cầu sau:  
i. Trình bày ý tưởng để biết được một chuỗi các cặp dấu ngoặc có là hợp lệ hay không?  
ii. Viết một hàm kiểm tra như mô tả ở trên, có prototype như sau:
```c++
bool checkBracketPairs(string str);
```

## 5. Đệ quy
Game Minesweeper có một thuật toán rất hay đó là thuật toán vết dầu loang. Thuật toán được mô tả như sau:
Có hai ma trận 2 chiều, một ma trận (int) được lưu trữ các số và boom ``(-1)``, một ma trận (bool) để lưu trữ thuộc tính ô có được mở hay không.
Khi ô được chọn là boom thì sẽ trả ra kết quả (BOOM!!).   
Khi ô được chọn không phải boom thì nó sẽ loang ra:  
i.   Nếu ô có boom thì nó sẽ không được mở  
ii.  Nếu ô không có boom và không có số thì thuật   toán loang sẽ tiếp tục cho ô đó  
iii. Nếu ô không có boom và có số thì chỉ mở ô đó
Hãy viết thuật toán đệ quy cho hàm mở ô sử dụng thuật toán loang: 
```c++
int Open(int xPoint, int yPoint, int** values, bool** isOpen, int length);
// xPoint,yPoint lần lượt là index x, index y
```

## 6. Thuật toán sắp xếp

Một biệt thự mới xây đang trang trí cho sân nhà của họ, họ định trang trí dọc đường đi bằng những bức tượng, bức tượng có thể tích lớn nhỏ khác nhau. Giả sử chúng ta có một mảng số thực để lưu trữ thể tích của các bức tượng theo thứ tự từ ngoài cổng biệt thự đến cửa nhà. Ban đầu shipper giao các bức tượng đến trước cổng nhà và họ sắp xếp ngẫu nhiên. Bạn hãy tìm thuật toán sắp xếp thích hợp để sắp xếp các bức tượng sao cho từ cổng nhà đến cửa có thể tích từ nhỏ đến lớn sao cho:

i. Tổng khoảng cách di chuyển các bức tượng là ít nhất
ii. Giả sử mỗi bức tượng đều có khối lượng khác nhau. Di chuyển ít sức lực nhất. <span style="color: red;" class="ola">(*)</span>

## 7. Quy hoạch động 

# P2: Đáp án, giải thích
## 1
## 2
## 3
## 4
## 5

## 6

## 7
