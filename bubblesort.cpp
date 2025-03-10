# include  <iostream>
# include <vector>
using namespace std;

// question sort an array using bubble sort algorithm.
void bubbleSort(vector<int>&v){
    int n = v.size();
    for(int i=0; i<n-1;i++){
        for (int j=0; j<n-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}
int main (){

    cout<<"enter size of vector";
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<v.size();i++){
        cin>>v[i];
    }
    bubbleSort(v);

    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}


// question # optimised solution sort an array using bubble sort algorithm for a nearly sorted array.
void bubbleSort(vector<int>&v){
    int n = v.size();
    bool flag=false;
    for(int i=0; i<n-1;i++){
        for (int j=0; j<n-1-i;j++){
            if(v[j]>v[j+1]){
                bool flag = true;
                swap(v[j],v[j+1]);
            }
        }
        if(flag==false){
            break;
        }
    }

}
int main (){

    cout<<"enter size of vector";
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<v.size();i++){
        cin>>v[i];
    }
    bubbleSort(v);

    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}