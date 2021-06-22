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