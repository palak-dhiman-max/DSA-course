# include <iostream>
# include<vector>

using namespace std;
int main(){
    //sort an array consist of zeros and ones
/*int n;
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

}
*/
// similar above question by tow pointer aaproach
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


}

