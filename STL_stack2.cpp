#include<bits/stdc++.h>
#include<stack>
using namespace std;


/*void show(stack<int>s2){

    while(!s2.empty())
    {
    cout<<s2.top()<<endl;
    s2.pop();
    }
  
}*/
void show(stack<int>s2){
    stack<int>s3;
    while(!s2.empty()){
        s3.push(s2.top());
        s2.pop();
    }

    while(!s3.empty())
    {
    cout<<s3.top()<<endl;
    s3.pop();
    }
}
int main(){
    stack<int>s1;
    for(int i=0;i<=10;i++){
        s1.push(i);

    }
    cout<<s1.size()<<endl;
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    show(s1);
}