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

//  Đổi m phần tử cuối danh sách lên đầu
void doiIndex(NODE *&list,int num)
{
    for (int i=0;i<num;i++)
    {
        NODE *p=list;
        NODE *prv=NULL;
        for(;p->pNext!=NULL;p=p->pNext) {
            prv=p;
        }
        prv->pNext=NULL;
        p->pNext=list;
        list=p;
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

    int num;
    cout<<"Nhap so luong phan tu muon doi: ";
    cin>>num;

    doiIndex(list,num);

    cout<<"List moi: ";
    output(list);

    Delete(list);
    cout<<"Hoan thanh...\n";

    return 225;

}
