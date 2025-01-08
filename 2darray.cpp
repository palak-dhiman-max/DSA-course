# include<iostream>
# include <vector>
# include<algorithm>
using namespace std;



//int main(){
    // defination of multidimensional array
    // datatype name of array [size][size];
//int n= 2;
//int m=2;
   // int arr [n][m];
    // initialsing multi dimensional array 
   // int arr1[][]={{1,2,3},
       //           {4,5,6}};

  // taking 2d array input from user
  /*for(int i=0; i< n;i++)  {
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
  }       
    for(int i=0; i< n;i++)  {
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;

  }      

  // write a program to display multiplication of tow matrices entered by the user
  
  int r1;
  int c1;
  int r2;
  int c2;
  cout<<"enter rows and columns of matrice first:"<<endl;
  cin>>r1>>c1;
  cout<<"enter rows and columns of matrice next:"<<endl;
  cin>>r2>>c2;
  int arr2[r1][c1];
  int arr3[r2][c2];
   int arr4[r1][c2];
     // taking input of elements of first array
     
     if(r1!=c2){
      cout<<"you cannot do multiplication of the matrices it is not possible"<<endl;
     }
   cout<<"enter elemnents of matrix first:"<<endl;
    for(int i=0; i< r1;i++)  {
    for(int j=0;j<c1;j++){
        cin>>arr2[i][j];
    }cout<<endl;
  }    
   cout<<"enter elemnents of matrix second:"<<endl;

   // taking input of elements of second array
      for(int i=0; i<r2;i++)  {
    for(int j=0;j<c2;j++){
        cin>>arr3[i][j];
    }cout<<endl;
  }    

 // logic to multiply tow matrices
 cout<<"your result of multiplication of tow matrices is equal to :"<<endl;
     for(int i=0; i<r1;i++){
        for(int j=0;j<c2;j++){
          int ans = 0;
           for(int k=0; k<r2;k++){
ans += arr2[i][k]*arr3[k][j];
arr4[i][j]=ans;
      }
    }
  }    

  // for printing the resulted array
        for(int i=0; i<r1;i++)  {
    for(int j=0;j<c2;j++){
        cout<<arr4[i][j]<<"  ";
    }
    cout<<endl;
  }    

  // finding transpose of the matrices
  int n1,m1;
  cin>>n1>>m1;
  int mat1[n1][m1];
  int mat2[m1][n1];
  cout<<"enter elments of matrix first:"<<endl;
      for(int i=0; i< n1;i++)  {
    for(int j=0;j<m1;j++){
        cin>>mat1[i][j];
    }cout<<endl;
  }    
  
 
for(int i=0; i<m1 ;i++){
  for(int j=0;j<n1;j++){
    mat2[i][j]=mat1[j][i];
  }
}
     for(int i=0; i<m1;i++)  {
    for(int j=0;j<n1;j++){
        cout<<mat2[i][j]<<" ";
    }cout<<endl;
  }    

// given a boolean 2d array, where each row is sorted . find the row with maximum number of 1s.
int maxOnesRow (vector<vector<int>> &vec){
  int maxArray = INT8_MIN;                               

  int maxIndex = -1;
  int column= vec[0].size();
  int numOfOnes =0;
  for(int i=0; i<vec.size();i++){
    for(int j=0; j<vec[i].size();j++){
      if(vec[i][j]==1){
    numOfOnes = column - j;
      
      if(numOfOnes>maxArray){
        maxArray= numOfOnes;
        maxIndex = i;
      }
      break;
      }
    }
  }return maxIndex;
}

int main(){
int n;
int m;
cin>>n>>m;

vector <vector<int >> vec(n,vector<int>(m));
for(int i=0;i<vec.size();i++){
  for(int j=0;j<vec[i].size();j++){
    cin>>vec[i][j];
  }
}
 int res= maxOnesRow(vec);
cout<<res;
}*/

/* rotating  square matrice by ninety degree 

int main(){
  int n;
  cin>>n;
  
  vector <vector<int>>vec(n,vector<int>(n));

    for(int i= 0; i<n;i++){
    for(int j=0; j<n;j++){
      cin>>vec[i][j];
    }
  }

  // for finding transpose (using swap because we cant use extra memory)
  for(int i= 0; i<n;i++){
    for(int j=0; j<i;j++){
     swap( vec[i][j], vec[j][i]);
    }
  }

// for reversing rows
  for(int i= 0; i<n;i++){
    for(int j=0; j<n;j++){
     reverse(vec[i].begin(),vec[i].end());
    }
  }

    for(int i= 0; i<n;i++){
    for(int j=0; j<n;j++){
      cout<<vec[i][j]<<" ";
    }cout<<endl;
  }
  }
*/
 /* // print pascals triangle

vector<vector<int>>pascalTriangle(int n){
  //resizing ith vector in order to get triangle
  vector<vector<int>>pascal(n);
  for(int i=0; i<n;i++){
pascal[i].resize(i+1);
  }

for(int i=0; i<n;i++){

  for(int j=0;j<i+1;j++){
    if(j==0 ||j==i){
      pascal[i][j]= 1;
    }else{
  pascal[i][j]= pascal[i-1][j]+ pascal[i-1][j-1];
  }
}
}return pascal;
}

  int main (){
    cout<<"enter size of vector:"<<" ";
    int n;
    cin>>n;
    vector<vector<int>>vec;
    vec= pascalTriangle(n);
    
    for(int i=0;i<vec.size();i++){
      for(int j=0;j<vec[i].size();j++){
        cout<<vec[i][j]<<" ";
      }cout<<endl;
    }
  }*/

  // print the elments in spiral in a given array  # spiral matrix
void spiralMatrix(vector<vector<int>> &matrix){
  int left=0;
  int right =matrix[0].size()-1;
  int top = 0;
  int bottom = matrix.size()-1;
  int direction =0;
  while(left<=right && top<= bottom){
if(direction ==0){
  // left -> right
  for(int col=left; col<=right;col++){
    cout<<matrix[top][col]<<" ";
  }
  top++;
}else if (direction ==1){
  // top -> bottom
    for(int row=top; row<=bottom;row++){
    cout<<matrix[row][right]<<" ";
  } right --;

}else if (direction ==2){
  // right-> left
    for(int col=right; col>=left;col--){
    cout<<matrix[bottom][col]<<" ";
  }bottom--;
}else{
  // bottom->top
    for(int row=bottom; row>=top;row--){
    cout<<matrix[row][left]<<" ";
  }left++;
}

direction = (direction +1)%4;
  }
}

int main (){
  int n,m;
  cout<<"enter size of vector:"<<" ";
  cin>>n>>m;
  vector <vector<int>> matrix(n,vector<int>(m));
  for(int i=0; i<matrix.size();i++){
    for(int j=0; j<matrix[i].size();j++){
      cin>>matrix[i][j];
    }
  }

  spiralMatrix(matrix);
  


}
  

/*// given a positive integer n, generate an nxn matrix filled with elements from 1 to n2 in spiral order
vector<vector<int>>spiralMatrix(int n){
  int left=0;
  int right =n-1;
  int top = 0;
  int bottom = n-1;
  int direction =0;
int value = 1;
  vector <vector<int>> matrix(n,vector<int>(n));
  while(left<=right && top<= bottom){
    
if(direction ==0){
  // left -> right
  for(int col=left; col<=right;col++){
    matrix[top][col]= value++;
  }
  top++;
}else if (direction ==1){
  // top -> bottom
    for(int row=top; row<=bottom;row++){
    matrix[row][right]= value++;
  } right --;

}else if (direction ==2){
  // right-> left
    for(int col=right; col>=left;col--){
    matrix[bottom][col]= value++;;
  }bottom--;
}else{
  // bottom->top
    for(int row=bottom; row>=top;row--){
    matrix[row][left]= value ++;
  }left++;
}

direction = (direction +1)%4;
  }
  return matrix;
}

int main (){
  int n;
  cout<<"enter size of vector:"<<" ";
  cin>>n;
  vector <vector<int>> matrix(n,vector<int>(n));
  
 matrix= spiralMatrix(n);
  for(int i=0; i<n;i++){
    for(int j=0; j<n;j++){
      cout<<matrix[i][j]<<" ";
    }cout<<endl;
  }

}

// given a matrix 'a' of dimension nxm and 2 coordinates (l1,r1) and (l2,r2).
// return the sum of the rectangle form , from (l1,r1)to (l2,r2)
// first approach is brute force
int main (){
  int l1,r1,l2,r2,n,m;
  cout<<" enter l1,l2,r1,r2:";
  cin>>l1>>r1>>l2>>r2;
  cout<<"size of vector:";
  cin>>n>>m;
  int sum = 0;
vector<vector<int>>rectangle(n,vector<int>(m));
cout<<"enter vector elements:"<<endl;
// taking vector elements input
  for(int i= 0; i<n; i++){
    for(int j=0; j<m; j++){
      cin>>rectangle[i][j];
    }
  }
  // logic to calculate sum
  for(int i= l1 ; i<=l2; i++){
    for(int j=r1; j<=r2; j++){
      sum+=rectangle[i][j];
    }
  }cout<<"sum is equal to :"<<sum<<endl;


  // secomd approach of above question 
  
  int l1,r1,l2,r2,n,m;
  cout<<" enter l1,r1,l2,r2:";
  cin>>l1>>r1>>l2>>r2;
  cout<<"size of vector:";
  cin>>n>>m;
  int sum = 0;
vector<vector<int>>rectangle(n,vector<int>(m));
cout<<"enter vector elements:"<<endl;
  for(int i= 0; i<n; i++){
    for(int j=0; j<m; j++){
      cin>>rectangle[i][j];
    }
  }
// calculating prefix sum
int ans =0;
  for(int i=0; i<n;i++){
    for(int j=1; j<m;j++){
    rectangle[i][j]+=rectangle[i][j-1];
    }

// precalculation to print sum
  }  for(int i= l1; i<=l2; i++){
    for(int j=r1; j<r2; j++){
      ans+=rectangle[i][r2]-rectangle[i][r1-1];
      
    }
  }
   cout<<"sum is equal to :"<<ans;

   // third method prefix sum over columns
  
  int l1,r1,l2,r2,n,m;
  cout<<" enter l1,r1,l2,r2:";
  cin>>l1>>r1>>l2>>r2;
  cout<<"size of vector:";
  cin>>n>>m;
  int sum = 0;
vector<vector<int>>rectangle(n,vector<int>(m));
cout<<"enter vector elements:"<<endl;
  for(int i= 0; i<n; i++){
    for(int j=0; j<m; j++){
      cin>>rectangle[i][j];
    }
  }
// calculating prefix sum
int ans =0;
  for(int i=1; i<n;i++){
    for(int j=0; j<m;j++){
    rectangle[i][j]+=rectangle[i-1][j];
    }

// precalculation to print sum
  }  for(int i= r1; i<=r2; i++){
    for(int j=l1; j<l2; j++){
      ans+=rectangle[l2][i]-rectangle[l1-1][i];
      
    }
  }

  
   cout<<"sum is equal to :"<<ans;
   
   // forth method prefix sum over columns an rows both/*
   
     int l1,r1,l2,r2,n,m;
  cout<<" enter l1,r1,l2,r2:";
  cin>>l1>>r1>>l2>>r2;
  cout<<"size of vector:";
  cin>>n>>m;
  int sum = 0;
vector<vector<int>>rectangle(n,vector<int>(m));
cout<<"enter vector elements:"<<endl;
  for(int i= 0; i<n; i++){
    for(int j=0; j<m; j++){
      cin>>rectangle[i][j];
    }
  }

// calculating prefix sum row wise
int ans =0;
  for(int i=0; i<n;i++){
    for(int j=1; j<m;j++){
    rectangle[i][j]+=rectangle[i][j-1];
    }

  }

// calculating prefix sum column wise

  for(int i=1; i<n;i++){
    for(int j=0; j<m;j++){
    rectangle[i][j]+=rectangle[i-1][j];
    }
}

// precalculation in order to calculate sum
int topSum, leftSum,topLeftSum;
if(l1!=0)  topSum= rectangle[l1-1][r2];
if(r1!=0)  leftSum= rectangle[l2][r1-1];
if(l1!=0 && r1!=0)  topLeftSum= rectangle[l1-1][r1-1];
sum = rectangle[l2][r2]- topSum-leftSum+ topLeftSum; 
cout<<sum<<" ";
  }*/