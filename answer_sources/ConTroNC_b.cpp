// Cấp phát
int m, n;
cin >> m >> n;

// Một ma trận có m hàng
float** a = new (float*)[m];

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