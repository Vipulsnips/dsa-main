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
class node{
    public:
    int data;
    node * next;
    node(int data){
        this->data= data;
        next=NULL;
    }
};