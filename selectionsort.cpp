# include<iostream>
# include<vector>
using namespace std ;

// sorting using selection sort
void selectionsort(vector<int> &v){
    // firstly we will find minimum element
    int n = v.size();
    
   
    for(int i=0; i<n-1;i++){
        int min_indx =i;
        for(int j=i+1; j<n; j++){
if(v[j]<v[min_indx]){
    min_indx=j;
}

        }
        swap(v[i],v[min_indx]);

    }
}
int main (){
    int n;
    cout<<"enter size of vector";
    cin>>n;
vector<int>v(n);
for(int i=0; i <v.size();i++){
    cin>>v[i];
}
selectionsort(v);
for(int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
}
}



// sort using selection sort but find maximum element and then put it at end
void selectionsort(vector<int>&v1){
     //   0 1 2 3 4
int n; // 5 7 6 3 2 
n=v1.size();
    for(int i=n-1; i>0;i--){
        int max_indx = i;
        for(int j=i-1 ;j>=0 ;j--){
            if(v1[j]>v1[max_indx]){
                max_indx=j;
            }
        }
        swap(v1[max_indx],v1[i]);
    }

}
int main (){
    cout<<" enter size of vector:";
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i=0; i<v1.size();i++){
        cin>>v1[i];
    }

selectionsort(v1);

    for(int i=0; i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}


// sort character array
void selectionsort(vector<char>&v1){
    //   0 1 2 3 4
int n; // 5 7 6 3 2 
n=v1.size();
   for(int i=n-1; i>0;i--){
       int max_indx = i;
       for(int j=i-1 ;j>=0 ;j--){
           if(v1[j]>v1[max_indx]){
               max_indx=j;
           }
       }
       swap(v1[max_indx],v1[i]);
   }

}
int main (){
   cout<<" enter size of vector:";
   int n;
   cin>>n;
   vector<char> v1(n);
   for(int i=0; i<v1.size();i++){
       cin>>v1[i];
   }

selectionsort(v1);

   for(int i=0; i<v1.size();i++){
       cout<<v1[i]<<" ";
   }
}
