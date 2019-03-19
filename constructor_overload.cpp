#include<iostream>
using namespace std;

class complax
{
        int r,i;
        public:
        void set()
        {
                cout<<"Enter the real part.."<<endl;
                cin>>r;
                cout<<"Enter the imaginory part.."<<endl;
                cin>>i;
        }
        complax add(int x);
        complax add(complax s1,complax s2);
        void display();
};

complax complax::add(int x)
{
        complax ob;
        ob.r= x + r;
        return ob;
}

complax complax::add(complax s1, complax s2)
{
        //complax sum;
        r = s1.r + s2.r;
        i = s1.i + s2.i;
        cout<<r<<"+i"<<i;
}
int main()
{
        complax o1,o2,o3;
        o1.set();
        o2.set();
        int n;
        cout<<"Select \n 1- to add real part only\n 2- add 2 complax number"<<endl;
        int s;
        switch(s)
        {
                case 1:cout<<"Enter the number"<<endl;
                        cin>>n;
                        o1.add(n);
                        break;
                case 2:o3.add(o1,o2);
                        break;
        }
        return 0;
}
