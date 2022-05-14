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

//  Hàm in các phần tử của danh sách theo thứ tự ngược lại
void opstPrint(NODE *list)
{
    if (list->pNext==NULL)
    {
        cout<<list->data<<" ";
        return;
    }
    opstPrint(list->pNext);
    cout<<list->data<<" ";
    return;
}

//  Hàm tìm phần tử chứa trị lớn nhất trong danh sách
int findMax(NODE *list)
{
    if (list->pNext==NULL)
    {
        return list->data;
    }
    return list->data>findMax(list->pNext) ? list->data : findMax(list->pNext);
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

    cout<<"List dao: ";
    opstPrint(list);
    cout<<endl;

    cout<<"Tri max: "<<findMax(list);

    Delete(list);

    cout<<"\nHoan thanh...\n";

    return 225;

}