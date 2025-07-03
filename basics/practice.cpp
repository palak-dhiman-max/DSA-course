# include <iostream>
using namespace std;
int main(){
 //count the number of digits in a given number
  int n;
    int num =0;
    cout<<"Enter your number"<<endl;
    cin>>n;
    while (n>0){
num++;
n = n/10;
    }cout<<num<<endl;

    // calculate percentage of five subjects
    float sub1 ,sub2, sub3, sub4 ,sub5;
    cout<<"Enter marks of subject first"<<endl;
    cin>>sub1;

        cout<<"Enter marks of subject second"<<endl;
    cin>>sub2;
        cout<<"Enter marks of subject third"<<endl;
    cin>>sub3;

   cout<<"Enter marks of subject fourth"<<endl;
    cin>>sub4;

    cout<<"Enter marks of subject fifth"<<endl;
    cin>>sub5;
    float percentage =( sub1+sub2+sub3+sub4+sub5)/5;
cout<<"percentage is equal to:"<<percentage<<endl;


//calculate area of circle
float radius ;
cout<<"Enter radius"<<endl;
cin>>radius;
float area = 3.14*radius*radius;
cout<<"Area of circle is equal to:"<<area<<endl;

//calculating simple interest 
int principal , rate ,time;
cout<<"Enter principal:"<<endl;
cin>>principal;
cout<<"Enter rate of interest: " <<endl;
cin>>rate;
cout<<"Enter time :"<<endl;
cin>>time;
int simple_interest =(principal*rate*time)/100;
cout<<"simple intersst is equal to:"<<simple_interest<<endl;

//how can you output "alpha and "intern" in tow different lines
// we can do so by using endl 

cout<<"Alpha "<<endl<<"intern "<<endl;

// how much space does the following data types take
//int - 4 bytes
//bool- 1 bytes
//float - 4 bytes

// write a program to find the circumfrence of a circle with radius 10
float radius2 = 10;
float circumfrence = 2*3.14*radius2;
cout<<"circumfrence is equal to:"<<circumfrence<<endl;

// take positive integer input and tell whether it is even or odd
int num2;
cout<<"Enter integer"<<endl;
cin>>num2;
if(num2%2==0){
    cout<<"Even number"<<endl;
}else{
    cout<<"odd number"<<endl;
}

//tell whether number is divisible by 5 or not
int dig ;
cout<<"Enter number"<<endl;
cin>>dig;
if(dig%5==0){
    cout<<"divisible by 5"<<endl;
}else{
    cout<<"Not divisible by 5"<<endl;
}

//given the radius of circle predict whether numerically area of circle is larger than  to circumfrence or not
cout<<"Enter radius :"<<endl;
float r;
cin >>r;
float pie = 3.14;  
  float area = pie*r*r;
float circumfrence = 2*pie*r;

if(area>circumfrence){
    
cout<<"Area is greater than circumfrence:"<<"area is equal to:"<<area<<"circumfrence is equal to:"<<circumfrence<<endl;

}else if(area<circumfrence){
    cout<<"area is equal to circumfrence"<<endl;
}else{
    cout<<"invalid"<<endl;
}

// tell if integer is a three digit number or not
cout<<"Enter integer: ";
int dig1;
cin>>dig1;
if(dig1>=100 &&dig1<=999){
    cout<<"It is a three digit number"<<endl;
}else{
    cout<<"Not a three digit number"<<endl;
}

//check if integer is divisible by 5 or 3

cout<<"Enter your number"<<endl;
int dig2;
cin>>dig2;
if(dig2%5==0 && dig2%3==0){
    cout<<"Divisible by 5 and 3"<<endl;
}else{
    cout<<"not divisible by 3 and 5"<<endl;
}

// take input three integer and find greater of them
int a,b,c;
cin>>a;
cin>>b;
cin>>c;
if(a>b && a>c){
    cout<<"a is greater"<<endl;
} else if(b>a && b>c){
    cout<<"b is greater"<<endl;
}else if ( c>a && c>b){
    cout<<"c is greater"<<endl;
}else{
    cout<<"invalid"<<endl;
}

//wap to check whether a character is an alphabrt or not
cout<<"Enter character"<<endl;
char  char1;
cin >>char1;
if((char1>='a'&&char1<='z') || (char1>='A' && char1<='Z')){
    cout<<"character is alphabet"<<endl;
}else{
    cout<<"not  an alphabet"<<endl;
}

//print absolute value of integer
cout<<"Enter integer"<<endl;
int dig3;
cin>>dig3;
if(dig3>=0){
    cout<<"absolute value is"<<dig3;
}else if(dig3<0){
    dig3 = - dig3;
    cout<<"absolute value is"<<dig3;
    }

    //find whether numerically the area of rectangle is greater than perimeter
    int length ;
    int breadth;
    cout<<"Enter length"<<endl;
    cin>>length;
cout<<"Enter breadth"<<endl;
cin>>breadth;
int area1;
int perimeter;
    area1 = length*breadth;
    perimeter = 2*(length+breadth);

if(area1 > perimeter){

    cout<<"area is greater then perimeter"<<endl;
}else if(area1<perimeter){
    cout<<"perimeter is greater" <<endl;
}else{
    cout<<"invalid"<<endl;
}

//check whether a triangle is equilateral scalene and isosceles
int side1 ,side2,side3;
cout<<"Enter side"<<endl;
cin>>side1;
cin>>side2;
cin>>side3;
if(side1==side2 && side1==side3 && side2==side3){
    cout<<"Equilateral triangle"<<endl;
}else if(side1==side2 || side1==side3 ||side2==side3){
    cout<<"Isosceles triangle"<<endl;
}else if(side1!=side2 && side2!=side3 &&side1!=side3){
    cout<<"scalene triangle"<<endl;
}else{
    cout<<"invalid"<<endl;
}

//check whether the tow given points x and y are lies on x axis , y axis or origion
int x,y;
cout<<"Enter x and y :"<<endl;
cin >>x;
cin>>y;
if(y==0 && x!=0){
    cout<<"point lies on x axis"<<endl;
}else if (x==0 && y!=0){
    cout<<"point lies on y axis"<<endl;
}
else if(x==0 &&y==0){
    cout<<"point lies on origion"<<endl;
}
else{
    cout<<"invalid"<<endl;
}

// write a program to check whether all three points are lie on straight line or not
int x1,y1,x2,y2,x3,y3;
cout<<"x1 and y1"<<endl;
cin>>x1>>y1;
cout<<"x2 and y2"<<endl;
cin>>x2>>y2;
cout<<"x3 and y3"<<endl;
cin>>x3>>y3;
int slope1 = (y2-y1)/(x2-x1);
int slope2 = (y3-y2)/(x3-x2);
if(slope1==slope2){
    cout<<"all three points are lie on a straight line"<<endl;
}else{
    cout<<"not lie on straigth line"<<endl;
}
//loo 
int n= 5;
for(int i =1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}

    }