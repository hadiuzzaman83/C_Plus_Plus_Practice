#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the number of row and column of Matrix: ";
    cin>>r>>c;
    int M[r][c];
    int N[r][c];
    int A[r][c];
    int S[r][c];
    cout<<"Enter the value of M Matrix"<<endl;
    for(int i=0;i<r;i++){
        if(i==0){
            cout<<"Enter the "<<i+1<<"st row: ";
        }
        else if(i==1){
            cout<<"Enter the "<<i+1<<"nd row: ";
        }
        else if(i==2){
            cout<<"Enter the "<<i+1<<"rd row: ";
        }
        else{
            cout<<"Enter the "<<i+1<<"th row: ";
        }
        for(int j=0;j<c;j++){
            cin>>M[i][j];
        }
    }
    cout<<"Enter the value of N Matrix"<<endl;
    for(int i=0;i<r;i++){
        if(i==0){
            cout<<"Enter the "<<i+1<<"st row: ";
        }
        else if(i==1){
            cout<<"Enter the "<<i+1<<"nd row: ";
        }
        else if(i==2){
            cout<<"Enter the "<<i+1<<"rd row: ";
        }
        else{
            cout<<"Enter the "<<i+1<<"th row: ";
        }
        for(int j=0;j<c;j++){
            cin>>N[i][j];
        }
    }
    cout<<"M Matrix be like: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<M[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"N Matrix be like: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<N[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            A[i][j]=M[i][j]+N[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            S[i][j]=M[i][j]-N[i][j];
        }
    }
    cout<<"Addition of Matrixs:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Subtraction of Matrixs:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<S[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}