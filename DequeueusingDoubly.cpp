// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value;
    Node* next;
    Node* prev;
    Node(int d)
    {
        value=d;
        next=NULL;
        prev=NULL;
        
    }
};
class DeQueues
{
    Node* head;
    Node* tail;
    public:
    DeQueues()
    {
        head=NULL;
        tail=NULL;
    }
    void push_back(int value)
    { Node *n=new Node(value);
       if (tail==NULL){
        head=n;
        tail=n;
       }
       else{
        n->next=NULL;
        n->prev=tail;
        tail->next=n;
        tail=n;
       }
    }
    void push_front(int value){
    Node *n=new Node(value);
    if(head==NULL){
        head=n;
        tail=n;
    }
    else{
        n->next=head;
        n->prev=NULL;
       head->prev=n;
       head=n;
        
    }
       
    }
    void pop_front()
    {if(head==NULL){
      
      cout<<"Underflow"<<endl;
        }
    else{
        head=head->next;
        head->prev=NULL;
    }
      
    }
    void pop_back()
    {if(tail==NULL){
       cout<<"Underflow"<<endl;
        
    }
    else{
        tail->prev->next=NULL;
    }    
    }
    int get_front(){
        if (head!=NULL)
    	return head->value;
    }
    int get_back(){
        if(tail!=NULL){
    	return tail->value;
    }}
    void display_queue()
    {while(head!=NULL){
        cout<<head->value<<endl;
        head=head->next;
    }
        
    }
};
int main()
{
    DeQueues s;
    s.push_front(0);
    s.push_front(1);
    s.push_front(2);
    s.push_back(-1);
    cout<<"front: "<<s.get_front()<<"\n";
    cout<<"back: "<<s.get_back()<<"\n";
    s.display_queue();
    return 0;
}
