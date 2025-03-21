// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
void create();
void display();
void deleteatend();
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void  create(){
    struct Node *tmp,*ptr;
    int ele;
    tmp=(struct Node*)malloc(sizeof(struct Node));
    if(tmp==NULL){
        printf("Memory not allocated\n");
        exit(0);
    }
    else{
        scanf("%d",&ele);
        tmp->data=ele;
        tmp->next=NULL;
        if(head==NULL){
            head=tmp;
        }
        else{
            ptr=head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=tmp;
        }
    }
}
void display(){
    struct Node *ptr;
    if(head==NULL){
        printf("List is empty\n");
    }
    else{
        printf("The list elements are :\n");
        ptr=head;
        while(ptr!=NULL){
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
}
void deleteatend(){
    struct Node *ptr,*prev;
    ptr=head;
    while(ptr->next!=NULL){
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=NULL;
    free(ptr);
}
int main() {
    int size;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        create();
    }
    display();
    deleteatend();
    display();
    return 0;
}