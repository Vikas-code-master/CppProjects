/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

struct Node
{
  int val ;
  Node*left ;
  Node*right ;
};

   void averageOfLevels (Node*root){
        vector<double> res ;
        queue <Node*> q ;
        q.push(root);
      
       while (!q.empty()){
          double sum = 0 ; int count = 0 ; 
         queue < Node* > temp ;
       while (!q.empty()){
           Node* n = q.front() ;
           sum = sum + n->val ;
           count ++ ;
           q.pop();
           if (n->left)
           temp.push (n->left);
           if (n->right)
           temp.push (n->right);
       }
        q = temp ;
        res.push_back (sum / count) ;
        
   }
   for  (int i = 0 ; i<res.size() ; i++)
   {
     cout <<res[i]<<" " ;
   }
   }

  Node* newNode (int data) 
{ 
    Node* tempo = new Node; 
    tempo->val = data ; 
    tempo->left = tempo->right = NULL; 
    return tempo; 
} 
  
// Driver code 
int main() 
{ 
    /* Let us construct a Binary Tree 
        4 
       / \ 
      2   9 
     / \   \ 
    3   5   7 */
  
    Node* root = NULL; 
    root = newNode(4); 
    root->left = newNode(2); 
    root->right = newNode(9); 
    root->left->left = newNode(3); 
    root->left->right = newNode(5); 
    root->right->right = newNode(7); 
    averageOfLevels(root); 
    return 0; 
} 
