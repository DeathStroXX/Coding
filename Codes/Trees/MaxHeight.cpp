#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  node* left;
  node* right;
};
int MaxDepth(node* node){
  if(node == 0) return 0; //If the tree is empty
  //calling left part via recursion
  int lDepth = MaxDepth(node* left) ;

  // calling the right part using recursion
  int rDepth = MaxDepth(node* right);

   return max(lDepth, rDepth)+1;  // reccurence relation we did +1 as we are taking the convention under which the--
   //--the height of the tree is starting from the 1
  }

node* newNode(int data){ //Allocating new node with given data & NULL left
  node* Node = new node();
  Node-> data = data;
  Node -> left = NULL;
  Node ->right = NULL;
  return (Node);
}

int main(){
  node* root = newNode(1);
  root->left = newNode(2) ;
  root->right = newNode(3);
  root->left->left=newNode(4);
  root->left->right=newNode(5);
  cout<<"height of the tree is"<<MaxDepth(root);
}
