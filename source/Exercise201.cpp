#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *pNext;
};

//   Chèn vào đầu danh sách
void chenDauList(Node *&list, int value)
{
    Node *p=new Node;
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

//  Chèn vào sau vị trí có giá trị value
void chenPosList(Node *&list, int value, int data)
{
    Node *l=list;
    for (; l!=NULL;l=l->pNext)
    {
        if (l->data==value)
        {
            Node *p=new Node;
            p->data=data;
            p->pNext=l->pNext;
            l->pNext=p;
            return;
        }
    }
}

//  Chèn vào cuối danh sách
void chenCuoiList(Node *&list, int data)
{
    Node *p=new Node;
    p->data=data;
    p->pNext=NULL;
    if (list==NULL)
    {
        list=p;
        return;
    }
    Node *l;
    for (l=list;l->pNext!=NULL;l=l->pNext) {}
    l->pNext=p;
}

//  Xuất danh sách
void output(Node *list)
{
    Node *node=list;
    for (;node!=NULL;node=node->pNext)
    {
        cout<<node->data<<" ";
    }
    putchar('\n');
}

int main()
{
    Node *list=NULL;
    int value;
    cout<<"Nhap 0 de dung: ";
    do 
    {
        cin>>value;
        if (value)
            chenDauList(list,value);
        
    } while (value);

    cout<<"List goc: ";
    output(list);

    cout<<"Chen 5 cuoi: ";
    chenCuoiList(list,5);
    output(list);

    cout<<"Chen 4 sau node 3: ";
    chenPosList(list,3,4);
    output(list);

    cout<<"Hoan thanh...\n";

    return 225;

}