#include<iostream>
using namespace std;

class ABC{
    public:
    void setprotmemb(int i){
        m_protememb=i;}
        void dispaly(){
            cout<<m_protememb<<endl;}
            protected:
            int m_protememb;
            void protfunc(){
                cout<<"\n Acess allowed";}
            
};
class XYZ:public ABC{
    public:
    void useprotfunc(){
        protfunc();}
    
};
int main()
{
    ABC a;
    XYZ x;
    a.m_protememb;
    return 0;
}