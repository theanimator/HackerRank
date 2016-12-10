//
//  InsertTailLinkedLists.cpp
//  
//
//  Created by Laura Wieme on 12/10/16.
//  Problem on HackerRank
//
//

/*
 Insert Node at the end of a linked list
 head pointer input could be NULL as well for empty list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* Insert(Node *head,int data)
{
    // Complete this method
    Node *insertedNode = new Node;
    insertedNode->data = data;
    insertedNode->next = NULL;
    Node *tail = head;
    if(head==NULL){
        head = insertedNode;
    }else{
        while(tail->next != NULL)
        {
            tail = tail->next;
        }
        tail->next = insertedNode;
    }
    
    return head;
}
