#include <bits/stdc++.h>
using namespace std;
#include "26_BinartTree.h"

//----------------------------------------- Taking input recurively-----------------------------
TreeNode <int> * recuriveinput(){
    cout<<"input data \n";
    int x;cin>>x;
    if(x==-1) return NULL;
    TreeNode <int> * root = new TreeNode <int> (x);
    TreeNode <int> * leftnode= recuriveinput();
    TreeNode <int> * rightnode= recuriveinput();
    root->left= leftnode;root->right=rightnode;
    return root;
}
//----------------------------------------- printing output  ------------------------
void recursiveprint(TreeNode <int> * root){
    if(!root ) return;
    cout<<root->data<<":";
    if(root->left ) cout<<"L "<<root->left->data<<",";
    if(root->right ) cout<<"R "<<root->right->data<<",";
    cout<<endl;
    recursiveprint(root->left);
    recursiveprint(root->right);
}

//--------------------------------------- taking input  level wise -----------------------------
TreeNode <int> * input(){
    cout<<"enter root data:";
    int data;cin>>data;
    if(data == -1 ) return NULL;
    queue <TreeNode <int> * > q;
    TreeNode <int> * root = new TreeNode <int> (data);
    q.push(root);
    while(!q.empty()){
        TreeNode <int> * curr= q.front();
        q.pop();
        cout<<"enter left child of "<<curr->data<<endl;
        int leftdata;cin>>leftdata;  
        if(leftdata!=-1){
            TreeNode <int> * leftnode= new TreeNode <int> (leftdata);
            curr->left=leftnode;
            q.push(leftnode);
        }
        cout<<"enter right child of "<<curr->data<<endl;
        int rightdata;cin>>rightdata;
        if(rightdata!=-1){
            TreeNode <int> * rightnode= new TreeNode <int> (rightdata);
            curr->right=rightnode;
            q.push(rightnode);
        }
    }
    return root;
}

//----------------------------------------- printing output level wise  ------------------------
void print(TreeNode <int > * root ){ 
    if(root==NULL) return;
    queue <TreeNode <int > * > q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode <int > * curr=q.front();
        q.pop();
        cout<<curr->data<<":";
        if(curr->left) {cout<<"L:"<<curr->left->data<<",";q.push(curr->left);}
        else cout<<"L:"<<-1<<",";
        if(curr->right) {cout<<"R:"<<curr->right->data;q.push(curr->right);}
        else cout<<"R:"<<-1<<",";
        cout<<endl;
    }
    
}
int countnodes(TreeNode <int> * root ){
    if(!root) return 0;
    // int ans=1;
    // ans+=countnodes(root->left);
    // ans+=countnodes(root->right);
    // return ans;
    return 1+countnodes(root->left) + countnodes(root->right);
}

bool nodepresent(TreeNode <int> * root,int k){ 
    if(!root) return 0;
    if(root->data == k) return 1;
    return nodepresent(root->left , k ) || nodepresent(root->right ,k ); 
}

int height(TreeNode  <int> *  root ){
    if(!root) return 0;
    return 1+max(height(root->left),height(root->right));
}

TreeNode <int > * mirror(TreeNode <int > * root){
    if(!root) return NULL;
    root->left = mirror(root->left);
    root->right = mirror(root->right);
    TreeNode <int> * temp = root->left;
    root->left=root->right;
    root->right=temp;
    return root;
}

void preorder(TreeNode <int> * root){
    if(!root) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(TreeNode <int> * root){
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(TreeNode <int> * root){
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
//---------------------------------------- contructing tree from preorder and inorder -----------------------------------------
// pre= root left right
// in = left root right
TreeNode <int> * conversionmain( int * in , int *pre, int inS,int inE,int preS,int preE){
    if(inS>inE) return NULL; 
    int data= pre[preS];
    // cout << "Creating node: " << data << " from pre[" << preS << "]" << endl;
    TreeNode<int> * root = new TreeNode <int> (data);
    int LinS,LinE,LpreS,LpreE;
    int RinS,RinE,RpreS,RpreE;
    int rootindex=-1;
    for(int i=inS;i<=inE;i++){
        if(in[i]==data){
            rootindex=i;
            break;
        }
    }
    LinS=inS;
    LinE=rootindex-1;
    LpreS=preS+1;
    LpreE=LinE-LinS+LpreS;
    RinS=rootindex+1;
    RinE=inE;
    RpreS=LpreE+1;
    RpreE=preE;
    root->left=(conversionmain(in,pre, LinS, LinE,LpreS,LpreE));
    root->right=(conversionmain(in,pre,RinS,RinE, RpreS,RpreE));
    return root;
}
TreeNode <int> * conversion(int * in ,int* pre ,int size){
    return conversionmain(  in , pre, 0, size-1, 0, size-1);
}



//-------------------------------------find diameter  O(n*h) where h is height
int diameter(TreeNode <int> * root) {
    if(!root) return 0;
    int op1= height(root->left) + height (root->right);
    int op2=diameter (root->left);
    int op3=diameter (root->right);
    return max(op1 , max( op2,op3));
}

//------------------------------------ optimised diamter finding  O(n) --------------------
pair<int,int> diameterOp(TreeNode<int>* root) {
    if (!root) return {0, 0};
    pair<int, int> left = diameterOp(root->left);
    pair<int, int> right = diameterOp(root->right);
    int height = 1+max(left.first , right.first); 
    int diameter = max(left.first + right.first , max(left.second , right.second));
    return {height,diameter };
}

//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1 
int main(){
    // TreeNode <int > * root = new TreeNode <int> (1);
    // TreeNode <int > * r1 = new TreeNode <int> (2);
    // TreeNode <int > * r2 = new TreeNode <int> (3);
    // root->left= r1; root->right=r2;

    // TreeNode <int> * root= recuriveinput();
    // TreeNode <int> * root= input();
    // print(root);
    // cout<<countnodes(root)<<endl;
    // int k; cin>>k;
    // cout<<nodepresent(root,k)<<endl;
    // cout<<height(root)<<endl;
    // root=mirror(root);
    // print(root);
    // inorder(root);
    // preorder(root);
    // postorder(root);
    //-------------------conversion--------------------
    // int n;
    // cin>>n;
    // int in[n],pre[n];
    // for(auto &i: pre) cin>>i;
    // for(auto &i:in) cin>>i;
    // TreeNode <int> * root= conversion(in,pre,n);
    //-------------------diameter----------------------
    TreeNode <int> * root= input();
    pair<int,int> temp= diameterOp(root);
    print(root);
    cout<<"height:"<<temp.first<<endl;
    cout<<"diamter:"<<temp.second<<endl;
    cout<<(max(temp.first , temp.second))<<endl;
    delete root;
}