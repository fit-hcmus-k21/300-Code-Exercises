#include <iostream>
using namespace std;

struct NODE {
    int data;
    NODE *pNext;
};

//  Chèn vào cuối danh sách
void chenCuoiList(NODE *&list, int data)
{
    NODE *p=new NODE;
    p->data=data;
    p->pNext=NULL;
    if (list==NULL)
    {
        list=p;
        return;
    }
    NODE *l;
    for (l=list;l->pNext!=NULL;l=l->pNext) {}
    l->pNext=p;
}

//  Xóa một node có giá trị value
void XoaNode(NODE *&list, int value)
{
    NODE *p=list;
    NODE *q=NULL;
    for (;p!=NULL && p->data!=value;p=p->pNext) {q=p;};
    q->pNext=p->pNext;
    delete p;
}

//  Xuất danh sách
void output(NODE *list)
{
    NODE *node=list;
    for (;node!=NULL;node=node->pNext)
    {
        cout<<node->data<<" ";
    }
    putchar('\n');
}

//  Giải phóng danh sách liên kết
void Delete(NODE *&list)
{
    NODE *node=list;
    NODE *q=NULL;
    while (node!=NULL)
    {
        q=node;
        node=node->pNext;
        delete q;
    }
}

int main()
{
    NODE *list=NULL;
    int value;
    cout<<"Nhap 0 de dung: ";
    do{
        cin>>value;
        if (value)
        {
            chenCuoiList(list,value);
        }
    } while (value);

    cout<<"List goc: ";
    output(list);

    cout<<"Nhap gia tri can xoa: ";
    cin>>value;
    XoaNode(list,value);
    
    cout<<"List moi: ";

    output(list);

    Delete(list);

    cout<<"Hoan thanh...\n";

    return 225;

}