**Bài tập thực hành kiểm thử

**Họ tên: Phan Đăng Trung Hiếu**

#### Nguồn repo:

https://github.com/TheAlgorithms/Python/blob/master/maths/modular_exponential.py

#### Code:

![](Capture3.PNG)

### Bước 1: Lập đồ thị

![](Capture4.PNG)

### Bước 2: Lập đường đi

1. 2->3
2. 2->4->(7->8->9->10->11)->12
3. 2->4->(7->8->10->11)->12
4. 2->4->(7->8->9->10->11->7->8->10->11)->12

### Bước 3: Lập phương trình

**1. Đường đi 1:**</br>
Để từ lệnh 2 đến lệnh 3 thì lệnh 2 phải trả về True => power < 0
**2. Đường đi 2:**</br>
Để từ lệnh 2 đến lệnh 4 thì lệnh 2 phải trả về False => power  > 0 (1)</br>
Lệnh 4: base %= mod</br>
Lệnh 5: result = 1</br>
Để từ lệnh 8 đến lệnh 8 thì lệnh 7 phải trả về True => power > 0</br>(2)
Để từ lệnh 8 đến lệnh 9 thì lệnh 8 phải trả về True => power là số lẻ</br>(3)
Lệnh 10: power >> 1</br>
Lệnh 11: base = (base * base) % mod</br>
Từ (1),(2),(3) => power là số dương lẻ
**3. Đường đi 3:**</br>
Để từ lệnh 2 đến lệnh 4 thì lệnh 2 phải trả về False => power  > 0 (1)</br>
Lệnh 4: base %= mod</br>
Lệnh 5: result = 1</br>
Để từ lệnh 8 đến lệnh 8 thì lệnh 7 phải trả về True => power > 0</br>
Để từ lệnh 8 đến lệnh 10 thì lệnh 8 phải trả về False => power là số chẵn</br>
Lệnh 10: power >> 1</br>
Lệnh 11: base = (base * base) % mod</br>
Từ (1),(2),(3) => power là số dương chẵn

#### Bước 4: Tạo các giá trị cho bộ kiểm thử:
**1. Đường đi 1:**
Giá trị đầu vào: power = -1, base = 2, mod = 11</br>
Giá trị đầu ra mong muốn: -1</br>
**2.Đường đi 2:**
Giá trị đầu vào: power = 9, base = 3, mod = 23</br>
Giá trị đầu ra mong muốn: 15</br>
**3.Đường đi 3:**
Giá trị đầu vào: power = 10, base = 5, mod = 17</br>
Giá trị đầu ra mong muốn: 9 </br>








