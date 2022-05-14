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

//  Xóa lần lượt tất cả các node từ cuối danh sách ngược lên đầu
void XoaDanhSach(NODE *&list)
{
    if (list->pNext==NULL)
    {
        cout<<"Xoa node ["<<list->data<<"]\n";
        delete list;
        list=NULL;
        return;
    }
    NODE *node=list;
    NODE *prv=NULL;
    for (; node->pNext!=NULL;node=node->pNext){
        prv=node;
    }
    cout<<"Xoa node ["<<node->data<<"]\n";
    prv->pNext=NULL;
    delete node;
    XoaDanhSach(list);
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


    XoaDanhSach(list);
    if (list==NULL)
    {
        cout<<"Xoa het roi -_-\n";
    }

    cout<<"Hoan thanh...\n";

    return 225;

}