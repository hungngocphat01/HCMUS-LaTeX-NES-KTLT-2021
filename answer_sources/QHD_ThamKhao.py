# Bài giải tham khảo quy hoạch động

############# PHẦN 1: Giải bài toán bằng đệ quy ###################

# Hàm đếm số bước đi từ gốc tọa độ (0, 0) đến điểm (m, n) có vũng nước là S
# Hàm này chưa có quy hoạch động

# m, n: điểm cần đến; S: mảng các tọa độ trong vũng nước
def countSteps(m: int, n: int, S: list) -> int:
    # Nếu điểm có tọa độ là (0, 0) thì trả về 1
    if (m, n) == (0, 0):
        return 1
    # Nếu điểm có tọa độ m < 0 hoặc n < 0 hoặc (m, n) trong vũng nước
    if m < 0 or n < 0 or (m, n) in S:
        return 0
    # Các trường hợp còn lại
    return countSteps(m - 1, n, S) + countSteps(m, n - 1, S)

########### PHẦN 2: Giải bài toán bằng quy hoạch động ##############

# Hàm giống như trên nhưng có quy hoạch động, làm theo top-down
# Vẫn sử dụng đệ quy
# cache: bảng tra lời giải
def countTopDown(m: int, n: int, S: list, cache: dict = {}) -> int:
    # Kiểm tra xem lời giải đã có trong bảng chưa. Nếu có trả về luôn
    if (m, n) in cache:
        return cache[(m, n)]
    # Nếu chưa, làm như cũ
    if (m, n) == (0, 0):
        return 1
    if m < 0 or n < 0 or (m, n) in S:
        return 0
    result = countTopDown(m - 1, n, S, cache) + countTopDown(m, n - 1, S, cache)
    # Sau khi giải xong, lưu KQ vào bảng tra
    cache[(m, n)] = result

    return result

# Hàm quy hoạch động, làm theo bottom-up; không sử dụng đệ quy
# m: số hàng, n: số cột
def countBottomUp(m: int, n: int, S: list) -> int:
    # Tạo một mảng 2 chiều có kích thước (m+1) hàng x (n+1) cột
    answer = [[0 for _ in range(n+1)] for _ in range(m+1)]
    
    for i in range(m+1):     
        for j in range(n+1): 
            # Nếu (i, j) == (0, 0) hoặc trong vũng nước thì "trả về" 0
            if (i, j) == (0, 0) or (i, j) in S:
                answer[i][j] = 0
            # Nếu (i, j) đi dọc theo đường biên của bảng thì trả về 1 (các bạn có thể quan sát hình minh họa ở phần trên)
            # Phải làm như thế này để tránh trường hợp i < 0 hay j < 0
            # do khi ta sử dụng mảng 2 chiều thì chỉ số ko thể âm
            elif (i == 0 and j != 0) or (i != 0 and j == 0):
                answer[i][j] = 1
            # Các trg hợp còn lại
            else:
                answer[i][j] = answer[i - 1][j] + answer[i][j - 1]

    return answer[m][n]

# Hàm main 
if __name__ == "__main__":
    m = 16
    n = 16
    S = [(1, 2), (3, 4), (5, 6)]

    print("Giải theo top-down:")
    c = countTopDown(m, n, S)
    print("KQ:", c)

    print("\nGiải theo bottom-up:")
    c = countBottomUp(m, n, S)
    print("KQ:", c)

    print("\nGiải không có quy hoạch động (bruh chờ mãi cũng ko xong đâu):")
    c = countSteps(m, n, S)
    print("KQ:", c)
