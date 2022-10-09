#include<iostream>
using namespace std;
 
double factorial(int n){
       int t1=0;
    int t2=1;
    int nextTerm;
    for(int i=0;i<=n;i++){
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;

    }
    return;
}

//Driver Code
int main()
{   
    int n;
    cout<<"Enter the nth number= ";
    cin>>n;
    fibb(n);
}
