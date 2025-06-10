 # include <iostream>
 using namespace std;
 int main (){
    int n;
   
    cout<<"enter size of array :";
    int max;
     cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

   max = arr[0];
    for(int i=0; i<n; i++) {
     
        if(arr[i]> max){
            max =arr[i];
        }
    }

    cout<<max<<endl;
    //making frequency array
   int count[max +1]={0};

    //traversing in arr[]
    int i=0;
    int j=0;
while(i<n){
    if(arr[i] !=j){
        j++;
    }
    if(arr[i]==j){
        count[j]++;
        i++;
        j=0;
    }
    
}

//for(int i=0; i<max+1; i++){
 //   cout<<count[i]<<" ";
//}
// copy in main array
   i=0;
  int k=0;

while(i<max+1){
if(count[i]==0){
    i++;
}

if(count[i]!=0){
    count[i]--;
    arr[k++]=i;
}
}

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
  
 }