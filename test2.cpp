#include<iostream>
using namespace std;
struct node{
    int ID;
    string name;
    string program_degree;
    int year;
    node*next;
};
struct List{
    int n;
    node*head;
    node*tail;
};
List*createlist(){
    List* mylist;
    mylist= new List;
    mylist->n=0;
    mylist->head=0;
    mylist->tail=0;
};
