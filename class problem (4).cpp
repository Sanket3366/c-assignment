#include<iostream>
using namespace std;

class A
{
    public:
    int i;
    
};
class b:virtual public A
{
    public:
    int j;
};
class c:public virtual A
{
    public:
    int k;
    
};
class d:public b,public c{
    public:
    int sum;
};
int main()
{
    d ob1;
    ob1.i=10;
    ob1.j=20;
    ob1.k=30;
    ob1.sum=ob1.i+ob1.j+ob1.k;
    cout<<ob1.sum;
}