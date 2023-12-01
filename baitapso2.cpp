#include <stdio.h>
#include <math.h>
#include <unistd.h>
// Viết hàm cho phép nhập mảng 1 chiều các số nguyên có n phần trên.
void NhapMang(int a[], int n);
// Viết hàm cho phép xuất ra hết các phần tử trong mảng 1 chiều ở trên.
void XuatMang(int a[], int *n);
// Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số nguyên.
int TimMax(int a[], int n);
// Viết hàm tìm 1 vị trí mà giá trị tại vị trí đó chứa giá trị nhỏ nhất trong mảng 1 chiều các số nguyên.
int TimViTriMin(int a[], int n);
// Viết hàm kiểm tra trong mảng các số nguyên có tồn tại giá trị chẵn nhỏ hơn 2004 hay không.
int KiemTraSoChanNhoHon2004(int a[], int n);
// Viết hàm đếm số lượng số nguyên tố nhỏ hơn 100 trong mảng.
int KiemTraSNT(int m);
int SoLuongSoNToNhoHon100(int a[], int n);
// Viết hàm tính tổng các giá trị âm trong mảng 1 chiều các số nguyên.
int TinhTongAm (int a[], int n);
// Kiểm tra mảng có tăng dần hay không.
int KiemTraMang(int a[], int n);
// Câu 9. Viết hàm sắp xếp mảng 1 chiều các số nguyên tăng dần.
void Swat (int *a, int *b);
void SapXepTangDan(int a[], int n);
// Câu 10. Viết hàm tìm kiếm một giá trị x có trong mảng trên hay không . Nếu có thì xuất ra vị trí của phần tử trùng với x đó. Nếu không xuất ra thông báo phù hợp.
int KiemTraViTriXuatHien (int a[], int n, int x);
// Câu 11. Viết hàm liệt kê các vị trí mà giá trị tại đó là giá trị âm trong mảng 1 chiều các số nguyên.
void LietKeGiaTriAm (int a[], int n);
// Câu 12. Tìm số chẵn cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có giá trị chẵn thì trả về -1.
int TimSoChanCuoiCung (int a[], int n);
// Câu 13. Hãy tìm vị trí giá trị dương nhỏ nhất trong mảng 1 chiều các số nguyên. Nếu mảng không có giá trị dương thì trả về -1.
int TimGiaTriDuongNhoNhat(int a[], int n);
// Câu 14. Tìm số nguyên tố đầu tiên trong mảng 1 chiều các số nguyên. Nếu mảng không có số nguyên tố thì trả về – 1.
// Câu 15. Tìm phần tử có tần suất xuất hiện ít nhất trong mảng.
// Câu 16. Liệt kê các giá trị trong mảng có dạng 3^k. Nếu mảng không có giá trị đó thì trả về 0.
// Câu 17. Hãy liệt kê các số chẵn trong mảng 1 chiều các số nguyên thuộc đoạn [x, y] cho trước (x, y là các số nguyên)
// Câu 18. Tính tổng các phần tử trong mảng.
// Câu 19. Tính tổng các giá trị dương trong mảng 1 chiều các số nguyên.
// Câu 20. Tính trung bình cộng các số nguyên tố trong mảng 1 chiều các số nguyên.
// Câu 21. Tính trung bình cộng các số dương trong mảng 1 chiều các số nguyên.
// Câu 22. Tính trung bình cộng các giá trị lớn hơn giá trị x trong mảng 1 chiều các số nguyên.
// Câu 23. Tính trung bình nhân các giá trị dương có trong mảng 1 chiều các số nguyên.
// Câu 24. Đếm số lượng số chẵn trong mảng.
// Câu 25. Đếm số lượng số dương chia hết cho 7 trong mảng.
// Câu 26. Đếm số lần xuất hiện của giá trị x trong mảng.
// Câu 27. Đếm số lượng giá trị tận cùng bằng 5 trong mảng.
// Câu 28. Đếm số lượng các phần từ là số nguyên tố trong mảng.
// Câu 29. Liệt kê tần suất xuất hiện các giá trị trong mảng (mỗi giá trị liệt kê 1 lần).
// Câu 30. Thêm 1 phần tử x vào mảng tại vị trí k.
// Câu 31. Xóa phần tử tại vị trí k ban đầu trong mảng.
void XoaPhanTuTrongMang(int a[], int *n, int k);
// Câu 32. Xóa tất cả các số chính phương trong mảng.
int KiemTraSoCP(int a);
void XoaPTChinhPhuong (int a[], int *n);

int main(void){
    int a[100], n;
    printf ("Nhap so luong Phan tu : ");
    scanf ("%d", &n);
    printf ("Nhap Mang : ");
    NhapMang(a,n);
    printf ("Mang Vua Nhap la :  ");
    XuatMang(a,&n);
//    printf ("\nSo Lon Nhat Trong Mang la : %d", TimMax(a,n));
//    printf ("\nVi Tri Xuat Hien Gia Tri Nho Nhat la : %d ",TimViTriMin(a,n) );
//    if ( KiemTraSoChanNhoHon2004(a,n))
//        printf ("\nTon Tai Cac Gia Tri Chan Nho Hon 2004 !");
//    else
//        printf ("\nKhong Ton Tai Cac Gia Tri Chan Nho Hon 2004 !");
//    printf ("\nSo Luong So Nguyen To Trong Mang la : %d", SoLuongSoNToNhoHon100(a,n));
//    printf ("\nTong Cac Gia Tri Am Trong Mang la : %d", TinhTongAm(a,n));
//    if (KiemTraMang(a,n))
//        printf ("\nMang la Mang Tang Dan !");
//    else
//        printf ("\nMang la Mang Khong Tang !");
//    SapXepTangDan(a,n);
//    printf ("\nMang Sau Khi Sap Xep la : ");
//    XuatMang(a,n);
//    int x;
//    printf ("\nNhap x = ");
//    scanf ("%d", &x);
//    if ( KiemTraViTriXuatHien(a, n, x) == -1 )
//        printf ("Trong Mang Khong Co Phan Tu = x !!");
//    else
//        printf ("\nVi Tri Cua Phan Tu = x la : %d ", KiemTraViTriXuatHien(a,n,x));
// 31 32
//    int k;
//    printf ("Xoa Phan Tu Thu k = ");
//    scanf ("%d", &k);
//    XoaPhanTuTrongMang(a,&n,k);
//    XuatMang(a,&n);
    XoaPTChinhPhuong(a,&n);
    printf ("\nMang Sau Khi Xoa So Chinh Phuong : ");
    XuatMang(a, &n);
    
    

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
// Viết hàm cho phép nhập mảng 1 chiều các số nguyên có n phần trên.
void NhapMang(int a[], int n){
    for (int i = 0; i < n; i++){
        scanf ("%d", &a[i]);
    }
}
// Viết hàm cho phép xuất ra hết các phần tử trong mảng 1 chiều ở trên.
void XuatMang(int a[], int *n){
    for (int i = 0; i < *n; i++){
        printf ("%d  ", a[i]);
    }
}
// Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số nguyên.
int TimMax(int a[], int n){
    int Max = a[0];
    for ( int i = 0; i < n; i++){
        if (a[i] > Max)
            Max = a[i];
    }
    return Max;
}
// Viết hàm tìm 1 vị trí mà giá trị tại vị trí đó chứa giá trị nhỏ nhất trong mảng 1 chiều các số nguyên.
int TimViTriMin(int a[], int n){
    int vitri = 0;
    int Min = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] < Min){
            Min = a[i];
            vitri = i;
        }
    }
    return vitri;
}
// Viết hàm kiểm tra trong mảng các số nguyên có tồn tại giá trị chẵn nhỏ hơn 2004 hay không.
int KiemTraSoChanNhoHon2004(int a[], int n){
    int dem = 0;
    for (int i = 0; i< n; i++){
        if ( a[i] % 2 == 0){
            if (a[i] < 2004)
                dem++;
        }
    }
    return dem;
}
// Viết hàm đếm số lượng số nguyên tố nhỏ hơn 100 trong mảng.
int KiemTraSNT(int m){
    if (m <= 1)
        return 0;
    else if (m == 2)
        return 1;
    else {
        for (int i = 2; i <= sqrt(m); i++){
            if (m % i == 0)
                return 0;
        }
    }
    return 1;
}
int SoLuongSoNToNhoHon100(int a[], int n){
    int dem = 0 ;
    for (int i = 0; i < n; i++){
        if ( KiemTraSNT(a[i]) == 1 )
            dem++;
    }
    return dem;
}
// Viết hàm tính tổng các giá trị âm trong mảng 1 chiều các số nguyên.
int TinhTongAm (int a[], int n){
    int TongAm = 0;
    for (int i = 0; i < n; i++){
        if (a[i] < 0)
            TongAm += a[i];
    }
    return TongAm;
}
// Kiểm tra mảng có tăng dần hay không.
int KiemTraMang(int a[], int n){
    for (int i = 0; i < n-1 ; i++){
        for ( int j = i+1; j < n; j++){
            if( a[i] > a[j] )
                return 0;
        }
    }
    return 1;
}
// Câu 9. Viết hàm sắp xếp mảng 1 chiều các số nguyên tăng dần.
void Swat (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void SapXepTangDan(int a[], int n){
    for (int i = 0; i < n-1 ; i++){
        for ( int j = i+1; j < n; j++){
            if(a[i] > a[j])
                Swat(&a[i],&a[j]);
        }
    }
}
// Câu 10. Viết hàm tìm kiếm một giá trị x có trong mảng trên hay không . Nếu có thì xuất ra vị trí của phần tử trùng với x đó. Nếu không xuất ra thông báo phù hợp.
int KiemTraViTriXuatHien (int a[], int n, int x){
    int vitri = -1;
    for ( int i = 0; i < n; i++){
        if (x == a[i]){
            vitri = i;
            break;
        }
    }
    return vitri;
}
// Câu 31. Xóa phần tử tại vị trí k ban đầu trong mảng.
void XoaPhanTuTrongMang(int a[], int *n, int k){
     
            for ( int i = k; i < *n; i++){
                a[i] = a[i+1];
        }
    *n = *n - 1 ;
}
// Câu 32. Xóa tất cả các số chính phương trong mảng.
int KiemTraSoCP(int a){
    if (a < 0)
        return 0;
    else if ( (int)sqrt(a) == (float)sqrt(a))
        return 1;
    return 0;
}
void XoaPTChinhPhuong (int a[], int *n){
    for ( int i = 0; i < *n; i++){
        if (KiemTraSoCP(a[i])){
            XoaPhanTuTrongMang(a,n,i);
        }
    }
}
