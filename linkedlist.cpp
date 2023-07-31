    #include <iostream>
    using namespace std;
    class node
    {// NODE IPLEMENTATION
    public:
        int data;
        node *next;

        // constructor
        node( int data){
            this -> data =  data;
            this -> next =  NULL ;
        }
    };
    int main()
    {
        // DYNAMIC ALLOCATION IN THE FORM OF HEAP
        node * newNode = new node(10);
        cout<<newNode -> data<<endl;
        cout<<newNode -> next <<endl;
        return 0;
    }