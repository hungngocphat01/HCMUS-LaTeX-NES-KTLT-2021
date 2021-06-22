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