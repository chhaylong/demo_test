#include<iostream>
using namespace std;
struct node{
    int year;
    int ID;
    string name;
    string program_degree;
    node*next;
};
struct List{
    int n;
    node*head;
    node*tail;
};

List* emptylist(){
    List* mylist;
    mylist=new List;
    mylist->n=0;
    mylist->head=0;
    mylist->tail=0;
    return mylist;
}

void insertstudent(List*student, int ID, string name, int year, string program_degree){
    node* e= new node;
    e->ID= ID;
    e->name= name;
    e->year= year;
    e->program_degree=program_degree;
    e->next=student->head;
    student->n=student->n+1;
    student->head=e;
    if(student->n==1){
        student->tail=e;
    }
}
int main(){
    List* student=emptylist();
    insertstudent(student,1,"bros long",2,"IT");
    insertstudent(student,2,"bros day",2,"AMS");
    insertstudent(student,3,"bros theara",2,"AMS");
    insertstudent(student,4,"bros da",2,"GGG");
    insertstudent(student,1,"bros makara",2,"GCI");
   
}
