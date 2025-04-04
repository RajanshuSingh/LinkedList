#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> 
using namespace std;



class Node{
    public: 
    int data;
    Node *next;

    public:

    Node(int data1, Node *next1){
        data=data1;
        next= next1;

    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){

    Node *head= new Node(arr[0]);
    Node *mover=head;
    for(int i=1;i<arr.size(); i++){
        Node *temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
return head;
}

int lengthOfLL(Node *head){

    int cnt=0;
    Node *temp=head;

   while(temp)
   {
   temp=temp->next;
   cnt++;
   }

return cnt;
}
int checkIfExist(Node* head, int val){
    Node *temp=head;

   while(temp)
   {
    if(temp->data==val) return 1;
   temp=temp->next;

   }
return 0;
}
int main(){
  
   vector<int> arr={2,51,8,7};
   Node *head =convertArr2LL(arr);
//    Node *temp=head;

//    while(temp)

//    {cout<<temp->data<<" "; //code for traversal of the linked list 
//    temp=temp->next;
//    }

//    cout<<"Length of linked list is: " << lengthOfLL(head);

// cout<<checkIfExist(head,51);



}