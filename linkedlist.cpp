#include<iostream>
using namespace std;
class node{
    public:
    node*prev;
    int data;
    node*next;
    node(int data){
        this->data=data;
        prev=NULL;
        next=NULL;
    }
};
node* doublyll(){
    int data;
    cin>>data;
    node*head=NULL;
    node*tail=NULL;
    while(data!=-1){
        node* newnode=new node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            newnode->next=tail->next;
            newnode->prev=tail;
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}
/*node* circularll(){
    int data;
    cin>>data;
    node*head=NULL;
    node*tail=NULL;
    node* newnode=new node(data);
    head=newnode;
    tail=newnode;
    do
    {
        cin>>data;
        if (data==-1)
        {
            tail->next=head;
            tail=head;
        }
        else{
            node*newnode=new node(data);
            tail->next=newnode;
            tail=tail->next;
        }
    } while (tail!=head);
    return head;
}
void displaycircularll(node*head){
    node*p=head;
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    } while (p!=head);
    cout<<endl;
}
node* delnode(node* head,int i){
    node*slow=head;
    node*fast=head->next;
    int count=1;
    while(count!=i){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=fast->next;
    delete fast;
    return head;
}
node* createll(){
    int data;
    cin>>data;
    node*head=NULL;
    node*tail=NULL;
    while(data!=-1){
        node* newnode= new node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}*/
void displayll(node*head){
    cout<<"Linked list is : ";
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
/*node* duplicate(node* head){
    node* first=head;
    node* second=head->next;
    while(second!=NULL){
        if(first->data!=second->data){
            first=second;
            second=second->next;
        }
        else{
            first->next=second->next;
            delete second;
            second=first->next;
        }
    }
    return head;
}
node* insertinsorted(node* head,int key){
    node* temp=NULL;
    while(head!=NULL && head->data<key){
        temp=head;
        head=head->next;
    }
    node* a = new node(key);
    a->next=temp->next;
    temp->next=a;
    return head;
}
bool ifsorted(node*head){
    int x=-32567;
    while(head!=NULL){
        if(head->data<x){
            return false;
        }
        else{
            x=head->data;
            head=head->next;
        }
    }
    return true;
}
void displayll(node*head){
    cout<<"Linked list is : ";
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void midelement(node*head){
    node*slow=head;
    node*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    }
    cout<<"mid element is : "<<slow->data<<endl;
}
node* reverse(node* head){
    node* first=NULL;
    node* second=NULL;
    node* third=head;
    while(third!=NULL){
        first=second;
        second=third;
        third=third->next;
        second->next=first;
    }
    head=second;
    return head;
}

void concatenate(node*head1,node*head2){
    while(head1->next!=NULL){
        head1=head1->next;
    }
    head1->next=head2;
    head2=NULL;
}
node* merge(node*head1,node*head2){
    node* fh=NULL;
    node* ft=NULL;
    if(head1->data<head2->data){
        fh=head1;
        ft=head1;
        head1=head1->next;
        ft->next=NULL;
    }
    else{
        fh=head2;
        ft=head2;
        head2=head2->next;
        ft->next=NULL;
    }
    while(head1!=NULL && head2!=NULL){
        if(head2->data<head1->data){
            ft->next=head2;
            ft=head2;
            head2=head2->next;
            ft->next=NULL;
        }
        else{
            ft->next=head1;
            ft=head1;
            head1=head1->next;
            ft->next=NULL;
        }
    }
    if(head1!=NULL){
        ft->next=head1;
    }
    if(head2!=NULL){
        ft->next=head2;
    }
    return fh;
}
int isloop(node*head){
    node*slow=head;
    node*fast=head->next;
    do
    {
        slow=slow->next;
        fast=fast->next;
        (fast!=NULL)?fast=fast->next : fast;
    } while (slow!=NULL && fast!=NULL && slow!=fast);
    if(slow==fast)
    return true;
    else
    return false;
}*/
int main()
{
    cout<<"enter the elements in ll 1:"<<endl;
    node*head=doublyll();
    displayll(head);
    //displaycircularll(head1);
    //int i=4;
    //node*head2=delnode(head1,i);
    //displaycircularll(head2);
    //int looper = isloop(head1);
    //cout<<looper<<endl;
    //midelement(head);
    //head=duplicate(head);
    //cout<<"enter the elements in ll 2:"<<endl;
    //node*head2=createll();
    //displayll(head2);
    //cout<<"concatenated ll is: "<<endl;
    //concatenate(head1,head2);
    //head=reverse(head);
    //displayll(head1);
    //node*head3=merge(head1,head2);
    //cout<<"merged ll is: "<<endl;
    //displayll(head3);
    return 0;
}
