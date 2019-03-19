#include<iostream>
using namespace std;
class matrix{
public:int r,c,**a;
matrix(){
cout<<"Enter rows and columns of the matrix\n";
cin>>r>>c;
int i,j;
a=new int*[r];
for(i=0;i<r;i++)
a[i]=new int[c];
cout<<"Enter the matrix\n";
for(i=0;i<r;i++)
for(j=0;j<c;j++)
cin>>a[i][j];
}
matrix(matrix &ob){
r=ob.r;
c=ob.c;
int i,j;
a=new int*[r];
for(i=0;i<r;i++)
a[i]=new int[c];
for(i=0;i<r;i++)
for(j=0;j<c;j++)
a[i][j]=ob.a[i][j];
}
matrix operator+(matrix &ob1){
matrix ob3=ob1;
int i,j;
for(i=0;i<ob1.r;i++)
for(j=0;j<ob1.c;j++)
ob3.a[i][j]=ob1.a[i][j]+a[i][j];
return ob3;
}
matrix operator-(matrix &ob1){
matrix ob3=ob1;
int i,j;
for(i=0;i<ob1.r;i++)
for(j=0;j<ob1.c;j++)
ob3.a[i][j]=a[i][j]-ob1.a[i][j];
return ob3;
}
};
bool operator==(matrix &a,matrix &b){
if(a.r==b.r && a.c==b.c) return true;
return false;
}
ostream& operator<<(ostream& o,matrix &m){
int i,j;
for(i=0;i<m.r;i++){
for(j=0;j<m.c;j++)
cout<<m.a[i][j]<<" ";
cout<<endl;
}
return o;
}
int main(){
matrix m1,m2;
matrix m3=m1;
matrix m4=m1;
if(m1==m2){
cout<<"Compatible\n";
m3=m1+m2;
m4=m1-m2;
cout<<"Sum matrix is\n"<<m3<<"Subtract is \n"<<m4;
}
else
cout<<"Incompatible\n";
return 0;
}
