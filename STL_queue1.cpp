#include<bits/stdc++.h>
using namespace std;

void show(queue<string>tempq){
    while(!tempq.empty()){
        cout<<tempq.front()<<endl;
        tempq.pop();
    }
}
void show2(queue<int>tempq){
    while(!tempq.empty()){
        cout<<tempq.front()<<endl;
        tempq.pop();
    }
}

int main(){
    queue<string>q;
    q.push("Sajib");
    q.push("Kalam");
    q.push("Jamal");
    q.push("Tamim");
    

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    show(q);

    queue<int>q2;
    for(int i=0;i<=10;i++){
        q2.push(i);
    }
    show2(q2);
}