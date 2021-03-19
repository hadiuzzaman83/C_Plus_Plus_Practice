#include<bits/stdc++.h>
using namespace std;
/*
//descending order
void showpq(priority_queue<int>tempq){
    while(!tempq.empty()){
        cout<<'\t'<<tempq.top();
        tempq.pop();
    }
    cout<<'\n';
}
void showpq2(priority_queue<int>tempq){
    while(!tempq.empty()){
        cout<<'\t'<<tempq.top();
        tempq.pop();
    }
}
//ascending order type-1
void showpq(priority_queue<int,vector<int>,greater<int> >r){
    priority_queue<int,vector<int>,greater<int> >t=r;
    while(!t.empty()){
        cout<<'\t'<<t.top();
        t.pop();
    }
    cout<<'\n';
}
*/
//ascending order type-2
struct compare
{
    bool operator()(const int& left,const int& right){
        return left>right;
    }
};
void showpq(priority_queue<int,vector<int>,compare >r){
    priority_queue<int,vector<int>,compare >t=r;
    while(!t.empty()){
        cout<<'\t'<<t.top();
        t.pop();
    }
    cout<<'\n';
}

int main(){
    //priority_queue<int>pq;
    //priority_queue<int,vector<int>,greater<int> >pq;
    priority_queue<int,vector<int>,compare>pq;
    pq.push(50);    
    pq.push(20);
    pq.push(30);
    pq.push(10);
    pq.push(40);
    cout<<"The Priority queue:";
    showpq(pq);

    cout<<"Priority queue size:"<<pq.size()<<endl;
    cout<<"top  elements:"<<pq.top()<<endl;
/*
//descending order
    pq.pop();
    cout<<"The modified Priority queue:";
    showpq2(pq);
*/  
   return 0;
}