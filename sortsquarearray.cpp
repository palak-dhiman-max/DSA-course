# include <iostream>
# include<vector>
# include<algorithm>
using namespace std;
int n;
void sortedSquareArray(vector<int> &v){
int left_ptr=0;
int right_ptr = v.size()-1;

  vector <int> v1;
//100,4,9,16
while(left_ptr<=right_ptr){
    if(abs(v[right_ptr])>abs(v[left_ptr])){
        v1.push_back(v[right_ptr]*v[right_ptr]);
        right_ptr--;
    }
    else{
        v1.push_back(v[left_ptr]*v[left_ptr]);
        left_ptr++;
    }

    
}

reverse(v1.begin(),v1.end());
for(int i= 0;i<n;i++){
    cout<<v1[i]<<" ";
}
}

int main(){
    
    cout<<"enter size of vector:"<<endl;
    cin>>n;
    vector<int>v(n);
  
for(int i =0; i<n;i++){
   cin>> v[i];
}
  sortedSquareArray(v);

    }


