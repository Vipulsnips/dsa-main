#include <bits/stdc++.h>
// using namespace std;
// #include "27_Binarysearchtree.h"
// TreeNode <int> * input(){
//     // cout<<"enter root data:";
//     int data;cin>>data;
//     if(data == -1 ) return NULL;
//     queue <TreeNode <int> * > q;
//     TreeNode <int> * root = new TreeNode <int> (data);
//     q.push(root);
//     while(!q.empty()){
//         TreeNode <int> * curr= q.front();
//         q.pop();
//         // cout<<"enter left child of "<<curr->data<<endl;
//         int leftdata;cin>>leftdata;  
//         if(leftdata!=-1){
//             TreeNode <int> * leftnode= new TreeNode <int> (leftdata);
//             curr->left=leftnode;
//             q.push(leftnode);
//         }
//         // cout<<"enter right child of "<<curr->data<<endl;
//         int rightdata;cin>>rightdata;
//         if(rightdata!=-1){
//             TreeNode <int> * rightnode= new TreeNode <int> (rightdata);
//             curr->right=rightnode;
//             q.push(rightnode);
//         }
//     }
//     return root;
// }
// void print(TreeNode <int> * root){
//     if(!root) return;
//     queue <TreeNode <int> * > q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//         TreeNode <int> * curr=  q.front();
//         q.pop();
//         if(curr==NULL) {
//             cout<<endl;
//             if(!q.empty()) q.push(NULL);
//         }
//         else{
//         cout<<curr->data<<" ";
//         if(curr->left) q.push(curr->left);
//         if(curr->right) q.push(curr->right);
//         }
//     }
// }
// void printrange(TreeNode <int> * root , int l , int r){
//     if(!root) return;
//     if(root->data >=l && root->data <=r ){
//         cout<<root->data<<" ";
//         printrange(root->left,l,r);
//         printrange(root->right,l,r);
//     }
//     else if(root->data > r) printrange(root->left,l,r);
//     else if(root->data <l) printrange(root->right,l,r);
// }
// bool search(TreeNode <int> * root, int k){
//     if(!root) return NULL;
//     if(root->data == k) return 1;
//     else if(k<root->data) return search(root->left, k);
//     else return search(root->right, k);
// }

// isbst checkbst(TreeNode <int> * root ){
//     if(!root ) {
//         isbst ans;
//         ans.valid=1;
//         ans.maxm=INT_MIN ;
//         ans.minm=INT_MAX;
//         return ans;
//     }
//     isbst ans;
//     isbst check1= checkbst(root->left);
//     isbst check2= checkbst(root->right); 
//     int maxm=max(check1.maxm, max(root->data ,check2.maxm));
//     int minm=min(check1.minm, min(root->data ,check2.minm));
//     ans.valid = (root->data > check1.maxm) && (root->data<=check2.minm) && check1.valid && check2.valid;
//     ans.maxm=maxm;
//     ans.minm=minm;
//     return ans;
// }
// bool checkbst2(TreeNode <int> * root , int minm=INT_MIN , int maxm= INT_MAX ){
//     if(!root) return true;
//     if(root->data < minm || root->data> maxm) return 0;
//     return checkbst2(root->left , minm, root->data -1 ) && checkbst2(root->right , root->data,maxm );
// }
// TreeNode <int > * makebst(vector <int> a , int st ,int en){
//     if(st>en) return NULL;
//     int  mid= (st+en)/2;
//     TreeNode <int> * root= new TreeNode (a[mid]);
//     root->left = makebst(a,st ,mid-1);
//     root->right = makebst(a,mid+1 ,en);
//     return root;
// }
// pair <node * , node * > bst_to_ll(TreeNode<int> * root){
//     if(!root) return {NULL,NULL};
//     pair <node * , node * > p1= bst_to_ll(root->left);
//     pair <node * , node * > p2= bst_to_ll(root->right);
//     node * curr= new node (root->data);
//     if(p1.first ==NULL && p2.first==NULL){
//         return {curr,curr};
//     }
//     else if(p1.first== NULL ){
//         curr->next=p2.first;
//         return {curr,p2.second};
//     }
//     else{
//         p1.second->next=curr;
//         curr->next=p2.second;
//         return {p1.first , p2.second};
//     }
// }
// void printLL(node * head){
//     while(head){
//         cout<<head->data<<endl;
//         head=head->next;
//     }
// }
// vector <int> * path(TreeNode<int> * root,int k){
//     if(!root) return NULL;
//     if(root->data == k ){
//         vector <int> *output = new vector <int> ();
//         output->push_back(root->data);
//         return output;
//     }
//     vector <int> * left= path(root->left, k);
//     if(left){
//         left->push_back(root->data);
//         return left;
//     }
//     vector <int> * right= path(root->right, k);
//     if(right){
//         right->push_back(root->data);
//         return right;
//     }
//     return NULL;
// }