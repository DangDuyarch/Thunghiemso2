I. Bài tập cơ bản  
•	Các Test case:     
1.	Thêm sinh viên, các sinh viên được thêm xắp sếp theo thứ tự của MSSV    
2.	Tìm và in ra các sinh viên có cùng ngày sinh.   
3.	Nếu trong danh sách không có ai trùng ngày sinh   
4.	Xóa các sinh viên có trùng ngày sinh ra khỏi ListSV  

II. Bài tập nâng cao  
1. Thiết kế giải thuật    
•	Sử dụng cấu trúc liên kết vòng: mỗi nút gồm STT người chơi và link (trỏ đến người kế tiếp)    
•	B1: Tạo ds liên kết đơn, truyền stt từ 1 đến n vào, sau đó duyệt tìm node cuối cùng, nối với node đầu để tạo thành liên kết vòng   
•	B2: Khai báo 2 con trỏ liên tiếp để thực hiện dò tìm, xóa   
•	B3: Lặp ds đến khi chỉ còn 1 người. Trong đó, 2 con trỏ q và p được dịch chuyển lên trước liên tục, tìm vị trí thứ M, thực hiện xóa nút p (Cho q->link = p->link), sau đó lặp lại với p mới.  
2. Phân tích độ phức tạp và Thời gian chạy   
A.	Độ phức tạp thuật toán: ta xét trường hợp M = 1  
- Mỗi lượt loại bỏ, cần thực hiện M bước nhảy con trỏ, tổng cộng có N-1 người bị loại.  
- Tổng số thao tác: M (N - 1) = (N-1)  
- Độ phức tạp thời gian: O (n-1)     
B.	Tính toán thời gian chạy với N > 100.000     
- Sử dụng thư viện <chrono> và các hàm để lấy một mốc thời gian ngay trước khi gọi hàm xử lý và một mốc ngay sau khi chạy xong. Hiệu của hai mốc này chính là thời gian thực thi.   
- Với N > 100000, thời gian thực hiện khoảng ~ 0.0023s – 0.076s    
C. Test case:    
-	N = 1, M = 0,    
-	N = 5, M = 0,  
-	N = 5, M = 1,  
-	N = 18, M = 3,  
-	N = 182461, M = 1,  
-	N = 999999, M = 1,    


