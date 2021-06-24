#include <iostream>
#include <cstring>
using namespace std;

// Hàm sao chép mảng a ra một mảng khác, và thêm x vào mảng mới đó (không huỷ a)
int* cloneAdd(int* a, int size, int x) {
    int* b = new int[size + 1];
    memcpy(b, a, sizeof(int) * size);
    b[size] = x;
    return b;
}

// Giống như bài toán Fibonacci các bạn đã đc học, ở đây mình sẽ thêm một tham số vào hàm này để lưu lại kq tính toán của các bài toán nhỏ hơn.
// Do kết quả của thuật toán này trả về một dãy, nên tham số cache của mình sẽ là dãy của các dãy, chính là mảng 2 chiều
// Ngoài ra mình cũng cần 1 tham số khác để chứa kích thước mảng của các dãy bên trong tham số cache
int* TimDayTongNganNhat(int* a, int asize, int n, int& rsize, int** cache_data, int* cache_size) {
    if (n < 0) {
        return nullptr;
    }
    else if (n == 0) {
        return new int[0]; 
    }
    // Kiểm tra cache xem thử bài toán con này có được giải chưa
    if (cache_data[n] != nullptr) {
        rsize = cache_size[n];
        return cache_data[n];
    }
    // Nếu chưa, tiếp tục giải như cũ
    int* dayNganNhat = nullptr;
    int soPtDayNganNhat = 0;

    for (int i = 0; i < asize; i++) {
        int hieu = n - a[i];
        int soPtDayTong = 0;
        // dayTongH là dãy có tổng lại bằng hiệu n - a[i]
        int* dayTongH = TimDayTongNganNhat(a, asize, hieu, soPtDayTong, cache_data, cache_size);
        if (dayTongH != nullptr) {
            // Nhận xét: nếu ở đây ta thêm a[i] trực tiếp vào dayTongH như lần trước, thì khi đó dayTongH sẽ có tổng bằng n, chứ không phải là n-a[i] nữa, mà dãy này đã được lưu lại trong tham số cache_data lúc ta chạy hàm đệ quy nên nếu ta giải phóng nó và cấp phát lại thì cái cache đã được lưu khi nãy sẽ bị trỏ tới một vùng nhớ không tồn tại, đó là lý do ta nên cấp phát lại một mảng MỚI HOÀN TOÀN, không đá động gì tới mảng được trả về bởi hàm đệ quy.
            int* dayTongN = cloneAdd(dayTongH, soPtDayTong, a[i]); // dãy này có tổng lại bằng n
            soPtDayTong++;
            // Còn lại làm tương tự
            if (dayNganNhat == nullptr || soPtDayTong < soPtDayNganNhat) {
                dayNganNhat = dayTongN;
                soPtDayNganNhat = soPtDayTong;
            }
            else {
                // Ta không được giải phóng dayTongH hay dayNganNhat vì khi nãy nó đã được lưu trong cache
                // Cache sẽ được giải phóng từ hàm main
                delete[] dayTongN;
            }
        }
    }
    // Sau khi giải xong bài toán con, ta lưu lại kq vào cache 
    cache_data[n] = dayNganNhat;
    cache_size[n] = soPtDayNganNhat;
    rsize = soPtDayNganNhat;
    return dayNganNhat;
}

int main() {
    int a[] = {25, 5, 2, 1};
    int kqsize;
    int csz = 200;
    // Mảng cache phải có kích thước bằng với n + 1 (n là giá tiền của sản phẩm trong đề bài)
    // Ở đây mình đặt 200 cho tiện
    int** cache_data = new int*[csz] { nullptr };
    int* cache_size = new int[csz] { 0 };
    
    int* kq = TimDayTongNganNhat(a, 4, 100, kqsize, cache_data, cache_size);
    for (int i = 0; i < kqsize; i++) {
        cout << kq[i] << " ";
    }

    for (int i = 0; i < 200; i++) {
        delete[] cache_data[i];
    }
    delete[] cache_data;
    delete[] cache_size;
    // Ta không delete kq vì nó đã được cache bên trong cache_data, mà khi nãy đã được xoá rồi
}