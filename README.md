# Cpp
C++ programming language

### 1. Pointer trong lập trình C++

###### Tổ chức bộ nhớ trong máy tính
+ Gồm 4 thành phần chính

  1. Code Segment: Nơi lưu trữ mã máy dạng nhị phân.
  2. Data Segment: Nơi chứa các biến tĩnh (static), biến toàn cục (global).
  3. Heap: Vùng nhớ không do CPU quản lý, người lập trình tự quản lý (nơi chứa biến con trỏ).
  4. Stack: Vùng nhớ do CPU quản lý, nơi chứa các biến cục bộ.

> Khái niệm: Pointer cũng là 1 biến bình thường, nhưng có thể trỏ đi lung tung trong bộ nhớ (các ô nhớ, vùng nhớ HEAP).

+ Đối với môi trường windows 32bits (tùy thuộc vào Compiler) thì con trỏ tốn 4 bytes bộ nhớ.
+ Đối với môi trường windows 64bits (tùy thuộc vào Compiler) thì con trỏ tốn 8 bytes bộ nhớ.

Ưu điểm:

  * Giúp sử dụng và quản lý bộ nhớ linh hoạt hơn.
  * Áp dụng cho nhiều trường hợp xử lý tính toán, sử dụng mảng động.

Cú pháp: 

```<Kiểu dữ liệu> *<tên con trỏ>```

Ví dụ: 

  ```cpp
  int* a;
  int * a;
  int  *a;
  ```

> Cả 3 cách viết trên đều mang ý nghĩa giống nhau là khai báo biến a thuộc kiểu con trỏ.

> Con trỏ thực chất chỉ là địa chỉ, nên nếu muốn gán địa chỉ cho nó thì giá trị được gán cũng phải là địa chỉ.

VD: 
```cpp
int a = 10; // Khai báo biến a kiểu int với giá trị là 10
int *b; // Khai báo con trỏ b
b = &a; // Gán b trỏ vào địa chỉ của a
```

> Kiểu dữ liệu trong khai báo con trỏ không phải là kiểu dữ liệu của nó mà là kiểu dữ liệu của vùng nhớ mà nó đang trỏ đến.

* Con trỏ vô kiểu

```cpp
void* a; // Có thể nhận mọi kiểu dữ liệu nhưng phải ép kiểu.
```

##### Phân biệt biến thường và biến kiểu con trỏ.

```cpp 
int a = 5; // Biến thường.
int *b; // Biến kiểu con trỏ.
b = &a; // Trỏ b tới địa chỉ ô nhớ của a.
```
1. Biến thường: Gồm 2 thành phần
  * Địa chỉ của biến: `&a`
  * Giá trị của biến: `a`
2. Biến kiểu con trỏ: Gồm 3 thành phần
  * Địa chỉ của biến: `&b`
  * Giá trị của biến: `*b`
  * Miền giá trị của con trỏ (địa chỉ của biến mà nó đang trỏ tới): `b`

> Lưu ý: Vì `a` và `*b` đang nằm cùng tại 1 địa chỉ, nếu thay đổi `a` hoặc `*b` thì giá trị còn lại cũng sẽ thay đổi.

##### Dịch chuyển con trỏ trong bộ nhớ.

VD:
```cpp
int *b;
*b++ // Con trỏ b + 1, tăng lên 4 bytes (nếu là compiler 32bits).
```
