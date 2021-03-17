#include<iostream>
#include<stdio.h>
#include<iterator>
#include<set>
#include<vector>
#include<string>
using namespace std;
int main(){
    set<int>s;
    set<int>::iterator it;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(50);
    it=s.find(20);
    cout<<*it<<endl;
    s.erase(it);

    
    for(it=s.begin();it!=s.end();it++){

        cout<<*it<<"  ";
    }
    cout<<"\n";

    set<string>s2;
    set<string>::iterator it2;
    s2.insert("Ainul");
    s2.insert("Kalam");
    s2.insert("Hasan");
    s2.insert("Kabir");
    s2.insert("Kabir");
    pair<set<string>::iterator,bool>p;
    p=s2.insert("Kabir");
    if(p.second==true){
        cout<<"data is inserted"<<endl;

    }
    else{
        cout<<"data isn't inserted"<<endl;
    }
    for(it2=s2.begin();it2!=s2.end();it2++){

        cout<<*it2<<endl;

    }
    

    return 0;
}
