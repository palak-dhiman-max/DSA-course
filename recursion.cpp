# include <iostream>
using namespace std;

// finding factorial using recursion 

/*int factorial (int n){
 //base case
 if (n==1){
    return 1;
 }

 // recursive code
 return n*factorial(n-1);
}

int main (){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
int result = factorial(n);
cout<<result;
}*/

// print nth fibonnaci using recursion 

/*int fib(int n){
    // base case
    if (n==0 || n==1){
        return n;
    }

    return fib(n-1)+fib(n-2);
}


int main (){
        int n;
    cout<<"enter n"<<endl;
    cin>>n;
int result = fib(n);
cout<<result;
}
*/
// find sum of the number of a given integer n recursively

/*int sum (int n){
    if (n>=0&&n<=9){
        return n;
    }
    return (n%10)+sum(n/10);
}

int main (){
            int n;
    cout<<"enter n"<<endl;
    cin>>n;
int result = sum(n);
cout<<result;
}*/

// find p to the power q recurcively
/*int powerFinder(int p,int q){
    
if (q==0){
    return 1;
}
return p*powerFinder(p,q-1);
}

int main (){
            int p;
            int q;
    cout<<"enter p and q"<<endl;
    cin>>p>>q;
int result = powerFinder(p,q);
cout<<result;
}*/

//more optimised solution of above question 
 /*int powerFinderOptimised(int p, int q){
    if (q==0){
        return 1;
    }

    if(q%2==0){
        int result = powerFinderOptimised(p,q/2);
        return result*result;
    }else{
        int result = powerFinderOptimised(p,(q-1)/2);
        return p*result*result;
    }
 }
int main (){
                int p;
            int q;
    cout<<"enter p and q"<<endl;
    cin>>p>>q;
int result = powerFinderOptimised(p,q);
cout<<result;
}
*/
// recursion on arrays

// print all the elements of array using recursion

/*void printArray(int arr[],int i){

    
    if(i==6){
        return;
    }
    cout<<arr[i]<<" ";
    printArray(arr,i+1);
}
int main (){
    int arr[]= {1,2,9,4,5,6};
    
    printArray(arr,0);
}*/

// print sum of array recursively
/*
int printSum(int arr[],int i){
    int ans=0;
    if(i==5){
        return arr[i];
    }
    
    return  arr[i]+printSum(arr,i+1);
}
int main (){
    int arr[]= {1,2,9,4,5,6};
    
   cout<< printSum(arr,0);

}*/

// find max element from array recursively
/*int findMax(int arr[],int i){

    if(i==4){
        return arr[i];
    }
    return max(arr[i],findMax(arr,i+1));
}
int main (){
    int arr[] = {4,2,89,8,3};
    cout<<findMax(arr,0);
}
*/
// another aaproch of similar question 
/*int findMax(int arr[],int i){
    if(i==4){
        return arr[i];
    }
    int restMax = findMax(arr,i+1);
    if(arr[i]>restMax){
        return arr[i];
    }else{
        return restMax;
    }
}
int main (){
    int arr[] = {4,2,89,90,3};
    cout<<findMax(arr,0);
}*/

//remove all the occurence of 'a' from string s ="abcax".
/*string removeOccA(string &str ,int i){
  
    if(i==str.size()){
        return "";
    }
  string test ="";

    if(str[i]!='a'){
        test = str[i];
    }
    return test+removeOccA(str,i+1);
}
int main (){
    string str= "abcax";
    cout<<removeOccA(str,0);
}*/

// check whether integer is palindrom or not recursively
/*int palindrom(int num,int reverse){
    if(num==0){
        return reverse;
    }
    // recursive code
    reverse = reverse*10+num%10;
    return palindrom(num/10,reverse);
}
int main (){
    int num = 126821;
    if(num==palindrom(num,0)){
        cout<<"yes palindrom";
    }else{
        cout<<"not palindrom";
    }
}*/

// given a number n, find increasing sequence from 1to n without using any loop
/*void findSequence(int n){
    if(n<=0){
        return;
    }
    findSequence(n-1);
    cout<<n<<" ";
}
int main (){
    int n= 5;
    findSequence(n);
}
*/

// given a number num and value k , print k multiple of num
/*void findMultiple(int num,int k){
    if(k==0){
        return;
    }
    findMultiple(num,k-1);
    cout<<(num*k)<<" ";
}
int main (){
    int num= 5;
    findMultiple(8,7);
}*/

// given a number n find sum of natural number till n but with alternate signs
/*int findSum(int n){
    if(n==0){
        return 0;
    }
    int result;
    if(n%2==0){
        result = -n;
    }else{
        result = n;
    }
    return result + findSum(n-1);
}
int main (){
    int n = 5;
  cout<<findSum(n);
}*/