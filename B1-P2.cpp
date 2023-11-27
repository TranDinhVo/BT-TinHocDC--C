
// Viết chương trình tính diện tích và chu vi của hình chữ nhật với chiều dài và chiều rộng được nhập từ bàn phím.
#include <stdio.h>
#include <math.h>
#include <unistd.h>

int DienTich ( int x, int y);
int Chuvi ( int x, int y);

int main(void){
    int d, r;
    scanf ("%d%d", &d, &r);
    printf ("Dien Tich cua HCN: S = %d ", DienTich(d,r));
    printf ("\nChu Vi cua HCN: CV = %d ", Chuvi(d,r));
    
    
    printf ("\n\n");
    char hostname[256];  // Đặt kích thước cho tên máy tính
        // Lấy tên máy tính và kiểm tra
        if (gethostname(hostname, sizeof(hostname)) == 0) {
            printf("Tên máy tính: %s\n", hostname);
        } else {
            perror("Lỗi khi lấy tên máy tính");
        }

    return 0;
}
int DienTich ( int x, int y){
    return x*y;
}
int Chuvi ( int x, int y){
    return 2*(x+y);
}

