/*Trong kỳ thi tuyển, một thí sinh sẽ trúng truyển nếu có điểm tổng kết lớn
hơn hoặc bằng điểm chuẩn và không có môn nào điểm 0.
- Điểm tổng kết là tổng điểm của 3 môn thi và điểm ưu tiên.
- Điểm ưu tiên bao gồm điểm ưu tiên theo khu vực và điểm ưu tiên theo đối tượng.
Khu vực Đối tượng
A B C 1 2 3
2 1 0.5 2.5 1.5 1
Viết chương trình nhập: điểm chuẩn của hội đồng, điểm 3 môn thi của thí sinh, khu
vực (nhập X nếu không thuộc khu vực ưu tiên) và đối tượng dự thi (nhập 0 nếu không
thuộc đối tượng ưu tiên). Cho biết thí sinh đó đậu hay rớt và tổng số điểm đạt được.
Nhap diem chuan: 15.5 
Nhap diem 3 mon thi: 4.5 3.4 3.6 
Nhap khu vuc (A, B, C, X): B 
Nhap doi tuong (1, 2, 3, 0): 1 
Rot [15]                */

#include <stdio.h>

int main()
{
    float dc;
    float m1,m2,m3;
    char kv;
    int dt;
    printf("Nhap diem chuan :");
    scanf("%f",&dc);
    printf("Nhap diem 3 mon : ");
    scanf("%f %f %f",&m1,&m2,&m3);
    printf("Nhap khu vuc (A, B, C, X) : ");
    _flushall();
    scanf("%c",&kv);
    printf("Nhap doi tuong (1, 2, 3, 0 ) : ");
    scanf("%d",&dt);
    float DTK=m1+m2+m3;
    switch(kv)
    {
        case 'A':
            DTK=DTK+2;
            break;
        case 'B':
            DTK=DTK+1;
            break;
        case 'C':
            DTK=DTK+0.5;
            break;
        default :
            break;
    } 
    switch(dt)
    {
        case 1:
            DTK+=2.5;
            break;
        case 2:
            DTK+=1.5;
            break;
        case 3:
            DTK+=1;
            break;
        default :
            break;
    }   
    if (DTK>=dc && m1!=0 && m2!=0 && m3!=0)
        printf("Dau roi :>\n[ %.1f ]",DTK);
    else 
        printf("Rot roi :< \n[ %.1f ]",DTK);
    return 225;

}
