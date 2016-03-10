

class List{
    private:
    
        typedef struct node{
            int data;
            node* next;
        }* nodePtr;
        
        
        
        nodePtr head;
        nodePtr curr;
        nodePtr temp;
    
    public: // This is where the functions go
        
        List();
        void addNode(int add_data);
        void deleteNode(int del_data);
        void printList();
        
    
};