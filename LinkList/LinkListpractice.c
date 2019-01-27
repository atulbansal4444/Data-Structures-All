//
//  main.c
//  Practice Linked List
//
//  Created by Atul Bansal on 04/08/18.
//  Copyright © 2018 Atul Bansal. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//creating node
struct Node
{
    int data;
    struct Node *next;
};

//#################################
//declaring head
struct Node* head = NULL;

//##################################
//Insert elements i.e nodes in linked list using data without reccursion
void insertAlEnd(int data)
{
    if(head==NULL)
    {
        head = (struct  Node*)calloc(1,sizeof(struct Node));
        struct Node * x = (struct  Node*)calloc(1,sizeof(struct Node));
        x=head;
        x->data=data;
        x->next=NULL;
    }
    else
    {
    struct Node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    struct Node * x = (struct  Node*)calloc(1,sizeof(struct Node));
    x->data=data;
    x->next=NULL;
    temp->next=x;
    }
}

//#######################################
//Insert elements i.e nodes in linked list using data and head with reccursion

struct Node* insertAtEnd(struct Node * t,int data)
{
    if(head==NULL)
    {
        head = (struct  Node*)calloc(1,sizeof(struct Node));
        struct Node * x = (struct  Node*)calloc(1,sizeof(struct Node));
        x=head;
        x->data=data;
        x->next=NULL;
        return x;
    }
    else
    {
        if(t==NULL)
        {
            t=(struct  Node*)calloc(1,sizeof(struct Node));
            t->next=NULL;
            t->data=data;
            return t;
        }
        t->next=insertAtEnd(t->next,data);
        return t;
    }
}


//###################################

void printL(struct Node * t)
{
    while (t!=NULL) {
        printf("%d\n",t->data);
        t=t->next;
    }
    printf("\n");
}


void insertAtFirst(int data)
{
    if(head==NULL)
    {
        insertAtEnd(head,data);
    }
    else
    {
    struct Node * x = (struct  Node*)calloc(1,sizeof(struct Node));
    x -> next = head;
    head = x;
    x -> data = data;
    }
}


//##############################

void deleteAtFirst(struct Node * t)
{
    head = head -> next;
}
//#######################

void deleteAtLast(struct Node *t)
{
    while(t->next->next!=NULL)
    {
        t = t->next;
    }
    t->next=NULL;
}

//#######################

void deleteAtindex(struct Node ** t,int x)
{
    if (x==0) *t = (*t)->next;
    
    else
    {
    
        while(t!=NULL)
        {
            if(--x == 0 && (*t)->next!=NULL)
                {
                    (*t)->next = (*t)->next->next;
                }
            (*t) = (*t)->next;
        }
    }
}


struct Node * reverse(struct Node *h)
{
    struct Node *h1;
    
    if(h!=NULL)
    {
        h1 = h->next;
    }
    if(h1==NULL)
    {
        return h;
    }
    else
    {
        struct Node * curr = reverse(h1);
        h->next=h1->next;
        h1->next=h;
        return curr;
    }
    
}

//##########################

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
 
    
    insertAtFirst(40);
    
    
    
     //deleteAtFirst(head);
     //deleteAtLast(head);
    
    printL(head);
    
    //deleteAtindex(&head,0);
    
    
    //printL(head);
    struct Node *x, *s,*t;
    x=head;
    s=head->next;
    t=s;
    while (x->next!=NULL && x->next->next!=NULL) {
        struct Node *z;
        z=x;
        s=x;
        x=z;
        x=x->next->next;
        s=s->next->next;
    }
    
    head = reverse(head);
    printL(head);
    
    //printf("%d",head->data);
    
    return 0;
}
