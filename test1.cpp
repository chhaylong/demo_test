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
List* createlist(){
    List* mylist;
    mylist= new List;
    mylist -> n=0;
    mylist-> head= NULL;
    mylist -> tail= NULL;
    return mylist;
}