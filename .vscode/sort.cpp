# include<iostream>
# include <vector>
using namespace std;
/*int main (){
    // similar  question by tow pointer aaproach sort the array which consist zeros and ones
vector<int>v(5);
for(int i=0; i<5;i++){
    cin>>v[i];
    
}
int left_ptr =0;
int right_ptr=4;
while(left_ptr<right_ptr){
    if(v[left_ptr]==1 && v[right_ptr]==0){
        v[left_ptr++]=0;
        v[right_ptr--]=1;
    }
    if(v[left_ptr]==0){
        left_ptr++;
    }
    if(v[right_ptr]==1){
        right_ptr--;
    }
}
for(int i=0; i<5;i++){
    cout<<v[i]<<" ";
}

// sort array which consist of even and odd number
int n;
cout<<"enter size of vector:"<<endl;
cin>>n;
vector<int> v2(n);
for(int i =0; i<n;i++){
   cin>> v2[i];
}
int left_ptr =0;
int right_ptr=n-1;
while(left_ptr<right_ptr){

if(v2[left_ptr]%2!=0 &&v2[right_ptr]%2==0){
    swap(v2[left_ptr],v2[right_ptr]);
left_ptr++;
right_ptr--;
}
if(v2[right_ptr]%2==0){
    left_ptr++;
}
if(v2[right_ptr]%2!=0){
    right_ptr--;
}
}

for(int i= 0;i<n;i++){
    cout<<v2[i]<<" ";
}

// given an integer array a sorted in non decreasing order 
//return an  array of squares of each number sorted in non decresing order
// considering there are only positive elements in array
int n;
cout<<"enter size of vector;"<<endl;
cin>>n;

vector<int>v3(n);
for(int i =0; i<n;i++){
   cin>> v3[i];
}

for(int i=0; i<n;i++){
    
    v3[i]*=v3[i];
}

for(int i= 0;i<n;i++){
    cout<<v3[i]<<" ";
}

}*/
