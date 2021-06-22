// Hàm cấp phát dữ liệu cho ma trận M*N
ComplexNumber** newMatrix(int m, int n) {
    // Cấp phát m hàng cho ma trận
    ComplexNumber** matrix = new (ComplexNumber*)[m];
    // Với mỗi hàng, cấp phát tiếp n cột
    for (int i = 0; i < m; i++) {
        matrix[i] = new ComplexMatrix[m];
    }
    return matrix;
}
// Hàm giải phóng ma trận
void deleteMatrix(ComplexNumber** &matrix, int m) {
    for (int i = 0; i < m; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    // Sau khi giải phóng nên gán lại con trỏ vừa giải phóng = null
    matrix = NULL;
}
// Hàm nhập thông tin cho ma trận
void readMatrix(ComplexMatrix** matrix, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap thong tin cho a[%d][%d]:\n", i, j);
            cout << "Nhap phan thuc: ";
            cin >> a[i][j].Re;
            cout << "Nhap phan ao: ";
            cin >> a[i][j].Im;
        }
        cout << endl;
    }
}
// Hàm xuất ma trận
void printMatrix(ComplexMatrix** matrix, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j].Re << "+" << a[i][j].Im << "i";
            cout << "\t";
        }
        cout << endl;
    }
}
// Hàm tính tổng
ComplexNumber sumOfMatrixElems(ComplexMatrix** matrix, int m, int n) {
    ComplexNumber s;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            s.Re += a[i][j].Re;
            s.Im += a[i][j].Im;
        }
    }
}