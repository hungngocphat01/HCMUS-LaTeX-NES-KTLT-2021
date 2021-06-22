bool isPrime(int x){
  // Hàm kiểm tra số nguyên tố
  // Tự viết
}

// Do phuc tap O(n^2)
// Ý tưởng: Lưu trữ mảng số nguyên tố (bằng mảng bool.)
// Tiếp tục lưu trữ mảng số nguyên tố cấp 2  tức các số có thể tách thành tổng hai số nguyên tố)
// Nếu m có thể tách thành tổng bởi số nguyên tố và số nguyên tố cấp 2 thì xuất ra
void func(int m) {
  if (m % 2 == 0) {
  // Trường hợp đơn giản, m chẵn thì m sẽ là tổng của 2 và 2 số nguyên tố lẻ (do m > 100)
    for(int i = 3; i <= sqrt(m); i++) {
    if (isPrime(i) == true){
      if (isPrime(m - i - 2) == true){
          cout << "Ba so nguyen to lan luon la: 2 - " << i << " - "<< m - i - 2;
          return;
        }
      }
    }
  }
  else {
    bool *isPrimeArr = new bool[m];
    for(int i = 2; i <= m - 2; i++) {
      isPrimeArr[i] = isPrime(i);
    }
    bool *isPrimeArr2 = new bool[m];
    for(int i = 2; i <= m - 2; i++) {
      for(int j = 2; j <= i-2; j++) {
        if (isPrimeArr[j] == true && isPrimeArr[i-j] == true){
          isPrimeArr2[i] = true;
        }
      }
    }
    for(int i = 2;i <= m - 2; i++){
      if (isPrimeArr[i] == true && isPrimeArr2[m - i]== true) {
         cout << "Ba so nguyen to lan luot la: "<< i<<" - ";
         for(int j=2; j <= m - i; j++){
          if(isPrimeArr[j] == true && isPrimeArr[i - j] == true){
             cout<< j <<" - "<< i - j;
             return;
          }
         }
      }
    }
    cout << "Khong the tach thanh 3 so nguyen to";
  }
}
