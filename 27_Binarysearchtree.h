template <typename T>
class TreeNode{
    public:
    T data;
    TreeNode * left;
    TreeNode * right;
    TreeNode(T data){
        this->data=data;
        left=right=NULL;
    }
    ~TreeNode(){
        delete left;
        delete right;
    }
};
class bst{
    TreeNode <int> * root;  

    public:
    bst(){
        root=NULL;
    }
    ~bst(){
        delete(root);
    }
    void insertdata(int data){
        this->root= insertdata(data, root);
        return;
    }
    void deletedata(int data){
        root=deletedata(data, root);
        return;
    }
    // created a function to implement searching as we cant pass on child nodes in this function
    bool hasdata(int data){
        return hasdata(data,root);
    }
    void printtree(){
        printtree(root);
    }
    private:
    bool hasdata(int data,  TreeNode <int> * root){
        if(!root) return 0;
        if(root->data== data) return 1;
        else if(data < root->data) return hasdata(data,root->left);
        else return hasdata(data,root->right);
    }
    TreeNode <int> * insertdata(int data, TreeNode <int> * root){
        if(!root){
            TreeNode<int> * n= new TreeNode <int> (data);
            return n;
        }
        if(data < root->data){
            root->left= insertdata(data, root->left);
        }
        else{
            root->right= insertdata(data, root->right);
        }
        return root;
    }
    TreeNode <int> * deletedata(int data, TreeNode<int> * root){
        if(!root) return NULL;
        if(data < root->data) {
            root->left= deletedata(data, root->left);
            return root;
        }
        else if(data > root->data){
         root->right=deletedata(data,root->right);
          return root;
        }
        else{
            if(root->left && root->right) {
                TreeNode<int> * n= findleftmost(root->right);
                root->data=n->data;
                root->right=deletedata(root->data , root->right);
                return root;
            }
            else if(root->left) {
                TreeNode <int> * n = root->left;
                root->left=NULL;
                delete(root);
                return n;
            }
            else if(root->right) {
                TreeNode  <int> * n = root->right;
                root->right=NULL;
                delete(root);
                return n;
            }
            else{
                delete(root);
                return NULL;
            }
        }
    }
    TreeNode <int> * findleftmost(TreeNode<int> * root){
        while(root && root->left){
            root=root->left;
        }
        return root;
    }
    void printtree(TreeNode <int> * root){
        if(!root) return;
        cout<<root->data<<":";
        if(root->left) cout<<"L:"<<root->left->data<<" ";
        if(root->right) cout<<"R:"<<root->right->data<<" ";
        cout<<endl;
        printtree(root->left);
        printtree(root->right);
    }
};


//--------------------------linkedlist-----------------------------
class node{
    public:
    int data;
    node * next;
    node(int data){
        this->data= data;
        next=NULL;
    }
};
//---------------------------bst checker -------------------------------
class isbst{
    public:
    bool valid;
    int maxm;
    int  minm;
};