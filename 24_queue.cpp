template <typename T>
class Queueimplement{
    T * data;
    int nextindex;
    int firstindex;
    int capacity;
    int size;
    public:
    // Queueimplement(int s){
    //     data = new T[size];
    //     nextindex=0;
    //     firstindex=-1;
    //     capacity=s;
    //     size=0;
    // }
    Queueimplement(){
        data = new T[5];
        nextindex=0;
        firstindex=-1;
        capacity=5;
        size=0;
    }
    int getsize(){
        return size;
    }
    bool isempty(){
        return size==0;
    }
    void enqueue(T element){ 
        if(size==capacity){
            T *n = new T[2 * capacity];
            int temp=capacity, temp2=firstindex,i=0;
            while(temp--){
                temp2%=capacity;
                n[i]=data[temp2];
                temp2++;
                i++;
            }
            delete [] data;
            data = n;
            nextindex=capacity;
            firstindex=0;
            capacity*=2;
        }
        data[nextindex]=element;
        nextindex=(nextindex +1 )% capacity; 
        if(firstindex==-1) firstindex=0;
        size++;
    }
    T dequeue(){ 
        if(isempty()) {
            cout<<"queue is empty\n";
            return 0;
        }
        T x= data[firstindex];
        firstindex = (firstindex+1 )% capacity;
        size--;
        if(size==0){
            firstindex=-1;
            nextindex=0;
        }
        return x;
    }
    T front(){
        if(isempty()){
            cout<<"queue is empty";
            return 0;
        }
        return data[firstindex];
    }
};


template <typename T>
class node{
    public:
    T data;
    node <T> * next;
    node(T el):data(el),next(NULL){}
};
template <typename T>
class Queue{
    node <T> * head , *tail;
    int size;
    public:
    Queue(){
        size=0;
        head=tail=NULL;
    }
    int getsize(){ return size;}
    bool isempty(){
        return size==0;
    }
    void enqueue(T el){
        node <T>* n = new  node<T>(el);
        if(!head) {
            head= tail=n;
        }
        else{
            tail->next= n ; 
            tail=n;
        }
        size++;
    }
    T dequeue(){
        if(isempty()) {
            cout<<"Queue is empty\n";
            return 0;  
        }
        size--;
        T x= head->data;
        node <T>* temp = head;
        head=head->next;
        delete temp; 
        return x;
    }
    T front(){
        if(isempty()) {
            cout<<"Queue is empty\n";
            return 0;
        }
        return head->data;
    }
};