// Nhập số nguyên dương n (n>0). Liệt kê tất cả các số nguyên tố nhỏ hơn n.
#include <stdio.h>
#include <math.h>
#include <unistd.h>

int KTSNT (int x);
void XuatSNT (int x);

int main(void){
    int n;
    do {
        printf ("Nhap n = ");
        scanf ("%d", &n);
    }while (n < 0);
    XuatSNT(n);
    
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
int KTSNT (int x){
    if(x <= 1)
        return 0;
    else if (x == 2)
        return 1;
    else {
        for ( int i = 2; i <= sqrt(x); i++){
            if (x%i == 0)
                return 0;
        }
    }
    return 1;
}
void XuatSNT (int x){
    printf ("So NT nho hon n la :");
    for ( int i = 2; i < x; i++){
        if (KTSNT(i) == 1)
            printf ("%d    ", i);
    }
}

