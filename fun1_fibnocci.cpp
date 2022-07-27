#include<bits/stdc++.h>
using namespace std;
void fib(int n){// void means it indicates that the function does not return a value. 
    int t1=0;
    int t2=1;
    int nxt_term;
    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        nxt_term=t1+t2;
        t1=t2;
        t2=nxt_term;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}