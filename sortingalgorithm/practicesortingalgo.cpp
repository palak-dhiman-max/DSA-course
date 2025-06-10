# include<iostream>
using namespace std;


int main (){

    // ques-> sort an array by moving all the zeros at end

  /*  int arr[100];
    int n;
    cout<<"enter size of array:";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<n;i++){
       bool sorted=0;
        for(int j=0; j<n-1; j++){
if(arr[j]==0 && arr[j+1]!=0){
    swap(arr[j],arr[j+1]);
   
}
sorted=1;
        }
 if(sorted==0){
    break;
 }
    }

    for(int i=0; i<n; i++){
       cout<<arr[i];
    }
*/
    string arr[]={"apple","kiwi","mango","watermelon","melon"};
    for(int i=0; i<4; i++){
        int min_indx=i;
        for(int j =i+1; i<5;j++){
            if(strcmp(arr[j],arr[min_indx])){
                min_indx=j;
            }
        }strcopy(swap(arr[i],arr[min_indx]>0));
    }
for(int i=0; i<5; i++){
    cout<<arr[i];
}

}

