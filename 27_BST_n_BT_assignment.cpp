#include <bits/stdc++.h>
using namespace std;
#include "27_Binarysearchtree.h"
TreeNode <int> * input(){
    int data;cin>>data;
    if(data == -1 ) return NULL;
    queue <TreeNode <int> * > q;
    TreeNode <int> * root = new TreeNode <int> (data);
    q.push(root);
    while(!q.empty()){
        TreeNode <int> * curr= q.front();
        q.pop();
        int leftdata;cin>>leftdata;  
        if(leftdata!=-1){
            TreeNode <int> * leftnode= new TreeNode <int> (leftdata);
            curr->left=leftnode;
            q.push(leftnode);
        }
        int rightdata;cin>>rightdata;
        if(rightdata!=-1){
            TreeNode <int> * rightnode= new TreeNode <int> (rightdata);
            curr->right=rightnode;
            q.push(rightnode);
        }
    }
    return root;
}
void print(TreeNode <int> * root){
    if(!root) return;
    queue <TreeNode <int> * > q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        TreeNode <int> * curr=  q.front();
        q.pop();
        if(curr==NULL) {
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }
        else{
        cout<<curr->data<<" ";
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
        }
    }
}
TreeNode <int> * dupe(TreeNode<int> * root){
    if(!root) return NULL;
    TreeNode <int> * n = new TreeNode (root->data);
    n->left=(root->left);
    root->left=n;
    root->right=dupe(root->right);
    n->left=dupe(n->left);
    return root;

}
int main() {
    TreeNode <int> * root =input();
    root=dupe(root);
    print(root);
    return 0;
}