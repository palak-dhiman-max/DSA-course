#include<iostream>
using namespace std;
int main(){
    // print fibonacci series
    int n;
    cout<<"enter the number from where you want to print the seies:"<<endl;
    cin>>n;
    int n1 = 0;
    int n2 = 1;
    cout<<n1<<" "<<n2<<" ";

    int next_term ;
    for(int i =3; i<=n;i++){
           next_term = n1+n2;
        n1 = n2;
        n2 = next_term;
        
cout<<next_term<<" ";
    }
}