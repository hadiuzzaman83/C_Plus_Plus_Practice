#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <string> s;
    s.push("Sajib");
    s.push("Nabil");
    s.push("Kamal");
    s.pop();
    cout<< s.top()<<endl;
     while(!s.empty()){
         string x;
         x=s.top();
         cout<< x<< endl;
         s.pop();

     }


    return 0;
}
