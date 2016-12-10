//
//  PreorderTraversalTrees.cpp
//  
//
//  Created by Laura Wieme on 12/10/16.
//  Solution for HackerRank
//
//

/* you only have to complete the function given below.
 Node is defined as
 
 struct node
 {
 int data;
 node* left;
 node* right;
 };
 
 */

void preOrder(node *root) {
    // base condition for recursion
    if(root == NULL) return;
    
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
