<div align="center">
    <div>
        <h1> LaTeX Project: Tài liệu ôn thi cuối kỳ môn Kỹ thuật lập trình </h1>
        Đơn vị sở hữu: Mảng Điện tử Kỹ thuật - CLB Học thuật NES, ĐH Khoa học Tự nhiên, ĐHQG-HCM.
    </div>
<img src="image/neslogo.jpg" width=200>
</div>

# Giới thiệu
- Repository này chứa mã nguồn tài liệu LaTeX cũng như các đoạn chương trình liên quan đã được sử dụng trong buổi ôn thi cuối kỳ môn Kỹ thuật lập trình (của khoa CNTT) được tổ chức bởi Mảng Điện tử kỹ thuật, CLB Học thuật NES ("CLB"), Trường ĐH Khoa học Tự nhiên, ĐHQG-HCM vào cuối học kỳ 2, năm học 2020 - 2021.
- Nội dung tài liệu này và các thành phần liên quan, nếu không được trích dẫn, đều là sản phẩm trí tuệ của CLB, ngoại trừ các đề bài tập (cái này thì copy trên mạng về chứ sao tụi mình tự ra được :v) và những thành phần khác ngầm định đã có chủ sở hữu như thương hiệu, logo, ...
- Các cá nhân không phải là thành viên của CLB có quyền sử dụng dạng nhị phân của tài liệu này cho mục đích cá nhân. Không tái phân phối toàn bộ dạng nhị phân hoặc mã nguồn của tài liệu này dưới bất kì hình thức nào. Không được sử dụng tài liệu này cho mục đích kinh doanh thu lợi nhuận, ngoại trừ thành viên của CLB.

- Cấu trúc:
    - `answer_sources`: mã nguồn các chương trình đã được sử dụng trong tài liệu này.
    - `image`: các hình ảnh được sử dụng trong tài liệu.
    - `logo`: các logo được sử dụng trong tài liệu.
    - `main.md`: bản nháp của tài liệu được soạn bằng Markdown.
    - `*.tex`: mã nguồn bản chính thức tài liệu của tài liệu được viết bằng TeX.
    - Các tập tin bổ sung khác.

# Compile thủ công
## Cách 1: TexLive
- Cài đặt TexLive, `python-pygments` và GNU make một cách phù hợp tùy thuộc vào hệ điều hành. <br>
- Gọi lệnh `make` trong thư mục gốc của repository.

## Cách 2: Overleaf
- Import toàn bộ project này vào Overleaf.
- Trong file `main.tex`, thay thế dòng `\usepackage[outputdir=build,cache=false]{minted}` thành `\usepackage{minted}` (nằm ở khu vực dòng số 20-30).
- Compile như thông thường.

# Ghi chú về các lỗi thường gặp khi sử dụng tài liệu này (cho các khoá về sau muốn tái sử dụng)
- Compile tài liệu này trên Overleaf gần như sẽ không gặp lỗi.
- Nếu compile trên máy cá nhân, nhớ sử dụng đúng các lệnh như đã mô tả.
- Nếu compile trên Overleaf, tìm sửa dòng `\usepackage[outputdir=build,cache=false]{minted}` thành `\usepackage{minted}` trong preamble của file `main.tex`.
- Luôn luôn đặt output directory là `build` khi compile trên máy cá nhân. Nếu compile trên máy mà muốn thay đổi tên của output directory, sửa tham số `outputdir` trong dòng vừa được nhắc đến ở trên.
- Nếu gặp các lỗi không rõ nguyên nhân, hãy thử xoá các đoạn code liên quan đến watermark trong file `main.tex`.
