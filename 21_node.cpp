class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        next=NULL;
    }
};
class Pair{
    public:
    node * head, *tail;
    Pair(node * h1 , node * h2) : head(h1), tail(h2) {}
};
class doublenode{
    public:
    int data;
    doublenode * next, * prev;
    doublenode(int data):data(data), next(NULL), prev(NULL){}
};