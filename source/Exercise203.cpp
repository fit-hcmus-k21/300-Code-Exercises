#include <iostream>
using namespace std;

struct NODE {
    int data;
    NODE *pNext;
};

//  Chèn một node mới vào danh sách liên kết sao cho trị lưu trong các node của danh sách luôn theo thứ tự tăng
void IncreaseInsert(NODE *&list, int value)
{
    NODE *p=new NODE;
    p->data=value;
    if (list==NULL)
    {
        p->pNext=NULL;
        list=p;
    }
    else
    {
        if (value<list->data)
        {
            p->pNext=list;
            list=p;
        }
        else
        {
            NODE *q=list;
            NODE *prv=NULL;
            for (; q!=NULL && q->data<=value;q=q->pNext)
            {
                prv=q;
            }
            p->pNext=prv->pNext;
            prv->pNext=p;
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

int main()
{
    NODE *list=NULL;
    int value;
    cout<<"Nhap 0 de dung: ";
    do{
        cin>>value;
        if (value)
        {
            IncreaseInsert(list,value);
        }
    } while (value);

    cout<<"List goc: ";
    output(list);

    cout<<"Nhap gia tri moi: ";
    cin>>value;
    IncreaseInsert(list,value);
    cout<<"List moi: ";
    output(list);

    cout<<"Hoan thanh...\n";

    return 225;

}