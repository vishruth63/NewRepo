#include<bits/stdc++.h>
using namespace std ;

class node 
{
public :
    int data ;
    node* next ;
    node ( int data )
    {
        this->data = data ;
        next = NULL ;
    }
};

node* head = NULL ;

void print ( )
{
    while ( head != NULL )
    {
        cout<<head->data<<"->";
        head = head -> next ;
    }
    
}

void insert (node* head , int data) 
{
    node* temp = new node ( data ) ;
    node* temp1 = head -> next ;
    head -> next = temp ;
    temp -> next = temp1 ;
}

void insertat ( node* head, int k , int data ) 
{
    node* temp = new node (data) ;
    while ( k-- )
        head = head->next ;
    node* temp1 ;
    temp1 = head -> next ;
    head -> next = temp ;
    temp -> next = temp1 ; 
}

void dellast ( node* head )
{
    while ( head -> next -> next != NULL )
    {
        head = head -> next ;
    }
    node* temp ;
    head -> next = 
    head -> next = NULL ;
    free (temp) ;
} 

void deletefirst ( node** hd )
{
    node** temp = hd ;
    (*hd) = (*hd)->next ;
    free (*temp) ;
}

void deletekposition ( node* head , int k )
{
    k = k - 2; 
    while ( k-- ) 
        head = head-> next ;
    node* temp = head -> next ;
    head -> next = temp -> next ;
    free (temp) ;
}

int size ( node* head )
{
    int ctr = 0 ;
    while ( head != NULL )
    {
        ctr++ ;
        head = head -> next ;
    }
    return ctr ;
}

int searchnode ( node* head , int val )
{
    int idx = 0 ;
    while ( head->data != val && head != NULL )
    {
        if ( head -> data == val )
            return idx ;
        idx++ ;
        head = head -> next ;
    }
    return 0 ;
}

//Question 10 
void clockwise ( node* head , int  k )
{
    node* temp = head ;
    //Ek pointer ko "size-k" tak le jao aur usse null ko point karwao
    while ( k-- )
        temp = temp->next ;
    
    //store the address of the next node 
    node* temp1 = temp -> next ;

    // our ll is gonna start from this node
    head = temp1 ;

    // make the temp node (which is the last element) next = NULL 
    temp -> next = NULL ;

    // traverse untill the last node and assign it to the first node of the original ll 
    while ( temp->next != NULL )
        temp = temp -> next ;
    temp -> next = head ; 
    // head = temp ; 
} 

//Question 12 
// int i = 0 ; 
void reverse (node* temp) 
{
    //base case
    if ( temp->next == NULL )
    {
        // cout<<i<<endl;
        head = temp ;
        return ;
    }
    // i++ ;
    reverse (temp->next) ;
    node* temp1 ;
    temp1 = temp -> next  ;
    temp1 -> next = temp ;
    temp -> next = NULL ;
}

void caller ()
{
    head = new node (1) ;
    head -> next = new node (2) ;
    head -> next -> next= new node (3) ;
    head -> next -> next-> next= new node (4) ; 
    head -> next-> next-> next-> next = new node (5) ;
    head -> next-> next-> next-> next-> next = new node (6) ;
    head -> next-> next-> next-> next-> next-> next = new node (7) ;
    // print (head) ;

    // insert (head , 100 ) ;
    // insertat ( head, 4, 100 );
    // dellast (head) ;

    /**********************
    This code for deleting the first element is very very important 
    from OOPS concept point of view. Read and understand this code again
    // deletefirst(&head) ;
    **********************/

    // deletekposition ( head , 4 ) ;
    // cout<<size(head)<<endl;
    // cout<<searchnode (head, 5) ;

    // int val = 7 ;
    // int s = size(head) ;
    // val = val % s ; 
    // clockwise (head , val) ;

    // reverse (head) ; 
    // cout<<head->data<<endl;

    node* fuck = head ;
    reverse (fuck) ;


    print () ;

    
    

}

int main ()
{
    
    cout<<endl;
    caller () ;
    cout<<endl;

    return 0;
}