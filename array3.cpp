# include <iostream>
# include<vector>

using namespace std;
int main(){
    //sort an array consist of zeros and ones
int n;
cin>>n;
    vector<int > vec1(n);
    for(int i=0; i<n;i++){
        cin>>vec1[i];
    }
    int zero_count = 0;
    for(int i=0 ; i<n;i++){
        if(vec1[i]==0){
            zero_count++;
        }
    }

for(int i=0;i<n; i++){
    if(i<zero_count){
        vec1[i]=0;
    }
    else{
        vec1[i]=1;
    }
}

for(int i =0; i<n;i++){
    cout<<vec1[i]<<" ";

}}



