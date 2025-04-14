# include<iostream>
using namespace std;
int main (){
   /* char arr[]={'a','p','p','l','e'};
    for(int i=0; i<5; i++){
        cout<<arr[i];
    }
cout<<endl;*/
  /*  int n;
    cin>>n;
   char arr[n];
   
    for(int i=0; i<n;i++){
        cin>>arr[i];
     cout<<arr[i];}
   

char arr1[10];
cin>> arr1;
cout<<arr1;

 
  // because i have to declare the size 
    // so that why we introduce strings

    string s = "tonny stark is ironman";
    cout<<s;
    cout<<endl;
*/
    // input from user
   // string str;
   // cin>>str;
   // cout<<str;

    // we use a function get line
 /* getline(cin,str);
cout<<str<<endl;

cout<<str.size()<<endl;

string str1="tarun ";
string str2 ="silky";
cout<<str1+str2<<endl;;
cout<<str1.append(str);

string st;
cin >>st;
st.push_back('k');
cout<<st;

// another approach
string d;
cin>>d;
cout<<d+"palk";

// remove



//escape char
string p;
string t="rohit \"negi is pro\" in web dev";
cout<<t;
string s="\\";
cout<<s;

//ques reverse string
string str="palak";
for(int i=str.size()-1; i>=0; i--){
    cout<<str[i];
}

// ques find size without using s.size()
string str1;
getline(cin,str1);
int count=0;
int i=0;
while(str1 [i]!='\0'){
    count ++;
    i++;
}
cout<<count;

// palindrom string
string str3;
cin>>str3;
int l=0;
int check =0;
int r =str3.size()-1;
while(str3[l] != str3[r]){
if(str3[l]==str3[r]){
    check ++; 
   l++;
   r--;
}

}
cout<<check;
if(check==str3.size()/2){
    cout<<"palindrome";
}else{
    cout<<"not palindrome";
}


string str1="hello";
//cout<<str1.substr(0,3);

// make substring without using built in function

int n,m;
if(n!= str1.size() && m!= str1.size() ){
cin>>n>>m;}
string str;
for(int i=n; i<m;i++){
    str = str + str1[i];
}
cout<<str;


// sorting given string
string str;
cin>>str;
for(int i=0; i<str.size();i++){
    for(int j=i+1; j< str.size(); j++){
        if(str[i]>str[j]){
            swap(str[i], str[j]);
        }
    }
}cout<<str;
*/


}