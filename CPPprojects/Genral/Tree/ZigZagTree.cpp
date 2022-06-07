
#include <bits/stdc++.h>

using namespace std;

class node{
    public:
    int val;
    node* left;
    node* right;
    
    node* createTree(node* root, int val){
        if(!root){
            node* newNode = new node();
            newNode->val = val;
            newNode->left = NULL;
            newNode->right = NULL;
            return newNode;
        }
        if(root->val<val)
            root->right = createTree(root->right,val);
        else
            root->left = createTree(root->left, val);
        return root;
        
    }
    void levelOrder(node* root){
        queue<node*>q;
        q.push(root);
        bool flag = true;
        while(!q.empty()){
            node* temp;
            int n = q.size();
            vector<int>v(n);
            for(int i=0; i<n; i++){
                temp = q.front();
                q.pop();
                int k = flag ? i : n-i-1;
                 v[k]=(temp->val);
                if(temp->left){
                    q.push(temp->left); 
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            flag = !flag;
            for(int i=0; i<n; i++){
                cout<<v[i]<<" ";
            }
         
        }
        
    }
    void display(node* root){
        if(root!=NULL){
            
            display(root->left);
            cout<<root->val<<" ";
            display(root->right);
        }
        return;
    }
};

int main()
{
    int a[] = {10,5,15,4,6,12,20};
    int len = sizeof(a)/sizeof(a[0]);
    node obj;
    node* root= NULL;
    for(int i=0; i<len ; i++){
      root= obj.createTree(root,a[i]);
    }
    obj.levelOrder(root);
    return 0;
}
