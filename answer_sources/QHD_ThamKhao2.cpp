#include <iostream>
using namespace std;

// Cấu trúc tọa độ trong không gian 2 chiều
struct Point2D {
    int x;
    int y;
};

// 2 hàm tiện ích để cấp phát/giải phóng mảng 2 chiều
// init: giá trị khởi tạo cho các phần tử trong mảng
int** create2DArray(int row, int col, int init) {
    int **arr = (int**)malloc(sizeof(int*) * row);
    for (int i = 0; i < row; i++) {
        arr[i] = (int*)malloc(sizeof(int) * col);
        for (int j = 0; j < col; j++) {
            arr[i][j] = init;
        }
    }
    return arr;
}

void delete2DArray(int**& arr, int row) {
    for (int i = 0; i < row; i++) {
        free(arr[i]);
    }
    free(arr);
    arr = NULL;
}

// Hàm kiểm tra xem (i, j) có nằm trong vũng nước không
// S: vũng nước (danh sách các tọa độ); z: kích thước mảng S
bool inPuddle(int i, int j, Point2D S[], int z) {
    for (int k = 0; k < z; k++) {
        if (S[k].x == i && S[k].y == j) {
            return true;
        }
    }
    return false;
}

// Hàm đếm số bước đi từ gốc tọa độ (0, 0) đến điểm (m, n) có vũng nước là S
// Hàm này chưa sử dụng quy hoạch động
int countSteps(int m, int n, Point2D S[], int z) {
    // Trường hợp (m, n) trùng gốc tọa độ (0, 0)
    if (m == 0 && n == 0) {
        return 1;
    }
    // Nếu m hoặc n âm hoặc (m, n) trong vũng nước
    else if (m < 0 || n < 0 || inPuddle(m, n, S, z)) {
        return 0;
    }
    // Các trg hợp còn lại
    return countSteps(m - 1, n, S, z) + countSteps(m, n - 1, S, z);
}

// Hàm tương tự như trên nhưng sử dụng quy hoạch động theo top-down
// answer: bảng tra lời giải
int QHD_TopDown(int m, int n, Point2D S[], int z, int **answer) {
    // Kiểm tra xem lời giải đã có trong bảng chưa. Nếu có trả về luôn
    // Ta phải có đk m*n > 0 để tránh trường hợp bị chỉ số âm
    if (m * n > 0 && answer[m][n] != -1) {
        return answer[m][n];
    }

    // Nếu chưa có lời giải, giair lại y hệt hàm đệ quy ở trên 
    if (m == 0 && n == 0) {
        return 1;
    }
    else if (m < 0 || n < 0 || inPuddle(m, n, S, z)) {
        return 0;
    }
    int result = QHD_TopDown(m - 1, n, S, z, answer) + QHD_TopDown(m, n - 1, S, z, answer);
    // Lưu lại giá trị trên vào bangr tra 
    answer[m][n] = result;
    return result;
}

int QHD_BottomUp(int m, int n, Point2D S[], int z) {
    // Bảng tra lời giải có (m+1) hàng * (n+1) cột
    int **answer = create2DArray(m+1, n+1, 0);

    for (int i = 0; i < m+1; i++) {
        for (int j = 0; j < n+1; j++) {
            // Nếu (i, j) == (0, 0) hoặc trong vũng nước thì "trả về" 0
            if ((i == 0 && j == 0) || (inPuddle(i, j, S, z))) {
                answer[i][j] = 0;
            }
            /** Nếu (i, j) đi dọc theo đường biên của bảng thì trả về 1 (các bạn có thể quan sát hình minh họa ở phần trên).
            
            Phải làm như thế này để tránh trường hợp i < 0 hay j < 0 do khi ta sử dụng mảng 2 chiều thì chỉ số ko thể âm. **/
            else if ((i == 0 && j != 0) || (i != 0 && j == 0)) {
                answer[i][j] = 1;
            }
            // Các trg hợp còn lại
            else {
                answer[i][j] = answer[i - 1][j] + answer[i][j - 1];
            }
        }
    }

    int a = answer[m][n];
    // Giải phóng 
    delete2DArray(answer, m+1);
    return a;
}

int main() {
    // Các tọa độ vũng nước
    Point2D S[] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    int z = 3; // kích thước mảng S
    int m = 16, n = 16;     // tọa độ ô cần test

    // GIẢI THEO TOP-DOWN
    // Tạo bảng tra lời giải, ta khởi tạo -1 cho những chỗ chưa có lời giải
    int** answer = create2DArray(m+1, n+1, -1);
    cout << "Ket qua top-down: " << endl;
    int c = QHD_TopDown(m, n, S, z, answer);
    cout << c << endl;
    delete2DArray(answer, m+1);

    // GIẢI THEO BOTTOM-UP
    cout << "Ket qua bottom-up: " << endl;
    c = QHD_BottomUp(m, n, S, z);
    cout << c << endl;
    
    // GIẢI THEO ĐỆ QUY THƯỜNG (KHÔNG CÓ QUY HOẠCH ĐỘNG)
    cout << "Ket qua de quy thong thuong: " << endl;
    c = countSteps(m, n, S, z);
    cout << c << endl;

    return 0;
}