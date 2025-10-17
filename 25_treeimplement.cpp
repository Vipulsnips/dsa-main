#include <bits/stdc++.h>
using namespace std;
#include "25_tree.h"

//-----------------input using recursion------------------
// TreeNode<int> * input( ){
//     int el;
//     cout<<"Enter element "<<endl;
//     cin>>el;
//     TreeNode <int> * root =  new TreeNode<int> (el);
//     int n;
//     cout<<"Enter num of children\n";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         TreeNode <int> * n =input();
//         root->children.push_back(n);
//     }
//     return root;
// }

//------------------level wise input using queue-------------
TreeNode <int> * input(){
    int el;
    cout<<"Enter element "<<endl;
    cin>>el;
    TreeNode <int> * root =  new TreeNode<int> (el);
    queue <TreeNode <int > *> q;
    q.push(root);
    while(! q.empty()){
        TreeNode<int> * front= q.front();
        q.pop();
        cout<<"enter num of child of "<<front->data<<endl;
        int n;cin>>n;
        for(int i=0;i<n;i++){
            cout<<"enter "<<i<<" th child of "<<front->data<<endl;
            int x;cin>>x;
            TreeNode <int > * child= new TreeNode <int> (x);
            front->children.push_back(child);
            q.push(child);
        }
    }
    return root;
}


//---------------------printing using recursion------------
// void print(TreeNode <int> * root ){
//     if(!root) return ; //edge case
//     cout<<root->data<<":";
//     for(auto i:root->children){
//         cout<<i->data<<",";
//     }
//     cout<<endl;
//     for(auto i:root->children){
//         print(i);
//     }
// }

//---------------------printing using queue level wise printing---------------
void print(TreeNode <int> * root){
    if(!root) return;
    queue <TreeNode <int> * > q;
    q.push(root);
    while(!q.empty()){
        TreeNode <int> * curr=q.front();
        q.pop();
        cout<<curr->data<<":";
        for(auto i:curr->children) {cout<<i->data<<",";
        q.push(i);}
        cout<<endl;
    }
}
int numnodes(TreeNode <int> * root){
    if(!root) return 0;
    int ans=1;
    for(auto i:root->children){
        ans+=numnodes(i);
    }
    return ans;
}
int sumnodes(TreeNode <int> * root){
    if(!root) return 0;
    int sum=root->data;
    for(auto i:root->children){
        sum+=sumnodes(i);
    }
    return sum;
}
TreeNode<int> * maxdata(TreeNode <int> * root){
    if(!root) return NULL;
    TreeNode<int> * temp2=root;
    for(auto i:root->children){
        TreeNode<int> * temp=maxdata(i);
        if(temp2->data < temp->data) temp2=temp;
    }
    return temp2;
}
int height(TreeNode<int> * root){
    int ans=1;
    for(auto i:root->children){
        int it =height(i)+1;
        ans=max(ans,it);
    }
    return ans;
}
void printatlevelk(TreeNode <int > * root , int k){
    if(!root) return;
    if(k==0) {
        cout<<root->data<<endl;
        return;
    }
    for(auto i:root->children){
        printatlevelk(i,k-1);
    }
}
int leafnodes(TreeNode <int> * root){
    if(root->children .size()==0) return 1;
    int ans=0;
    for(auto i:root->children){
        ans+=leafnodes(i);
    }
    return ans;
}
void preorder(TreeNode <int> * root){
    if(!root) return ;
    cout<<root->data<<" ";
    for(auto i:root->children){
        preorder(i);
    }
}
void postorder(TreeNode <int> * root){
    if(!root) return ;
    for(auto i:root->children){
        postorder(i);
    }
    cout<<root->data<<" ";
}

void deletenode(TreeNode <int> * root){
    //postoder traversal and then removal so that complete tree gets deleted
    for(auto i:root->children){
        deletenode(i);
    }
    delete root;
}
int main(){
    // TreeNode <int> * root = new TreeNode <int> (1); 
    // TreeNode <int> * node1 = new TreeNode <int> (2); 
    // TreeNode <int> * node2 = new TreeNode <int> (3);
    // root->children.push_back(node1); 
    // root->children.push_back(node2); 

    TreeNode <int > * root= input();
    print(root);
    cout<<numnodes(root)<<endl;
    cout<<sumnodes(root)<<endl;
    cout<<maxdata(root) -> data<<endl;
    cout<<height(root)<<endl;
    printatlevelk(root,3);
    cout<<leafnodes(root)<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    // deletenode(root);
    delete  root;
}