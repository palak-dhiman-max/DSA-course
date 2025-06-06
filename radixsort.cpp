 # include <iostream>
 using namespace std;
 void countsort(int arr[],int n,int pos){

 //making frequency array
   int count[10]={0};

    //traversing in arr[]
    int i=0;
    int j=0;
while(i<n){
    if((arr[i]/pos)%10 !=j){
        j++;
    }
    if((arr[i]/pos)%10 ==j){
        count[j]++;
        i++;
        j=0;
    }
    
}


// update our count frequency array
  for(int i=1; i<=10 ; i++){
count[i]=count[i]+count[i-1];
  }



  // main logic
  int idx;
  int idx1;
  int ans[n];
  for(i=n-1;i>=0; i--){
idx = (arr[i]/pos)%10 ;
idx1= --count[idx];
ans[idx1]=arr[i];
  }



  //copy elements of ans in main array arr[]
for(int i=0; i<n; i++){
    arr[i] = ans[i];
    
}
  
 }
 int main (){
    int n;
    int pos;
    int max;
    cout<<"enetr size of array :";
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
   

    for(int pos=1; max/pos>0 ;pos=pos*10){
    countsort(arr,n,pos);
}

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
 }