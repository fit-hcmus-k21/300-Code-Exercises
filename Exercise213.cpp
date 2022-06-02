// Tìm phần tử chứa trị xuất hiện nhiều lần nhất trong một danh sách liên kết đơn khác rỗng chứa các trị nguyên 
// giả sử tần suất của các trị trong danh sách liên kết đều khác nhau

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *pNext;
};

struct TanSuat{
    int val;
    int count;
};

// Hàm thêm node vào danh sách liên kết
void addNode(Node *&list, int val)
{
    Node *p = new Node;
        p->data = val;
        p->pNext = NULL;

    if (list==NULL)
    {
        list = p;
    }
    else
    {
        Node *q = list;
        while (q->pNext != NULL)
        {
            q = q->pNext;
        }
        q->pNext = p;
    }
}

// Hàm khởi tạo danh sách liên kết
void KhoiTao(Node *&list)
{
    cout << "nhap 0 de dung: ";
    int val;
    do {
        cin >> val;
        if (val != 0)
        {
            addNode(list,val);
        }
    } while (val != 0);
}

// Hàm xử lí
void xuLi(Node *list)
{
    TanSuat dem[50];
    int sl = 0;
    Node *p = list;
    while (p != NULL)
    {
        int i;
        for ( i = 0; i<sl; i++)
        {
            if (p->data == dem[i].val)
            {
                dem[i].count++;
                break;
            }
        }
        if (i == sl)
        {
            dem[sl].val = p->data;
            dem[sl].count = 1;
            sl++;
        }
        p = p->pNext;
    }

    int max = dem[0].count;
    int maxVal = dem[0].val;
    for (int i = 1; i<sl; i++)
    {
        if (dem[i].count > max)
        {
            max = dem[i].count;
            maxVal = dem[i].val;
        }
    }

    cout << "\nPhan tu xuat hien nhieu nhat: "<< "["<<maxVal<<"]"<<"("<<max<<")"<<endl;
}

// Hàm xuất danh sách liên kết
void xuat(Node *list)
{
    cout << "List goc: ";
    Node *p = list;
    while (p != NULL)
    {
        cout << "[" << p->data << "]" << " ";
        p = p->pNext;
    }
}

// Hàm hủy danh sách liên kết
void delList(Node *&list)
{
    Node *p = list;
    while (p != NULL)
    {
        list = list->pNext;
        delete p;
        p = list;
    }
    list = NULL;
}

int main()
{
    Node *list = NULL;
    KhoiTao(list);
    xuat(list);
    xuLi(list);
    delList(list);
    cout << "\nhoan thanh ...\n";
    return 225;
}