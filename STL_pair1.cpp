#include<iostream>
#include<stdio.h>
#include<iterator>
#include<utility>
#include<vector>
using namespace std;
int main(){

    pair<string,int>p;
    p.first="Nabil";
    p.second=21;
    cout<<p.first<<" "<<p.second<<endl;

    vector<pair<string,int>>v;
    vector<pair<string,int>>::iterator it;

    v.push_back(make_pair("Jamal",44));
    v.push_back(make_pair("Ankus",20));
    cout<<v[0].first<<endl;

    for(it=v.begin();it!=v.end();it++){

        cout<<it->first<<" "<<it->second<<endl;;

    }


    return 0;
}