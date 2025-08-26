class DynamicArray{
    int * data;
    int capacity;
    int nextindex;
    public:
    DynamicArray(){
        data= new int[5];
        capacity=5;
        nextindex=0;
    }
    void add(int element){
        if(nextindex == capacity){
            int *newdata =new int[2*capacity];
            for(int i=0;i<capacity;i++){
                newdata[i]=data[i];
            }
            delete [] data;
            data=newdata;
            capacity *= 2;
        }
        data[nextindex]=element;   
        nextindex++;
    }
    int get(int ind)const{
        if(ind < nextindex){
            return data[ind];
        }
        else return -1;
    }
    void add (int index , int element){
        if(index  <nextindex) data[index] = element;
        else if( index == nextindex ) {add(element);}
        else return; 
    }
    void printconst(){
        for(int i=0;i<nextindex;i++ ) cout<<data[i]<<" ";
        cout<<endl;
    } 
    DynamicArray( DynamicArray const &d){
        // this->data=d.data;         // shallow copy

        this-> data = new int [d.capacity];
        for(int i=0;i< d.nextindex ; i++ ) this->data[i] = d.data [i];
        this->nextindex = d.nextindex;
        this -> capacity = d.capacity;
    }
    void operator= ( DynamicArray const &d){
        this-> data = new int [d.capacity];
        for(int i=0;i< d.nextindex ; i++ ) this->data[i] = d.data [i];
        this->nextindex = d.nextindex;
        this -> capacity = d.capacity;
    }
};