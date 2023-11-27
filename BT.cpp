////Nhập số nguyên dương n (n>0). Liệt kê n số chính phương đầu tiên
//#include <stdio.h>
//#include <math.h>
//#include <unistd.h>
//
//void SoCP ( int n );
//
//int main(void){
//    int n;
//    do {
//        printf ("Nhap n = ");
//        scanf ("%d", &n);
//    }while (n < 0);
//    
//    SoCP(n);
//    
//    
//    printf ("\n\n");
//    char hostname[256];  // Đặt kích thước cho tên máy tính
//        // Lấy tên máy tính và kiểm tra
//        if (gethostname(hostname, sizeof(hostname)) == 0) {
//            printf("Tên máy tính: %s\n", hostname);
//        } else {
//            perror("Lỗi khi lấy tên máy tính");
//        }
//
//    return 0;
//}
//void SoCP ( int n ){
//    printf ("%d So Chinh Phuong Dau Tien la : ", n);
//    for (int i = 0; i < n; i++){
//        printf ("%d  ", i*i);
//    }
//}





//Cau 6 : Viết chương trình tính tiền lương ngày cho công nhân, cho biết trước giờ vào ca, giờ ra ca của mỗi người. Giả sử rằng:
//- Tiền trả cho mỗi giờ trước 12 giờ là 6000đ và sau 12 giờ là 7500đ.
//- Giờ vào ca sớm nhất là 6 giờ sáng và giờ ra ca trễ nhất là 18 giờ (Giả sử giờ nhập vào
//nguyên)

//#include <stdio.h>
//#include <math.h>
//
//int TienLuong (int x, int y);
//
//int main(void){
//    int GVC, GRC;
//    do {
//        printf ("Nhap Gio Vao Ca = ");
//        scanf ("%d", &GVC);
//        printf ("Nhap Gio Ra Ca = ");
//        scanf ("%d", &GRC);
//    }while (GVC < 6 || GVC >= 18 || GRC <= 6 || GRC > 18 || GRC < GVC);
//    
//    printf ("So Tien luong lam tong 1 ngay cua cong nhan la : %d ", TienLuong(GVC,GRC));
//    
//    
//    printf ("\n\n");
//    return 0;
//}
//int TienLuong (int x, int y){
//    if (y <= 12)
//        return 6000*(y-x);
//    else if ( x <= 12 )
//        return 6000*(12-x) + 7500*(y-12);
//    else
//        return 7500*(y-x);
//}




// cau 9 : Viết chương trình nhập số nguyên dương n gồm k chữ số (0 < k ≤ 5) , đếm xem n có bao nhiêu chữ số chẵn và bao nhiêu chữ số lẻ.
//#include <stdio.h>
//#include <math.h>
//int KTSC( int x , int y);
//int KTSL ( int x, int y);
//int main(void){
//    int n, k;
//    do {
//        printf ("Nhap chu so co so phan tu la : ");
//        scanf ("%d", &k);
//    }while ( k < 0 || k > 5 );
//    do {
//        printf ("Nhap so nguyen duong n = ");
//        scanf ("%d", &n);
//    }while (n < 0 || n > pow(10,k));
//
//    printf ("So chu so chan cua %d la : %d", n,  KTSC(n,k));
//    printf ("\nSo chu so le cua %d la : %d", n,  KTSL(n,k));
//    
//    printf ("\n\n");
//    return 0;
//
//}
//int KTSC( int x , int y){
//    int demSC = 0;
//    while (x > 0){
//        if ( x%2 == 0)
//            demSC++;
//        x = x/10;
//        
//    }
//    return demSC;
//}
//int KTSL ( int x, int y){
//    int demSL = 0;
//    while ( x > 0){
//        if ( x%2 != 0)
//            demSL++;
//        x = x/10;
//    }
//    return demSL;
//}

// cau 10: Viết chương trình nhập vào từ bàn phím số nguyên dương n, tính và in ra màn hình tổng S = 2 + 4 + 6 + … + 2*n.
//#include <stdio.h>
//#include <math.h>
//int Tinh (int x);
//int main(void){
//    int n;
//    do {
//        printf ("Nhap so nguyen duong n = ");
//        scanf ("%d", &n);
//    }while (n <= 0);
//    printf ("Kq : S = %d ", Tinh(n));
//
//    printf ("\n\n");
//    return 0;
//}
//int Tinh (int x){
//    int S = 0;
//    for (int i = 1; i<= x; i++){
//        S = S + 2*i;
//    }
//    return S;
//}

// Cau 11: Viết chương trình nhập vào từ bàn phím số nguyên dương n, tính và in ra màn hình giai thừa của n.
//#include <stdio.h>
//int TinhGT(int n);
//int main(void){
//    int n;
//    do {
//        printf ("Nhap so nguyen duong n = ");
//        scanf ("%d", &n);
//    }while (n <= 0);
//    printf ("%d! = %d", n, TinhGT(n));
//
//    printf ("\n\n");
//    return 0;
//}
//
//int TinhGT (int n){
//    int S = 1;
//    for (int i = 1; i <= n; i++){
//        S = S*i;
//    }
//    return S;
//}

// Phan 3:

// Câu 3. Nhập vào một số nguyên dương n. Tính giai thừa của n
//#include <stdio.h>
//int TinhGT (int x);
//int main(void){
//    int n;
//    do {
//        printf ("Nhap so nguyen duong n = ");
//        scanf ("%d", &n);
//    }while (n <= 0);
//    printf ("%d! = %d ",n ,TinhGT(n));
//
//    printf ("\n\n");
//    return 0;
//}
//int TinhGT (int x){
//    if ( x == 1)
//        return 1;
//    return x*TinhGT(x-1);
//}


// Câu 4. tìm 10 số Fibonacci đầu tiên sử dụng phương pháp đệ quy.
//#include <stdio.h>
//int Fibonacci(int x);
//int main(void){
//    int n = 0;
//    int dem = 0;
//    while ( dem < 9){
//        printf ("%d ", Fibonacci(n) );
//        dem++;
//        n++;
//    }
//    printf ("%d ", Fibonacci(n) );
//    
//    
//    printf ("\n\n");
//    return 0;
//}
//int Fibonacci(int x){
//    if ( x == 0 || x == 1)
//        return x;
//    else
//        return Fibonacci(x-1) + Fibonacci(x-2);
//   
//}




