 #include<iostream>
 #include<vector>
 using namespace std;
 // prefix sum problem - given an array a return the prefix sum in same array without using 
 // extra memory
/*int n;
void prefixSum(vector <int> &v){
for(int i=1; i<n;i++){
    v[i]= v[i-1] + v[i];
}

}

 int main (){
    cout<<"enter size of vector :"<<endl;
    cin>>n;
vector <int> v(n);
for(int i=0; i<n;i++){
    cin>>v[i];
}
prefixSum(v);

for(int i=0; i<n;i++){
    cout<<v[i]<<" ";
}
 }


 //check if we can partition the array into tow sub arrays with equal sum . more formallay check
 // that prefix sum of a part of the array is equal to suffix sum of the array
int n;
 void partitionArrayChecker(vector <int> &v1){
    // calc total sum 
    int totalSum = 0;
    int prefix=0;
    int suffix;
    for(int i=0; i<n;i++){
        totalSum = totalSum +v1[i];
    }
    // calc prefix sum
    for(int i=0; i<n;i++){
        v1[prefix]= v1[i-1]+ v1[prefix];

        //calc suffix sum
suffix = totalSum- v1[prefix];

if(v1[prefix]==suffix){
    cout<<"yes we can do partition"<<endl;
    break;
}else{
    cout<<"we cant do partition"<<endl;
    break;
}
    }

 }

 int main(){
       cout<<"enter size of vector :"<<endl;
    cin>>n;
vector <int> v1(n);
for(int i=0; i<n;i++){
    cin>>v1[i];
}
partitionArrayChecker(v1);


 }*/

 //given an array of size n ,integer array.answer q queries whereyou need to print the sum of values in given 
 // range of indicesfrom l to r both  included and point to be note that l an r have 1 based indexing



int main(){
    int n;
     cin>>n;
    vector<int>v2(n+1,0);
    for(int i=1; i<=n;i++){
        cin>>v2[i];
    }
    for(int i=1; i<=n;i++){
        v2[i]+= v2[i-1] ;
    }
     for(int i=1; i<=n;i++){
        cout<<v2[i]<<" ";
    }
cout<<"enter queries"<<endl;
int q;
cin>>q;

while(q--){
    int r;
    int l;
    cin>>r>>l;
    int sum=0;
    sum = v2[r] - v2[l-1];

cout<<"sum is equal to:"<<sum<<endl;
}
}
