#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    Node * left ;
    Node* right ; 
    int data ;
} ;
 Node* create (Node* root , int num)
 {
     if (!root)
     {
         root = new Node ;
         root->data = num ; 
         root->left = root->right = NULL ;
     }
     else if (root->data > num)
        root->left = create (root->left , num) ;
    else
        root->right = create (root->right , num) ;
    return root ; 
 }

 void display (Node* root)
 {
     if (!root)
     return ;
     cout <<root->data<<" ";
     display (root->left) ;
     display (root->right) ;
 }
 int main ()
 {
     Node*root = NULL ;
     int arr[] = {5,13,2,3,1,8,9,7 } ;
     for (int i=0 ; i<8 ; i++)
     {
        root =  create (root , arr[i]) ;
     }
     display (root) ;
     return 0 ;
 }