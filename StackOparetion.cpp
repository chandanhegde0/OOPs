class Stack
{
        int *a,size,top;
        public:Stack()
        {
        cout<<"enter the size of stack.."<<endl;
        cin>>size;
        a = new int[size];
        top=-1;
        }
        bool isFull()
        {
                if(top==size-1)
                        return true;
                return false;
        }
        bool isEmpty()
        {
                if(top==-1)
                        return true;
                return false;
        }
        Stack& operator +(int elem)
        {
                if(isFull())
                {
                        cout<<"The stack is full."<<endl;
                        return *this;
                }
                a[++top]=elem;
                return *this;
        }

        int operator--(int x=0)
        {
                if(isEmpty())
                {
                        cout<<"Stack empty.."<<endl;
                        return -1;
                }
                return a[top--];
        }
        ~Stack(){
                delete []a;
        }

        friend ostream& operator<<(ostream &o, Stack &s);
};

ostream& operator <<(ostream &o,Stack &s)
{
        if(s.isEmpty()){
                cout<<"Stack is empty.."<<endl;
                return o;
        }
        for(int i=0;i<=s.top;i++)
        {
                cout<<s.a[i]<<" ";
        }
        return o;
}

int main()
{
        Stack obj;
        int ch,element;
        do{
                cout<<"Enter choice- 1: Push,2: Pop,3:Display"<<endl;
                cin>>ch;
                switch(ch){
                case 1:cout<<"Enter element"<<endl;
                        cin>>element;
                        obj=obj+element;
                        break;
                case 2:element=obj--;
                        if(element!=-1)
                        {
                                cout<<"The poped element is"<<element<<endl;
                        }
                        break;
                case 3:cout<<obj<<endl;
                        break;
                default:return 0;
                }
        }while(ch);
        return 0;
}
