#include<bits/stdc++.h>
using namespace std ;
class node 
{
    public :

    node*next ;
    int val ;
     node*head = NULL ;
    node* tail = NULL ;
    node*hrev ;
    node*trev = NULL;

    void create (int val)
    {
        
        node*temp = new node ;
        temp->val = val ;
        if (!head)
        {
            head = temp ;
            tail = temp ;
        }
        else
        {
            
            tail->next = temp ;
            tail = temp ;
            temp->next = NULL;
        }    
    }
    void reverse ()
    {
        
        node*tempo = head;
        while (tempo)
        {
            node* hrev = new node ;
            hrev->val = tempo->val ;
            hrev->next = trev ;
            trev = hrev ;
            tempo = tempo->next ;
        }
    }
    
    void display ()
    {
        //  trev = head ;
        while (trev)
        {
            cout <<trev->val <<"->";
            trev = trev->next ;
            // head = head->next ;
        }
    }
};
   
    int main ()
    {
        // node*head = NULL;
        // cout<<"xxx";
        node obj ;
        int A[]= {3,4,5,6,7};
        for (int i=0 ; i<5 ; i++)
           obj.create(A[i]) ;

        obj.reverse();
    obj.display () ;
     return 0 ;
    }