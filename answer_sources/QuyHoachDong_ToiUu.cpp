#include <stdio.h>
#include <malloc.h>

// n: Số tiền
// T: Bảng lời giải
// m: Số loại mệnh giá (Số cột của ma trận T)
// Trả về số âm nếu chưa có lời giải cho n
// Trả về 0 nếu không thể giải được trường hợp n
int sumOfRow(int n, int** T, int m) {
    int sum = 0;
    for (int i = 0; i < m; i++) sum += T[n - 1][i];
    return sum;
}

// n: Số tiền
// T: Bảng lời giải
// a: Mảng mệnh giá
// m: Số loại mệnh giá (Số cột của ma trận T)
void topDown(int n, int** T, int *a, int m) {
    int sum = sumOfRow(n, T, m);
    if (sum >= 0) return;

    // Trường hợp cơ bản
    for (int i = 0; i < m; i++) {
        if (a[i] == n) {// n bằng một mệnh giá nào đó
            // Ghi nhận vào bảng tra lời giải (1 đồng xu mệnh giá a[i])
            for (int j = 0; j < m; j++) T[n - 1][j] = 0;
            T[n - 1][i] = 1;
            return;
        }
    }

    // Trường hợp không cơ bản
    int minSum = n + 1;// Tổng số đồng xu nhỏ nhất (Luôn bé hơn n+1)
    int toiUu = -1;// Thứ tự trong mảng của mệnh giá tối ưu nhất cần lấy ra trước cho trường hợp n
    for (int i = 0; i < m; i++) {
        if (n < a[i]) break;// Nếu mệnh giá bắt đầu lớn hơn số tiền thì thoát
        topDown(n - a[i], T, a, m);
        sum = sumOfRow(n - a[i], T, m);
        if (sum > 0 && sum < minSum) {// sum>0: Giải được; sum<minSum: Tối ưu hơn
            minSum = sum;
            toiUu = i;
        }
    }

    // Ghi nhận lời giải vào bảng tra T
    for (int i = 0; i < m; i++) T[n - 1][i] = 0;
    if (toiUu > -1) {
        T[n - 1][toiUu] += 1;
        for (int i = 0; i < m; i++) T[n - 1][i] += T[n - a[toiUu] - 1][i];
    }
}

void btQuyHoachDong() {
    int a[] = {2,3,5};// Mảng mệnh giá
    int m = 3;// Số loại mệnh giá
    int n = 11;// Số tiền

    // Khai báo bảng tra T
    // Lúc đầu chưa có lời giải thì tất cả
    // phần tử của bảng tra đều gán bằng -1
    int** T = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        T[i] = (int*)malloc(sizeof(int) * m);
        for (int j = 0; j < m; j++) T[i][j] = -1;//-1 chua giai
    }

    topDown(n, T, a, m);

    // Lấy kết quả từ bảng tra T in ra màn hình
    if (sumOfRow(n, T, m) == 0) {
        printf("Khong co dap an cho n = %d\n", n);
    }
    else {
        printf("Dap an cho n = %d\n", n);
        printf("Loai xu: ");
        for (int i = 0; i < m; i++) {
            printf("%d\t", a[i]);
        }
        printf("\n");
        printf("So xu  : ");
        for (int i = 0; i < m; i++) {
            printf("%d\t", T[n - 1][i]);
        }
    }
}