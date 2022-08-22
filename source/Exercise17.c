<<<<<<< HEAD
/*          Viết chương trình tạo lịch trực cho 5 bạn: A, B, C, D, E. Nhập năm và thứ (0
- 6, 0 là Chúa Nhật, 1 là thứ Hai, …) cho ngày đầu năm. Sau đó nhập một tháng
trong năm và in lịch trực của tháng đó. Lưu ý 5 bạn trực lần lượt theo thứ tự trên,
ngày Chúa nhật không ai trực và bạn A sẽ trực ngày đầu tiên của năm.
Nhap nam: 2006 
Nhap thu cho ngay dau tien cua nam: 0 
Nhap thang: 5 
    Sun    Mon    Tue     Wen   Thu     Fri     Sat
          1 [C]   2 [D]  3[E]  4[A]    5 [B]    6 [C]
    7 [ ] 8 [D]   9[E]  10[A] 11 [B]   12 [C]   13 [D]
    14[ ] 15 [E]  16[A] 17[B] 18 [C]   19 [D]   20 [E]
    21[ ] 22 [A]  23[B] 24[C] 25 [D]   26 [E]   27 [A]
    28[ ] 29 [B]  30[C] 31[D]         */

#include <stdio.h>
int main() {
 unsigned y, m, dow, d, top, y1, m1;
 printf( "Nhap nam: " );
 scanf( "%u", &y );
 /* Công thức Zeller, tính thứ cho ngày đầu năm (ngày 1/1) */
 m = 1;
 y1 = y - ( 14 - m ) / 12;
 m1 = m + 12 * ( ( 14 - m ) / 12 ) - 2;
 dow = ( 1 + y1 + y1 / 4 - y1 / 100 + y1 / 400 + ( 31 * m1 ) / 12 ) % 7;
 /* lặp cho 12 tháng */
 for ( m = 1; m <= 12; ++m ) {
 printf( "Thang %u\n", m );
 switch ( m ) {
 case 4: case 6: case 9: case 11: top = 30; break;
 case 2: top = 28 + ( ( y % 4 == 0 && y % 100 ) || y % 400 == 0 ); break;
 default: top = 31;
 }

 printf( " S M T W T F S\n" );
 for ( d = 0; d < dow; ++d )
 printf( " " );
 for ( d = 1; d <= top; ++d ) {
 printf( "%3u", d );
 if ( ( dow + d ) % 7 == 0 ) putchar( '\n' );
 }
 dow = ( dow + top ) % 7; /* tính lại thứ cho ngày đầu mỗi tháng */
 if ( dow ) putchar( '\n' );
 }
 return 0;
=======
/*          Viết chương trình tạo lịch trực cho 5 bạn: A, B, C, D, E. Nhập năm và thứ (0
- 6, 0 là Chúa Nhật, 1 là thứ Hai, …) cho ngày đầu năm. Sau đó nhập một tháng
trong năm và in lịch trực của tháng đó. Lưu ý 5 bạn trực lần lượt theo thứ tự trên,
ngày Chúa nhật không ai trực và bạn A sẽ trực ngày đầu tiên của năm.
Nhap nam: 2006 
Nhap thu cho ngay dau tien cua nam: 0 
Nhap thang: 5 
    Sun    Mon    Tue     Wen   Thu     Fri     Sat
          1 [C]   2 [D]  3[E]  4[A]    5 [B]    6 [C]
    7 [ ] 8 [D]   9[E]  10[A] 11 [B]   12 [C]   13 [D]
    14[ ] 15 [E]  16[A] 17[B] 18 [C]   19 [D]   20 [E]
    21[ ] 22 [A]  23[B] 24[C] 25 [D]   26 [E]   27 [A]
    28[ ] 29 [B]  30[C] 31[D]         */

#include <stdio.h>
int main() {
 unsigned y, m, dow, d, top, y1, m1;
 printf( "Nhap nam: " );
 scanf( "%u", &y );
 /* Công thức Zeller, tính thứ cho ngày đầu năm (ngày 1/1) */
 m = 1;
 y1 = y - ( 14 - m ) / 12;
 m1 = m + 12 * ( ( 14 - m ) / 12 ) - 2;
 dow = ( 1 + y1 + y1 / 4 - y1 / 100 + y1 / 400 + ( 31 * m1 ) / 12 ) % 7;
 /* lặp cho 12 tháng */
 for ( m = 1; m <= 12; ++m ) {
 printf( "Thang %u\n", m );
 switch ( m ) {
 case 4: case 6: case 9: case 11: top = 30; break;
 case 2: top = 28 + ( ( y % 4 == 0 && y % 100 ) || y % 400 == 0 ); break;
 default: top = 31;
 }

 printf( " S M T W T F S\n" );
 for ( d = 0; d < dow; ++d )
 printf( " " );
 for ( d = 1; d <= top; ++d ) {
 printf( "%3u", d );
 if ( ( dow + d ) % 7 == 0 ) putchar( '\n' );
 }
 dow = ( dow + top ) % 7; /* tính lại thứ cho ngày đầu mỗi tháng */
 if ( dow ) putchar( '\n' );
 }
 return 0;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}