//
//  main.c
//  LInk List
//
//  Created by Atul Bansal on 10/08/18.
//  Copyright © 2018 Atul Bansal. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
    int data;
    struct Node *next;
}Node;

/*######### insert at first ##########*/

void insertFirst(Node **head,int x)
{
    if(*head == NULL)
    {
        Node *nn = (Node *)malloc(sizeof(Node));
        *head = nn;
        nn->data =x;
        nn->next = NULL;
        
    }
    else{
        
        Node *nn = (Node *)malloc(sizeof(Node));
        
        nn->data = x;
        nn->next =*head ;
        //(*head)->next = NULL;
        *head = nn;
    }
}


void print(Node **head)
{
    Node *h = *head;
    while(h != NULL)
    {
        printf("%d ",h->data);
        h = h->next;
    }
    
    //printf("check = %d\n",(*head)->data);
}


/*Node * reverse(Node *first)
 {
 Node *second = NULL;
 
 if(first)
 second = first->next;
 
 
 if(second == NULL)
 return first;
 
 else{
 Node *newh = reverse(second);
 first->next = second->next;
 second->next =first;
 
 return newh;
 }
 
 }
 */


int middleNumber(Node *node)
{
    Node * fast = node;
    
    while(fast->next && fast->next->next)
    {
        fast = fast->next->next;
        
        node = node->next;
    }
    
    return node->data;
}

int palindromeOfLink(Node *node,Node **head)
{
    if(node==NULL)
        return 1 ;
    
    else{
        
        int x  = palindromeOfLink(node->next,head);
        
        if(x==1)
        {
            
            if((*head)->data == node->data)
            {
               // printf("%d  %d",(*head)->data,node->data);
                *head = (*head)->next;
                return 1;
            }
            
            else
                return 0;
            
        }
    }
    return 0;
}

/*###### reverse ########*/
Node * reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next;
    
    while(curr!= NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        
        curr=next;
    }
    
    return prev;
}

Node* reverseBetween(Node* A, int B, int C) {
    
    Node *curr = A;
    Node *temp1 = NULL,*temp1_p = NULL;
    Node *temp2= NULL ,*temp2_n = NULL;
    
    int i=1;
    
    if(B!=C)
    {
        while(curr && i<=C)
        {
            if(i<B)
            {
                temp1_p = curr;
                printf(" temp1 = %d \n",temp1->data);
            }
            
            if(i == B)
            {
                temp1 = curr;
                printf(" temp1 = %d \n",temp1->data);
                
            }
            
            
            
            if(i == C)
            {
                printf(" curr = %d \n",curr->data);
                temp2 = curr;
                temp2_n = curr->next;
                
                break;
            }
            
            curr = curr->next;
            i++;
        }
        
        temp2->next =NULL; //2 3 4 NULL
        
        temp2 = reverse(temp1);
        
        if (temp1_p)
            temp1_p->next = temp2;
        
        // If starting position was head
        else
            A = temp2;
        
        
        
    }else return A;
    
    
    return A;
    
}
int main()
{
    Node *head = NULL;
    
    /*    insertFirst(&head,5);
     insertFirst(&head,4); */
    insertFirst(&head,1);
    insertFirst(&head,2);
    insertFirst(&head,2);
    /* insertFirst(&head,7);
     insertFirst(&head,14);
     insertFirst(&head,1);
     print(&head);
     printf("check = %d\n",head->data);
     
     head = reverse(head);
     
     print(&head);
     printf("\ncheck = %d\n",middleNumber(head));
     */
    
    if(palindromeOfLink(head,&head))
        printf("Palindrome");
    
    else      printf("NOT Palindrome");
    /* print(&head);
     printf("\n");
     head = reverseBetween(head,1,2);
     print(&head);  */
}
