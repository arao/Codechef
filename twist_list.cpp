#include<iostream>
using namespace std;
struct node
{
    long int data;
    node* next;
};
node * llist()
{
    long int n;
    //cout<<"number of items you want to enter";
    cin>>n;
    node* start=0,*last=0,*temp=0;
    while(n--)
    {
        temp=new node;
        cin>>temp->data;
        temp->next=0;
        if(start==0)
        {
            start=temp;
            last=temp;
        }
        else
        {
            last->next=temp;
            last=last->next;
        }
    }
    return start;
}
void reverseit(node *p1,node *p2)
{
    node *r1,*r2,*r3;
    r1=p2->next,r2=p1,r3=p1->next;
    while(r3!=p2->next)
    {
        r2->next=r1;
        r2=r3;
        r3=r3->next;
    }
    return;
}
node * solution(node head)
{
    int n,temp;
    cin>>n;
    node * p1,*p2,*p3;
    p1=&head;
    p3=p2=head.next;
    while(true)
    {
        temp=n-1;
        while(temp--&&p3->next)
        {
            p3=p3->next;
        }
        reverseit(p2,p3);
        p1->next=p3;
        p2=p2->next;
        p3=p2;
        if(!p2->next)
        {
            return head.next;
        }
    }

}
int main()
{
    node  head;
    head.next=llist();
    head.next=solution(head);

}
