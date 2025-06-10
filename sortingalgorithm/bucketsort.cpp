 #include <iostream>
 # include <vector>
 # include <algorithm>
 using namespace std;

void bucketsort(float arr[],int n){

vector <vector <float>> bucket(n,vector<float>());

// inserting elements in bucket
int indx;
for(int i=0; i<n; i++){
indx = arr[i]*n;
bucket[indx].push_back(arr[i]);
}

// sorting them
for(int i=0; i<n; i++){
  if(!bucket[i].empty()){
    sort(bucket[i].begin(),bucket[i].end());
  }
}
int k=0;
// combining them in order to sort
for(int i=0; i<n ; i++){
    for(int j=0; j<bucket[i].size();j++){
        arr[k++]=bucket[i][j];
    }
}


}

 int main (){
int n;
cout<<"enter size of array :";
cin>>n;
float arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
bucketsort(arr,n);
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
 }