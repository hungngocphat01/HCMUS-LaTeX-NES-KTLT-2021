#include <iostream>
#include <cstring>
using namespace std;

// Hàm thêm x vào mảng động a có n phần tử
void addNew(int*& a, int& n, int x) {
    int* b = new int[n + 1];
    // Copy n phần tử của a qua b
    memcpy(b, a, sizeof(int) * n);
    // Thêm x vào b
    b[n] = x;
    delete[] a;
    // Thế chỗ
    a = b;
    n++;
}

// Trả về: một mảng thoả đk cần tìm
/* Tham số:
+ a, n: giỏ tiền xu và giá trị sản phẩm mà đề bài yêu cầu
+ asize: kích thước của a
+ rsize: kích thước của mảng trả về
*/ 
int* TimDayTongNganNhat(int* a, int asize, int n, int& rsize) {
    // Điều kiện dừng 
    if (n < 0) {
        return nullptr;
    }
    else if (n == 0) {
        return new int[0]; // mảng rỗng
    }
    // Dãy tổng ngắn nhất cần tìm, hiện tại là null (tức chưa tìm thấy)
    int* dayNganNhat = nullptr;
    int soPtDayNganNhat = 0;

    for (int i = 0; i < asize; i++) {
        // Trừ n cho từng số trong dãy ban đầu
        int hieu = n - a[i];
        // Gọi đệ quy để tìm dãy có tổng ngắn nhất với hiệu vừa tính được
        int soPtDayTong = 0;
        int* dayTong = TimDayTongNganNhat(a, asize, hieu, soPtDayTong);
        // Nếu trả về null tức là không thể biểu diễn hieu bằng tổng các phần tử trong a, dẫn đến việc cũng không thể biểu diễn được n, nên ta bỏ qua, còn ngược lại thì tiếp tục xét
        if (dayTong != nullptr) {
            // Vì dayTong có tổng lại bằng n - a[i], nên ta phải thêm a[i] vào dãy này để nó có tổng bằng n
            addNew(dayTong, soPtDayTong, a[i]);
            // Nếu dayNganNhat vẫn null (tức ta mới chạy đệ quy lần đầu) thì gán giá trị lần đầu đó cho nó
            if (dayNganNhat == nullptr) {
                dayNganNhat = dayTong;
                soPtDayNganNhat = soPtDayTong;
            }
            // Nếu không, tiếp tục kiểm tra xem dayTong vừa tìm được có ngắn hơn dayNganNhat hay không?
            // Nếu có, gán lại giá trị cho dayNganNhat (thuật toán tìm min cơ bản)
            else if (soPtDayTong < soPtDayNganNhat) {
                delete[] dayNganNhat; // cần giải phóng trước khi gán lại nếu ko muốn bị rò rỉ
                dayNganNhat = dayTong;
                soPtDayNganNhat = soPtDayTong;
            }
            // Nếu không có trg hợp nào thoả, xoá dayNganNhat vừa tìm được
            else {
                delete[] dayTong;
            }
        }
    }
    rsize = soPtDayNganNhat;
    return dayNganNhat;
}

int main() {
    int a[] = {25, 5};
    int kqsize;
    int* kq= TimDayTongNganNhat(a, 2, 100, kqsize);
    for (int i = 0; i < kqsize; i++) {
        cout << kq[i] << " ";
    }
    delete[] kq;
}