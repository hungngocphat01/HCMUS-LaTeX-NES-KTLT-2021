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

## 2. Con trỏ nâng cao
**Hãy viết các lệnh/đoạn lệnh để cấp phát, giải phóng bộ nhớ và nhập nội dung cho các mảng động sau:**  
a.  Mảng nguyên một chiều có `n` phần tử.  
b. Ma trận thực `MxN`.  
c. Mảng có `n` chuỗi kí tự, mỗi chuỗi kí tự có độ dài khác nhau nhập từ bàn phím.  
d. **(Đọc thêm)** Cho cấu trúc số phức như sau, hãy cấp phát bộ nhớ động cho một ma trận phức có kích thước `MxN`. Đồng thời, gán cho mỗi phần tử giá trị mặc định là $a+bi$, với $a$ và $b$ lần lượt là chỉ số hàng và chỉ số cột của ô đó.  
```c++
struct ComplexNumber {
    float Re;
    float Im;
};
```
e. Hãy cấp phát động một mảng gồm nhiều ma trận phức như ở câu (d), nhập giá trị cho từng ma trận, và sau đó tính tổng của chúng. Biết các ma trận có kích thước giống nhau.

*Lưu ý: các kích thước được nhập từ bàn phím.*


## 3. Danh sách liên kết

## 4. Ngăn xếp, hàng đợi
*2 bài toán bên dưới nằm trong Interview Preparation Kit của HackerRank, nên chúng có thể được hỏi khi phỏng vấn xin việc.*
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
*Bài toán Queue using Two Stacks trên HackerRank, nhóm Data Structure, độ khó Medium.  
Tác giả: @saikiran9194.*  

**Sử dụng 2 stack, hãy tạo ra một hàng đợi và thực hiện các yêu cầu sau:**  
i. Nêu ý tưởng thực hiện.  
ii. Tạo ra struct `QueueFS` (queue from stacks) chứa 2 stack kiểu nguyên và viết 3 hàm `enqueue`, `dequeue` và `peek` để thao tác với queue vừa tạo ra đó. Có thể khai báo thêm một số thành phần khác để tối ưu hóa bài toán.

## 5. Đệ quy
Game Minesweeper có một thuật toán rất hay đó là thuật toán vết dầu loang. Thuật toán được mô tả như sau:
Có hai ma trận 2 chiều, một ma trận (int) được lưu trữ các số và boom ``(-1)``, một ma trận (bool) để lưu trữ thuộc tính ô có được mở hay không.
Khi ô được chọn là boom thì sẽ trả ra kết quả (BOOM!!).   
Khi ô được chọn không phải boom thì nó sẽ loang ra:  
a.   Nếu ô có boom thì nó sẽ không được mở  
b.   Nếu ô không có boom và không có số thì thuật   toán loang sẽ tiếp tục cho ô đó  
c.   Nếu ô không có boom và có số thì chỉ mở ô đó
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

## 8. Số học con trỏ (đọc thêm)
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

<!--------------------------------------------->

# P2: Đáp án, giải thích
## 1
## 2
## 3. Con trỏ nâng cao
a. 
```c++
// Cấp phát
int n;
cin >> n;
int* a = new int[n];

// Nhập
for (int i = 0; i < n; i++) {
    cin >> a[i];
}

// Giải phóng
delete[] a;
```

b.  
Nhắc lại kiến thức:
![](https://i.imgur.com/jfSvgcb.png)
```c++
// Cấp phát
int m, n;
cin >> m >> n;

// Một ma trận có m hàng
float** a = (float*)[m];

// Mỗi hàng có n cột
for (int i = 0; i < m; i++) {
    a[i] = new float[n];
}

// Nhập
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        cin >> a[i][j];
    }
}

// Giải phóng
for (int i = 0; i < m; i++) {
    delete[] a[i];
}
delete[] a;
/*
Ta phải giải phóng các phần tử của a trước khi giải phóng a,
vì bản thân a chỉ là một con trỏ 2 cấp, nó không thực sự chứa
nội dung của ma trận. Khi ta giải phóng a thì các con trỏ thành 
phần bên trong a vẫn còn tồn tại, gây rò rỉ bộ nhớ. */
```
![](https://i.imgur.com/xmYWlMs.png)

c. 
```c++
int n;
cin >> n;

// Mảng của các chuỗi
char** a = new (char*)[n];

// Cấp phát và nhập từng chuỗi
for (int i = 0; i < n; i++) {
    int size;
    cin >> size;
    
    a[i] = new char[size];
    gets(a[i]);
}

// Giải phóng
for (int i = 0; i < n; i++) {
    delete[] a[i];
}
delete[] a;
```
d. (đọc thêm)
```c++
int m, n;
cin >> m >> n;

// Ma trận gồm m hàng
ComplexNumber** a = (ComplexNumber*)[m];

// Mỗi hàng gồm n cột
for (int i = 0; i < m; i++) {
    a[i] = new ComplexNumber[n];
    
    // Gán giá trị Re=i, Im=j cho các ô cho các ô
    for (int j = 0; i < m; i++) {
        a[i][j].Re = i;
        a[i][j].Im = j;
    }
}

// Giải phóng
for (int i = 0; i < m; i++) {
    delete[] a[i];
}
delete a[];
```



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

### b. Queue
**i. Ý tưởng thực hiện**
- Nhắc lại về 2 cấu trúc:
    - Stack: phần tử nào vào sau thì ra trước (như một chồng dĩa).
    - Queue: phần tử nào vào sau thì ra sau (như một hàng người đợi mua trà sữa).

- Để implement một queue bằng 2 stack, ta làm như sau:
    - Giả sử ta có 2 stack gọi là stack `(1)` và stack `(2)`.
    - Khi push một phần tử vào queue, ta push vào `(1)`.
    - Khi muốn xem một phần tử ở đầu queue, vì phần tử ở đầu queue lại nằm dưới đáy của stack `(1)`, nên ta pop tất cả phần tử từ stack `(1)` và chuyển qua stack `(2)`. Lúc này, phần tử ở đầu queue đã nằm trên đỉnh của stack `(2)`. Sau khi xem xong thì ta lại pop tất cả phần tử từ stack `(2)` bỏ về stack `(1)`.
    - Khi muốn xóa một phần tử khỏi queue, ta cũng chuyển tất cả phần tử từ `(1)` sang `(2)`, nhưng sau đó phải bỏ phần tử trên đỉnh của stack `(2)` đi, rồi mới chuyển về lại stack `(1)`.  
    - Minh họa: giả sử ta có một queue có nội dung là `{1, 2, 3, 4}`: 
        - [Link ảnh GIF xem đỉnh queue](https://ibb.co/64Hv1bH).
         - [Link ảnh GIF xóa đỉnh queue](https://ibb.co/syPCBFS)

#### ii. Code
```c++
struct QueueFS {
    stack<int> st1;
    stack<int> st2;
};

void enqueue(QueueFS& q) {
    // Enqueue là push vào stack 1
    q.st1.push(x);
}

// Hàm lấy giá trị ở đỉnh queue
int peek(QueueFS& q, int x) {
    // Pop 1 mang sang 2
    while (!q.st1.empty()) {
        int t = q.st1.top();
        q.st2.push(t);
    }
    
    // Đỉnh queue chính là đỉnh stack 2
    int top = q.st2.top();
    
    // Pop 2 mang về 1
    while (!q.st2.empty()) {
        int t = q.st2.top();
        q.st1.push(t);
    }
    return top;
}

/* Hàm dequeue
Vì dequeue và peek là 2 công việc rất tốn kém, ta nên
đồng thời cho hàm dequeue trả về giá trị của đỉnh queue luôn
*/
int dequeue(QueueFS& q) {
    // Pop 1 mang sang 2
    while (!q.st1.empty()) {
        int t = q.st1.top();
        q.st2.push(t);
    }
    
    // Đỉnh queue chính là đỉnh stack 2
    int top = q.st2.top();
    // Bỏ đi phần tử ở đỉnh stack 2
    q.st2.pop();
    
    // Pop 2 mang về 1
    while (!q.st2.empty()) {
        int t = q.st2.top();
        q.st1.push(t);
    }
    return top;
}
```



- **(Nâng cao, đọc thêm) Tối ưu hóa:** vì mỗi lần xem đỉnh queue ta phải pop `(1)` bỏ sang `(2)` rồi lại phải bỏ về `(1)`, do đó ta nên tạo một biến tên là `top` bên trong struct queue của chúng ta để lưu giá trị của đỉnh queue để truy xuất thuận tiện hơn. Biến này sẽ được cập nhật giá trị khi và chỉ khi:
    - Khi queue đang rỗng mà chúng ta thêm một phần tử mới vào, thì phần tử đó sẽ là đỉnh của queue (các phần tử khác sau đó nằm ở phía sau phần tử đầu).
    - Khi ta pop đỉnh của queue mà trong queue vẫn còn dữ liệu thì đỉnh queue sẽ là phần tử ngay kế sau.
```c++
struct QueueFS {
    stack<int> st1;
    stack<int> st2;
    int top;
}

void enqueue(QueueFS& q, int x) {
    if (q.empty()) {
        top = x;
    }
    q.st1.push(x);
}

int top(QueueFS& q) {
    // Nếu như queue không rỗng (stack 1 không rỗng), trả về top
    if (!q.st1.empty()) {
        return q.top;
    }
    else {
        cout << "Queue rong!" << endl;
        return 0;
    }
}

void dequeue(QueueFS& q) {
    // Pop 1 bỏ sang 2
    while (!q.st1.empty()) { ... }
    
    // Vứt giá trị ở đỉnh stack 2 đi
    q.st2.pop();
    
    // Nếu queue không rỗng (stack 2 không rỗng), đỉnh queue là đỉnh stack 2
    if (!q.st2.empty()) {
        q.top = q.st2.top();
    }
    
    // Pop 2 bỏ sang 1
    while (!q.st2.empty()) { ... }
}
```


## 5

## 6

## 7

## 8. Số học con trỏ (đọc thêm)
- Nhắc lại mối quan hệ giữa con trỏ và mảng: ý nghĩa thực sự đằng sau dòng khai báo<br> `int a[] = {1, 2, 3, 4};`.
![](https://i.imgur.com/imeVQjw.png)
- Khi bạn khai báo một mảng trong C, giả sử được đặt tên là `a`, có 4 phần tử là `{1, 2, 3, 4}` như hình vẽ, 4 con số trên sẽ được cấp phát một vùng nhớ nào đó bên trong bộ nhớ để được lưu trữ, và chúng sẽ được lưu liên tiếp vào các vị trí vừa mới được cấp phát đó. Giả sử, chúng có các địa chỉ của mỗi phần tử liên tiếp nhau trên RAM là `0x1A, 0x1E, 0x22, ...`.
- "Miếng" bộ nhớ trên không có một tên gọi cụ thể nào cả. Vậy thì `a` là gì? `a` có phải là tên của cái mảng đó không?
- Thực ra khi khai báo mảng như trên thì `a` sẽ là một biến con trỏ, với giá trị mà nó chứa là địa chỉ của ô nhớ đầu tiên của "miếng" bộ nhớ mà vừa được cấp phát ở trên. Bản thân con trỏ cũng là một biến, nên nó cũng có địa chỉ của riêng nó. (nhìn hình minh họa, giả sử địa chỉ của con trỏ đó là `0x3F`).
- Cú pháp `*a` (lấy giá trị tại vị trí mà `a` trỏ tới) sẽ trả về giá trị của ô nhớ đầu tiên trong mảng. `*(a+1)` sẽ trả về giá trị của phần tử thứ 1 trong mảng (tương đương với cú pháp `a[1]`), v.v.

### Câu 1
- Như đã nói ở trên, khi khai báo `a = {1, 2, 3, 4};` thì `a` sẽ là một con trỏ (kiểu `int*`) trỏ tới một vùng nhớ có nội dung là `{1, 2, 3, 4}`.
- Phép gán `int* p = a` đồng nghĩa với việc cho con trỏ `p` trỏ tới cùng vị trí mà `a` trỏ tới. Đó cũng chính là vùng nhớ `{1, 2, 3, 4}`.

![](https://i.imgur.com/yQTIkEZ.png)

- Vì `*(p+1)` chính là `p[1]`, mà do 2 vùng nhớ của `a` và `p` trùng nhau nên `p[1]` cũng chính là `a[1]`.<br> Phép giải tham chiếu `*a` sẽ trả về phần tử đầu tiên của mảng `a`, chính là `a[0]`. Hay nói cách khác, dòng lệnh `*(p + 1) += *a` tương đương với `a[1] += a[0]`. <br>Vì vậy `a[1]` sẽ mang giá trị `3`, nên kết quả xuất ra màn hình sẽ là `3`.
### Câu 2
- Tương tự như trên, `a` là một con trỏ, trỏ tới một vùng nhớ có nội dung là `{1, 2, 3, 4, 5}`.
- Dòng `int** p = &a` là tạo một con trỏ `p` trỏ tới vùng nhớ của `a`. Do `a` mang kiểu là `int*`, nên để trỏ tới nó ta cần một con trỏ kiểu `int**`.
![](https://i.imgur.com/ntS8mDF.png)
- Do `(*p)` chính là `a` nên `(*p)[4]` tương đương với `a[4]`; còn `*((*p) + 1)` tương đương với `*(a + 1)`, lại chính là `a[1]`. <br>Vì vậy, `(*p)[4] = *((*p) + 1)` tương đương với `a[4] = a[1]` nên kết quả in ra màn hình sẽ là `1`.
### Câu 3
- Ta có `a` là một mảng 2 chiều, hay nói cách khác, `a` là một mảng của các mảng một chiều.

![](https://i.imgur.com/JrBfGez.png)

- Ta xét phần trong ngoặc đơn: `*(a+1)`. Tương tự như mảng một chiều, biểu thức trên tương đương với `a[1]`. Nhưng vì `a` là một mảng của các mảng một chiều nên `a[1]` sẽ là một mảng một chiều thành phần bên trong đó chứ không phải là một giá trị cụ thể. Hay nói cách khác, `a[1]` là một con trỏ, trỏ đến dòng số 1 của ma trận `a`. <br> Vì vậy, `*(*(a + 1) + 2)` tương đương với `*(a[1] + 2)`. 
- Nhưng ta lại có cú pháp `*(u + i)` tương đương với `u[i]`, nên suy ra `*(a[1] + 2)` chính là `a[1][2]`. Vì vậy đáp án in ra màn hình là `6`.


### Câu 4
- Vì `*(*((*p) + 1) + 1) += (*((*p) + 2))[1]`  
$\Leftrightarrow$ `*(*(a + 1) + 1) += (*(a + 2))[1]`   
$\Leftrightarrow$ `*(a[1] + 1) += (a[2])[1]`   
$\Leftrightarrow$ `a[1][1] += a[2][1]`   
Nên đáp án in ra màn hình là `11`.  