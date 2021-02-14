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
 void insert (Node* t , int key )
 {
     Node* r = NULL  ;
     while (t!=NULL)
     {
         r = t ;
         if (key == t->data)
         return ;
         else if (key<t->data)
          t = t->left ;
          else 
          t = t->right ;
     }
     Node * p = new Node ;
         p->data = key ;
     p->left = p->right = NULL ;
     if (p->data < r->data)
        r->left = p ;
     else
        r->right = p ;
 }

 void display (Node* root)
 {
     if (!root)
     return ;
     display (root->left) ;
     cout <<root->data<<" ";
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
     insert (root , 6);
     display (root) ;
     return 0 ;
 }