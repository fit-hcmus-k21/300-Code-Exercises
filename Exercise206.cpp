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

//  Xóa các node có giá trị chỉ định nhập từ bàn phím
void XoaGiaTri(NODE *&list, int value)
{
    NODE *node=list;
    NODE *prv=NULL;
    for ( ;node->pNext!=NULL;)
    {
        if (list->data==value)
        {
            list=list->pNext;
            delete node;
            node=list;
        }
        else
        {
            prv=node;
            node=node->pNext;
            if (node->data==value)
            {
                prv->pNext=node->pNext;
                delete node;
                node=prv;
            }

        }
    }

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
    list=NULL;
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


    cout<<"Nhap tri can xoa: ";
    cin>>value;

    XoaGiaTri(list,value);

    cout<<"List moi: ";
    output(list);

    Delete(list);
    cout<<"Hoan thanh...\n";

    return 225;

}