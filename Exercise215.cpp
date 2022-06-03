// CHo một danh sách liên kết đơn chứa các giá trị nguyên.
// Thay đổi các liên kết của danh sách sao cho: 
// Các node chứa trị chẵn nằm đầu danh sách, các node chứa trị lẻ nằm nằm cuối danh sách

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

// Hàm chèn cuối danh sách
void insertLast(Node *&list, Node *&p)
{
    Node *q = list;
    while (q->pNext != NULL)
    {
        q = q->pNext;
    }
    q->pNext = p;
    p->pNext = NULL;
}

// Hàm xử lí
void xuLi(Node *&list)
{
    int i = 1;
    Node *p = list;
    while (p->pNext != NULL)
    {
        p = p->pNext;
    }
    Node *tail = p;
    p = list;
    while (p != tail->pNext)
    {
        if (i % 2 == 0)
        {
            Node *q = list;
            while (q->pNext != p)
            {
                q = q->pNext;
            }
            q->pNext = p->pNext;
            insertLast(list,p);
            p = q;
        }
        p = p->pNext;
        i++;
    }
}

// Hàm xuất danh sách liên kết
void xuat(Node *list)
{
    Node *p = list;
    while (p != NULL)
    {
        cout << "[" << p->data << "]" << " ";
        p = p->pNext;
    }
    cout << endl;
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
    cout << "List goc: ";
    xuat(list);

    xuLi(list);
    cout << "List moi: ";
    xuat(list);
    delList(list);
    cout << "\nhoan thanh ...\n";
    return 225;
}