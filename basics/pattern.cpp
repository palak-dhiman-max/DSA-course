# include <iostream>
using namespace std;
int main (){
    //solid rectangle pattern
int n=3;
int m=5;
    for(int i=1 ; i<=n ;i++){
        for(int j =1;j<=m;j++){
            cout<<"*";

        }
        cout<<endl;
    }
cout<<endl;
    // print solid square pattern 
    int a = 4;
    int b = 4;
         for(int i=1 ; i<=a ;i++){
        for(int j =1;j<=b;j++){
            cout<<"*";

        }
        cout<<endl;
    }

cout<<endl;
    //print number square pattern
        // print solid square pattern 
    int c = 4;
    int d = 4;
         for(int i=1 ; i<=a ;i++){
        for(int j =1;j<=b;j++){
            cout<<j;

        }
        cout<<endl;
    }
cout<<endl;
    // print star triangle pattern
        
    
         for(int i=1 ; i<=a ;i++){
        for(int j =1;j<=i;j++){
            cout<<"*";

        }
        cout<<endl;
    }
    cout<<endl;
    // print reverse triangle pattern
        for(int i=a ; i>=0 ;i--){
        for(int j =1;j<=i;j++){
            cout<<"*";

        }
        cout<<endl;
    }

    cout<<endl;
        // print number triangle pattern
        
    
         for(int i=1 ; i<=a ;i++){
        for(int j =1;j<=i;j++){
            cout<<j;

        }
        cout<<endl;
    }
    cout<<endl;
//print odd triangle pattern
int p=4; 
         for(int i=1 ; i<=p;i++){
        for(int j=1;j<=i;j++){
            cout<<2*j-1;
        }
        cout<<endl;
    }
    cout<<endl;

    //print alphabet square pattern

    int t = 4;
    int s = 4;
    
         for(int i=0; i<=t ;i++){
           
        for(int j =0;j<=s;j++){
             char ch= (char)('A'+j);
            cout<<ch;

        }
        cout<<endl;
    }

    cout<<endl;
   // print floid triangle pattern
   int q=4;
   int k=1;
   for(int i=1; i<= q;i++){
for(int j=1;j<=i;j++){
    cout<<k;
     k++;
}
cout<<endl;
   }
cout<<endl;

// print pattern
//1111
//2222
//3333
//4444

     
    int x = 4;
    int y = 4;
         for(int i=1 ; i<=x ;i++){
        for(int j =1;j<=y;j++){
            cout<<i;

        }
        cout<<endl;
    }

    cout<<endl;
    // print reverse triangle pattern with number
        for(int i=a ; i>=0 ;i--){
        for(int j =1;j<=i;j++){
            cout<<j;

        }
        cout<<endl;
    }

    cout<<endl;


//    // print alphabet  triangle pattern
        
    
         for(int i=0 ; i< 4;i++){
        for(int j =0;j<=i;j++){
char cha = (char)('A'+j);
            cout<<cha;

        }
        cout<<endl;
    }
    cout<<endl;

    
}           