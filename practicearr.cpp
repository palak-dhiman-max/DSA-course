
# include<iostream>
using namespace std;

/*float sumofinput(float arr[],int n,float sum){
    int i;
    for(int i=0; i<n; i++){
sum = sum+ arr[i];}
return sum;
    }*/
// mean deviation 

int swap1(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    return x,y;
}
int main (){
/*int n;
cout<<"enter size ";
cin>>n;
 float sum;
float average;
float sum1;
float meandeviation;
    float arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
 sum =sumofinput(arr,n,0);
    average = sum/n;

    float arr1[n];
    for(int i=0; i<n; i++){
float result= arr[i]-average;

if(result<0){
    arr1[i]=-result;
}else{
    arr1[i]=result;
}


    }
    for(int i=0; i<n; i++){
        cout<<arr1[i]<<endl;
    }

   sum1= sumofinput(arr1,n,0);
cout<<sum1;
meandeviation=sum1/n;
cout<<" mean deviation is equal to -> "<<meandeviation;

// median
int n;
cin>>n;
float median;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
for(int i=0; i<n; i++){
    for(int j=i+1; j<=n; j++){
if(arr[i] > arr[j]){
    swap1(arr[i],arr[j]);
}
    }
}

for(int i=0; i<n; i++){
    cout<<arr[i]<<endl;
}

// for odd numbers

    if(n%2!=0){
        median = arr[n/2];
    }
else{
    // for even number

    median = (arr[n/2] + arr[(n-1)/2])/2.0;
}

cout<<median<<endl;
*/
// mode
int n;
cin>>n;

int arr[n];
int arr1[n];
int count =1;
int count1 =1;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
for(int i=0; i<n; i++){

  
    for(int j=i+1; j<=n; j++){
        if(arr[i]==arr[j]){
            count ++;
        }
if(j==n){
    count =1;
}


        if(j==(n-1)){
            arr1[i]=count;
        }
       
    }
    count=1;

}

for(int i=0; i<n; i++){
    cout<<arr1[i]<<endl;

}


}