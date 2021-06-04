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
## 3. Con trỏ nâng cao
### Bài 1: Quản lí bộ nhớ


### Bài 2: Số học con trỏ 
Cho biết kết quả in ra màn hình của các đoạn code sau:

1. 
```c++
int a[] = {1, 2, 3, 4, 5};
int* p = a;
*(p + 1) += *a;
cout << *(a + 1);
```
2. 
```c++
int a[] = {1, 2, 3, 4, 5};
int** p = &a;
(*p)[4] = *((*p) + 1);
cout << a[4] << endl;
```
3.
```c++
int a[][3] = {{1, 2, 3}, {4, 5, 6}};
cout << *(*(a + 2) + 1);
```

4.
```c++
int a[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int*** p = &a;
*(*((*p) + 1) + 1) += (*((*p) + 2))[1];
cout << a[1][1];
```

## 4. Ngăn xếp, hàng đợi
### a. Ngăn xếp
*Bài toán Balanced Brackets trên HackerRank, nhóm Data Structure, độ khó Medium.  
Tác giả: @saikiran9194.*  

Cho một chuỗi chứa các cặp dấu ngoặc `()` `[]` `{}`. Một chuỗi các dấu ngoặc được gọi là "hợp lệ" nếu như với mỗi dấu mở ngoặc thì nó sẽ có một dấu đóng ngoặc cùng loại tương ứng.  
Ví dụ: các chuỗi sau là hợp lệ: `()[]{}`, `{[()]}`, `([]{})`, `[{(){}}]`, ... 

Thực hiện các yêu cầu sau:  
i. Trình bày ý tưởng để biết được một chuỗi các cặp dấu ngoặc có là hợp lệ hay không?  
ii. Viết một hàm kiểm tra tính hợp lệ của một chuỗi như mô tả ở trên, có prototype như sau:
```c++
bool checkBracketPairs(string str);
```
### b. Hàng đợi

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
## 3. Con trỏ nâng cao
### a. 


### b. Số học con trỏ (có nên giảng phần này luôn ko?)
- Nhắc lại mối quan hệ giữa con trỏ và mảng: ý nghĩa thực sự đằng sau dòng khai báo<br> `int a[] = {1, 2, 3, 4};`.
![](https://i.imgur.com/imeVQjw.png)
- Khi bạn khai báo một mảng trong C, giả sử được đặt tên là `a`, có 4 phần tử là `{1, 2, 3, 4}` như hình vẽ, 4 con số trên sẽ được cấp phát một vùng nhớ nào đó bên trong bộ nhớ để được lưu trữ, và chúng sẽ được lưu liên tiếp vào các vị trí vừa mới được cấp phát đó. Giả sử, chúng có các địa chỉ của mỗi phần tử liên tiếp nhau trên RAM là `0x1A, 0x1E, 0x22, ...`.
- "Miếng" bộ nhớ trên không có một tên gọi cụ thể nào cả. Vậy thì `a` là gì? `a` có phải là tên của cái mảng đó không?
- Thực ra khi khai báo mảng như trên thì `a` sẽ là một biến con trỏ, với giá trị mà nó chứa là địa chỉ của ô nhớ đầu tiên của "miếng" bộ nhớ mà vừa được cấp phát ở trên. Bản thân con trỏ cũng là một biến, nên nó cũng có địa chỉ của riêng nó. (nhìn hình minh họa, giả sử địa chỉ của con trỏ đó là `0x3F`).
- Cú pháp `*a` (lấy giá trị tại vị trí mà `a` trỏ tới) sẽ trả về giá trị của ô nhớ đầu tiên trong mảng. `*(a+1)` sẽ trả về giá trị của phần tử thứ 1 trong mảng (tương đương với cú pháp `a[1]`), v.v.

#### Câu 1
- Như đã nói ở trên, khi khai báo `a = {1, 2, 3, 4};` thì `a` sẽ là một con trỏ (kiểu `int*`) trỏ tới một vùng nhớ có nội dung là `{1, 2, 3, 4}`.
- Phép gán `int* p = a` đồng nghĩa với việc cho con trỏ `p` trỏ tới cùng vị trí mà `a` trỏ tới. Đó cũng chính là vùng nhớ `{1, 2, 3, 4}`.

![](https://i.imgur.com/yQTIkEZ.png)

- Vì `*(p+1)` chính là `p[1]`, mà do 2 vùng nhớ của `a` và `p` trùng nhau nên `p[1]` cũng chính là `a[1]`.<br> Phép giải tham chiếu `*a` sẽ trả về phần tử đầu tiên của mảng `a`, chính là `a[0]`. Hay nói cách khác, dòng lệnh `*(p + 1) += *a` tương đương với `a[1] += a[0]`. <br>Vì vậy `a[1]` sẽ mang giá trị `3`, nên kết quả xuất ra màn hình sẽ là `3`.
#### Câu 2
- Tương tự như trên, `a` là một con trỏ, trỏ tới một vùng nhớ có nội dung là `{1, 2, 3, 4, 5}`.
- Dòng `int** p = &a` là tạo một con trỏ `p` trỏ tới vùng nhớ của `a`. Do `a` mang kiểu là `int*`, nên để trỏ tới nó ta cần một con trỏ kiểu `int**`.
![](https://i.imgur.com/ntS8mDF.png)
- Do `(*p)` chính là `a` nên `(*p)[4]` tương đương với `a[4]`; còn `*((*p) + 1)` tương đương với `*(a + 1)`, lại chính là `a[1]`. <br>Vì vậy, `(*p)[4] = *((*p) + 1)` tương đương với `a[4] = a[1]` nên kết quả in ra màn hình sẽ là `1`.
#### Câu 3
- Ta có `a` là một mảng 2 chiều, hay nói cách khác, `a` là một mảng của các mảng một chiều.

![](https://i.imgur.com/JrBfGez.png)

- Ta xét phần trong ngoặc đơn: `*(a+1)`. Tương tự như mảng một chiều, biểu thức trên tương đương với `a[1]`. Nhưng vì `a` là một mảng của các mảng một chiều nên `a[1]` sẽ là một mảng một chiều thành phần bên trong đó chứ không phải là một giá trị cụ thể. Hay nói cách khác, `a[1]` là một con trỏ, trỏ đến dòng số 1 của ma trận `a`. <br> Vì vậy, `*(*(a + 1) + 2)` tương đương với `*(a[1] + 2)`. 
- Nhưng ta lại có cú pháp `*(u + i)` tương đương với `u[i]`, nên suy ra `*(a[1] + 2)` chính là `a[1][2]`. Vì vậy đáp án in ra màn hình là `6`.


#### Câu 4
- Vì `*(*((*p) + 1) + 1) += (*((*p) + 2))[1]`  
$\Leftrightarrow$ `(*(*(a + 1) + 1) += (*(a + 2))[1])`   
$\Leftrightarrow$ `(*(a[1] + 1) += (a[2])[1])`   
$\Leftrightarrow$ `a[1][1] += a[2][1]`   
Nên đáp án in ra màn hình là `11`.  

## 4. Stack và queue
### a. Stack
**i. Ý tưởng**

Ta để ý là các cặp dấu ngoặc xuất hiện theo thứ tự 
first in first out, có nghĩa là dấu mở ngoặc nào tới sau thì nó phải được đóng trước. Do đó ta sử dụng stack để giải bài toán này. Cụ thể như sau:
- Ta duyệt qua từng kí tự của chuỗi đó.
- Nếu ta gặp một dấu mở ngoặc, ta đẩy nó vào stack.
- Nếu ta gặp một dấu đóng ngoặc, ta kiểm tra thử nó có cùng loại với dấu mở ngoặc mà ta gặp gần nhất hay không (dấu mở ngoặc gần nhất là phần tử trên đỉnh stack). Nếu có, ta tiếp tục xét kí tự tiếp theo. Nếu khác loại thì coi như chuỗi là không hợp lệ (trường hợp này là bị thiếu dấu mở ngoặc, dư dấu đóng ngoặc).
- Sau khi duyệt hết các kí tự trong chuỗi, ta kiểm tra xem trong stack còn dư phần tử nào hay không, nếu có thì ta đã rơi vào trường hợp dư dấu mở ngoặc, thiếu dấu đóng ngoặc.
- Nếu chuỗi nhập vào không vi phạm bất cứ tiêu chuẩn nào thì nó là hợp lệ.

**ii. Code**
```c++
bool checkBracketPairs(string s) {
    stack<char> history;
    
    // Ta duyệt qua từng kí tự 
    for (char c : s) {
        // Nếu ta gặp dấu mở ngoặc thì push vào stack
        if (c == '(' || c == '[' || c == '{') {
            history.push(c);
        }
        // Nếu ta gặp dấu đóng ngoặc
        else if (c == ')' || c == ']' || c == '}') {
            // Nếu dấu đóng ngoặc đó không phải đồng loại 
            // của dấu mở ngoặc trên đỉnh stack -> sai
            if (history.empty() || !sameType(history.top(), c) {
                return false;
            }
        } 
    }
    
    // Nếu ta đã duyệt hết chuỗi rồi mà trong stack vẫn còn
    // dư phần tử -> sai
    if (!history.empty()) {
        return false;
    }
    
    // Nếu không sai thì là đúng :)
    return true;
}

// Hàm kiểm tra xem một cặp ngoặc có cùng loại hay không
bool sameType(char open, char close) {
    if (open == '(' && close == ')') return true;
    if (open == '[' && close == ']') return true;
    if (open == '{' && close == '}') return true;
    return false;
}
```
## 5

## 6

## 7
