# include <iostream>
using namespace std ;
//int main (){
    // create a pointer that can store address of x and y where x is int and y is float variable
    //int x=8;
    //float y = 7.8;

    //int *ptr = &x;
   // float *ptr1 = &y;
   // cout<<ptr<<" "<<ptr1;

    // add tow number using pointer

    /*int x = 4;
    int y =5;
    int result ;
    int *ptr= &x;
    int *ptr1= &y;*/
  //  result = *ptr + *ptr1;
    //cout<<result<<" ";

// find address of pointer (itself)
//cout<< &ptr<<" ";
//cout<<&x;

// call by reference
/*void swap(int *x1,int *y1){
    int temp = *x1;
    *x1=*y1;
    *y1=temp;
}
int main (){
int x1= 10;
int y1=20;
int *p1=&x1;
int *p2=&y1;
swap(p1,p2);
cout<<x1<<" "<<y1;
}
   }*/

  // for a given string aabca return index of the first and last occurence of a
 /* void firstAndLastIndexChecker(string str,char ch,int *first,int *last){
        
for(int i=0; i<str.size(); i++){
  if( str[i] == ch){
*first = i;
break;
  }
}
for(int i=str.size(); i>=0; i--){
  if( str[i] == ch){
*last= i;
break;
  }
}
  }
  int main(){
    string str = "aabca";
    char ch = 'a';
    int first = -1;
    int last = -1;
    int *ptr1 = &first;
    int *ptr2 = &last;
    firstAndLastIndexChecker(str,ch,ptr1,ptr2);
    cout<<*ptr1<<" "<<*ptr2<<endl;
    cout<<first<<" "<<last;
  }*/

 /*int main (){
  // pointers airthmetic
  int x = 4;
   int *ptr = &x;
   cout<<ptr<<" "<<(ptr+1)<<" "<<(ptr +2)<<endl;
   // usecase of this pointer airthmetic
   int arr[]= {1,19};
   int *ptr1 = &arr[0];
   cout<<ptr1<<" "<<*ptr1<<" "<<(ptr1+1)<<" "<<*(ptr1+1)<<endl;
   

   // another syntax
   //*ptr1++;
   // here ther is right to left computation 
   //post increment
   cout<<*ptr1++<<endl;
   cout<<*ptr1<<endl;


// update array using pointers (as we know array are immutable
// but we can change it using pointers)
int ar[] = {2,4};
int *pt= &ar[0];
cout<<(*pt)++<<endl;
cout<<ar[0]<<endl;;

// pre increment 
int a1[] = {8,5};
int *p= &a1[0];
cout<<*++p<<endl;

// another case in order to update an array
int b[] = {3,8};
int *a = &b[0];
cout<<++*a<<endl;

// arrays as pointers
int arr3[]={1,2,3,4};
int *p1=&arr3[0];
cout<<arr3<<" "<<p1<<endl;
// array name is act as a pointer in which there is an address stored which is of arr3[0]

// dereferencing 
cout<<*p1<<" "<<*arr3<<endl;
cout<<*(p1+1)<<" "<<*(arr3+1)<<endl;

// printing all the elements of array through loop using pointers and
// it is a kind of another syntax

for(int i=0; i<4; i++){
  cout<<*(arr3+i)<<endl;
}
 }*/
// call by refernce by making function
/*void process(int *arr , int n){

for(int i=0; i<n; i++){
  cout<<*(arr+i)<<endl;
}

//updating value
*(arr+1) = 33;
 
}

 int main (){
  int arr [3] = {1,2,3};
  process(arr,3);

  // updated array
  for(int i=0; i<3; i++){
  cout<<*(arr+i)<<endl;
}



 }*/

// another usecase
/*int main (){
  int arr []= {3,2,4,5};
  int *ptr = (arr+2);
  cout<<*ptr<<endl;
  *ptr++;
  cout<<*ptr<<endl;
  *ptr--;
  cout<<*ptr;*/

  


// question practice
   // Increment num variable by 5 with the help of Pointer p
   // Don't do num = num+5;
   // Try to change it with the help of *p
int main()
{
  /* int num = 10;
   int *p = &num;
   *p +=5;
   cout<<*p<<endl;

    //Day 64/180 Pointers Arithmetic

//1: Print the address of the first index of the char array in c++.
char arr []= {'a','b','c'};
char *ptr =(arr+1);    //or &arr[1]
cout<<ptr<<endl;

//2: Print the address of the char variable in c++.

char ch = 'a';
char *pt = &ch;
cout<<pt<<endl;

//3: Print the address of String in c++.
string str = "hello";
string *pt1 = &str;
cout<<pt1<<endl;
cout<<str<<endl;

//4: Given an array in c++
int arr1[5] = {1,2,3,4,5};
//What is the difference between arr and &arr. Try to explore it on your own.
cout<<arr1<<" "<<&arr1<<endl; // we get same address by both
//difference is arr that points to only first element address
//but &arr points to entire array adress

//question 5
 int arr8[5] = {1,2,3,4,5};
 // Create a pointer which will store the address of the last element. 
 //Then print all the elements from the last index to 0th index with the help of a pointer.
int *p8 = &arr8[5];

for (int i=5; i>=0;i--){
  cout<<*p8<<endl;
  p8--;
}*/

//  types of pointer
// wild pointer
int *p9 ;
//cout<<p9<<endl; // we get an random address

// null pointer
int *i = NULL;
//cout<<i;
//if we derefernce it 
//cout<<*i<<endl; // we get nothing so we cannnot derefernce it.

// dandling pointer
int *q = NULL;
{
  int x = 12;
  q=&x;
  
}
//cout<<q<<endl;
//cout<<*q;
// we cannot access x outside its scope but using pointer we can easily access its value 
// because we have its address.

// void pointer
int o = 34;
float k = 23.9;
void *kl = &k;
//cout<<kl<<endl;
kl= &o;
//cout<<kl<<endl;

// type casting
int *integerPointer = (int*)kl;
cout<<*integerPointer<<endl;

}