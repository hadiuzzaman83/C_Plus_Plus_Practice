#include<iostream>
#include<stdio.h>
#include<string>
#include<queue>
#include<vector>
#include<iterator>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    list<float>mylist;
    list<float>::iterator it;
    mylist.push_back(19);
    mylist.push_back(9);
    mylist.push_back(28);
    mylist.push_front(2);
    mylist.push_front(100);
    mylist.push_back(10);
    //sort(mylist.begin(),mylist.end());
    mylist.reverse();
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<"\t";
    }
    puts("");
    list<float>li(4,2);
    list<float>::iterator t;
    for(t=li.begin();t!=li.end();t++){
        cout<<*t<<"\t";
    }

    return 0;

}

