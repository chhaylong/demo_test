#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
struct List{
    int n;
    node*head;
    node*tail;
};

List*createlist(){
    List*mylist;
    mylist=new List;
    mylist->n=0;
    mylist->head=0;
    mylist->tail=0;

}

void insertnode(List*mylist, int data){
    node*e=new node;
    e->data=data;
    e->next=mylist->head;
    mylist->head=e;
    mylist->n=mylist->n+1;
    if(mylist->n==1){
        mylist->tail=e;
    }
}

int summation(List*mylist){
    node*temp=mylist->head;
    int sum=0;
    while(temp!=0){
        sum+=temp->data;
        temp=temp->next;
    }
    return sum;
}

void display(List*mylist){
    node*temp=mylist->head;
    while(temp!=0){
        cout<< temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    List*lek=createlist();
   
    int number;
    int count=0;
    while(true){
    cout<<"Enter the number(if you enter 0 two times it will stop the program): ";
    cin>>number;
    if(number==0){
        count++;
        if(count==2){
            break;
        }
    }
    // else{
    //   count=0;
    // }
    if(number!=0 && count<1)
     insertnode(lek,number);
}

cout<<"Display all numbers in the list: ";
display(lek);
cout<<endl;

int sum=summation(lek);
cout<<"The summation is: "<<sum;}