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

//  Sửa liên kết để có được hai danh sách liên kết mới chứa trị lẻ và trị chẵn
void editLinkedList(NODE *&list,NODE *&listOdd, NODE *&listEven)
{
    NODE *l=list;
    NODE *q=NULL;
    while (l!=NULL)
    {
        q=l;
        l=l->pNext;
        if (q->data%2==0)
        {
            q->pNext=listOdd;
            listOdd=q;
        }
        else
        {
            q->pNext=listEven;
            listEven=q;
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

    NODE *listOdd=NULL;
    NODE *listEven=NULL; 

    editLinkedList(list,listOdd,listEven);

    cout<<"List chan: ";
    output(listOdd);

    cout<<"List le: ";
    output(listEven);

    
    Delete(listOdd);
    Delete(listEven);


    cout<<"Hoan thanh...\n";

    return 225;

}