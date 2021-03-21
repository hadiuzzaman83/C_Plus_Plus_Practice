#include<bits/stdc++.h>
//#define size 8
#include<bitset>
using namespace std;

int main(){
    //bitset<size>b(7);
    bitset<8>b(string("1100"));
    b[2]=0;
    b.set(0);
    b.reset(3);
    cout<<b<<endl;
    cout<<b[1]<<endl;
    cout<<b.size()<<endl;
    cout<<b.count()<<endl;
    cout<<b.size()-b.count()<<endl;
    if(b.any()){
        cout<<"True"<<endl;
    }
    else{
        cout<<"Flase"<<endl;
    }
    if(b.none()){
        cout<<"True"<<endl;
    }
    else{
        cout<<"Flase"<<endl;
    }
    b.flip();
    cout<<b<<endl;
    //b=b<<2;
    b<<=2;
    //b>>=1;
     cout<<b<<endl;

    bitset<4> a(string("0101"));
    bitset<4>c(string("1100"));
    cout<<(a == c)<<endl;
    cout<<(a & c)<<endl;
    cout<<(a | c )<<endl;
    cout<<(a ^ c)<<endl;



    return 0;
}