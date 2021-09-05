#include <iostream>
using namespace std;

// Cấu trúc tọa độ trong không gian 2 chiều
struct Point2D {
    int x;
    int y;
};

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

int QHD_BottomUp(int m, int n, Point2D S[], int z) {
    // Bảng tra lời giải có (m+1) hàng x (n+1) cột
    int **answer = (int**)malloc(sizeof(int*) * (m + 1));
    for (int i = 0; i < m+1; i++) {
        answer[i] = (int*)malloc(sizeof(int) * (n + 1));
    }

    for (int i = 0; i < m+1; i++) {
        for (int j = 0; j < n+1; j++) {
            // Nếu (i, j) == (0, 0) hoặc trong vũng nước thì "trả về" 0
            if ((i == 0 && j == 0) || (inPuddle(i, j, S, z))) {
                answer[i][j] = 0;
            }
            // Nếu (i, j) đi dọc theo đường biên của bảng thì trả về 1
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
    for (int i = 0; i < m+1; i++) {
        free(answer[i]);
    }
    free(answer);

    return a;
}

int main() {
    Point2D S[] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    int z = 3; // kích thước mảng S
    
    int c = QHD_BottomUp(15, 15, S, z);
    cout << "KQ: " << c << endl;
    return 0;
}