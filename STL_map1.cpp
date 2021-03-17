#include<iostream>
#include<map>
#include<iterator>

using namespace std;
int main(){
    map<string,int> m;
    map<string,int>::iterator it;


    m["Dipta"]=45;
    m["Arnob"]=50;
    m["Sajib"]=60;
    m.insert(make_pair("Jamal",80));
    //it=m.begin();
   // it++;

    //cout<<it->second<<endl;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;

}