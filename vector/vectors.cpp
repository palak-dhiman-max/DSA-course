# include <iostream>
# include<vector>
using namespace std;
int main (){
  // vectors are dynamic arrays in which we can resize or delete the elements from array
// vectorname . size()- length of vector
// vectorname . capacity() - capacity of vector
// capacity of vector is always greater than size and it is usually compiler dependent


 /*declaration of vector syntax (vector<data type> vector name>)
 and include class vector as written above*/
 // vector name .push_back()is used to push the elements in vector at end and (dont cout it)
 // pop_back is used to delete the element in vector from last (dont cout it)
 // resize() is used to change size of vector (dont cout it)
 // insert(v.begin()+2,5) this will insert element at particular position where v is name of vector(dont cout it)
 // or insert(v.end()-2,1) this will insert the value from last (dont cout it)
 // erase()is used to remove an element from particular position syntax is same as that of insert (dont cout it)
 //clean()is remove all the elements (dont cout it)
 //begin() will tell the starting element and end() will tell the ending element
 vector <int > v;
cout<<"size :"<<v.size()<<endl;
cout<<"capacity :"<<v.capacity()<<endl;

v.push_back(1);
cout<<"size :"<<v.size()<<endl;
cout<<"capacity :"<<v.capacity()<<endl;

v.push_back(2);
cout<<"size :"<<v.size()<<endl;
cout<<"capacity :"<<v.capacity()<<endl;

v.push_back(3);
cout<<"size :"<<v.size()<<endl;
cout<<"capacity :"<<v.capacity()<<endl;



v.push_back(4);
cout<<"size :"<<v.size()<<endl;
cout<<"capacity :"<<v.capacity()<<endl;

v.push_back(8);

cout<<"size :"<<v.size()<<endl;
cout<<"capacity :"<<v.capacity()<<endl;
// looping in vector(when size of vector is defined)
vector <int> v1(5);

for(int i = 0;i<v1.size();i++){
  cout<<"enter the elements"<<endl;
    cin>>v1[i];
}

for(int i = 0; i<v1.size();i++){
  cout<<v1[i]<<" ";
}cout<<endl;
int i = 0;
while(i<v1.size()){
  cout<<v1[i]<<" ";
  i++;
}
cout<<endl;
for(int element : v1){
  cout<<element<<" ";

  // looping in vector when size of vector is not defined

vector<int> v2;
for(int i = 0;i<7;i++){
int element9 ;
cin>>element9; 
v2.push_back(element9);

}
  // inserting element in vector//v2.insert(v2.end()-4, 9);
 // erasing element from vector //v2.erase(v2.begin()+2);
for(int i = 0;i<v2.size();i++){
  cout<<v2[i]<<" ";
}

// question - find the  occurence (how many time it is present in vector)of an element x in a given vector.
int element6 ;
cout<<"enter your element x :"<<endl;
cin>>element6;
int count = 0;

vector <int > v3(5);
for(int i = 0; i<v3.size();i++){
  cout<<"enter your vector element :"<<endl;
  cin>>v3[i];
}

for(int i = 0; i<v3.size() ; i++){
  if(element6 ==v3[i]){
    count = count+1;
  }
}cout<<" occurence of element x is equal to :"<<count<<endl;

// question- find the last occurence of a element x in a given vector
int element1 ;
cout<<"enter your element x :"<<endl;
cin>>element1;
int occurence;

vector <int > v4(5);
for(int i = 0; i<v4.size();i++){
  cout<<"enter your vector element :"<<endl;
  cin>>v4[i];
}
for(int i = 0; i<v4.size() ; i++){
  if(element1 ==v4[i]){
    occurence = i;
  }
}cout<<"last occurence of element is at index: "<<occurence;

// question - count the number of elements strictly greater than value of x
int element2 ;
cout<<"enter your element x :"<<endl;
cin>>element2;
int occurence = 0;
int i;
vector <int > v5(7);
for( i = 0; i<v5.size();i++){
  cout<<"enter your vector element :"<<endl;
  cin>>v5[i];
}
for( i = 0; i<v5.size() ; i++){
  if(v5[i]>element2){
    occurence = occurence+1;
  }
}cout<<"number of elements stricly greater than x: "<<occurence<<endl;

// check if the given array is sorted or not

int arr[] = {1,5,6,7,8,10};
string sorted = "true sorted";

for(int i = 1; i<6;i++){
  if(arr[i] <= arr[i-1]){
sorted = "false sorted";
  }
}
cout<<sorted;
} 

// find the difference between the sum of elements at even indices to sum of element at odd indices

int arr1 [] = { 1,4,6,7,9,6,4};
int sum1 = 0;


for(int i =0; i<=7;i++){
  if(i%2==0){
    sum1 = sum1 + arr1[i];
  }
  else{
    sum1 = sum1 - arr1[i];

  }


cout<<sum1 <<endl;
}
}