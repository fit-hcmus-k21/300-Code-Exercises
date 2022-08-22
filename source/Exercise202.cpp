#include <iostream>
using namespace std;

struct NODE {
    int data;
    NODE *pNext;
};

//   Chèn vào đầu danh sách
void chenDauList(NODE *&list, int value)
{
    NODE *p=new NODE;
    p->data=value;
    if (list==NULL)
    {
        list=p;
        p->pNext=NULL;
        return;
    }
    p->pNext=list;
    list=p;
    return ;
}

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

//  Dùng đệ qui chèn 0 sau trị chẵn
void chen0(NODE *&list)
{
    if (list==NULL)
    {
        return;
    }
    NODE *p=new NODE;
    p->data=0;
    if (list->data%2==0)
    {
        p->pNext=list->pNext;
        list->pNext=p;
        chen0(p->pNext);
    }
    else
        chen0(list->pNext);
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
    do 
    {
        cin>>value;
        if (value)
            chenCuoiList(list,value);
        
    } while (value);

    cout<<"List goc: ";
    output(list);

    cout<<"Chen 0 sau tri chan: ";
    chen0(list);
    output(list);

    cout<<"Hoan thanh...\n";
    return 225;
}