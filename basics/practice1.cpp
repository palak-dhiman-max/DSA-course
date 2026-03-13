//  #include<iostream>
//  #include<vector>
//  #include<string>
//  using namespace std;

//  int main (){

// //question->1 sum of digit of integers
// //     int n;
// //     cout<<"enter integer";
// //     cin>>n;
// // int result =0;
// //     while(n!=0){
// // result = result +(n%10);
// // n= n/10;

// //     }

// //     cout<<result;
// //  


// //question->2 jagged array

// // vector<vector<int>>jaggedArray={
// //     {1,2},
// //     {3,4,5,6},
// //     {7,8,9}
// // };


// // for(int i=0; i<jaggedArray.size();i++){

// //     for(int j=0; j<jaggedArray[i].size(); j++){
// // cout<<jaggedArray[i][j]<<" ";
// //     }

// //     cout<<endl;
// // }

// //question->3
// string str ="Hello , we come to XYZ org in year 2026";
//               int vowel_count =0;
//               int  cons_count=0;
//               int word_count=0;
//               int  char_count=0;

//                for(int i=0; i<str.size(); i++){

//                 if((str[i]>='a' && str[i]<='z') || (str[i]>='A'&&str[i]<='Z')){

//                  if(str[i]=='a'||str[i]=='e'||str[i]=='i' || str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I' || str[i]=='O'||str[i]=='U'){
//                     vowel_count ++;
//                     char_count++;
//                  }else{
//                     cons_count++;
//                     char_count++;
//                  }}
                 
//                  else if(str[i]!=' '){
//                     char_count++;
//                  }

//                  else if(str[i]==' '){
//                     word_count++;
//                  }
                
//                }

//                cout<<vowel_count<<" "<<cons_count<<" "<<char_count<<" "<<word_count;
        
// }


            

// #include<iostream>
// using namespace std;
// int main (){
//    int process ;
//    cout<<"enter process";
//    cin >>process;

//    cout<<"enter burst time";
//    int burst_time[process];
//    for(int i=0 ; i<process; i++){
//       cin>>burst_time[i];
//    }

//    cout<<"enter arrival time";
//    int arrival_time[process];
//    for(int i=0; i<process;i++){
//       cin>>arrival_time[i];
//    }

//    int time[process];
//    time[0]=arrival_time[0];

//    for(int i=1;i<process;i++){
//       time[i]=time[i-1]+burst_time[i-1];
//    }

//    int waiting_time[process];
//    for(int i=0;i<process;i++){
//       waiting_time[i]=time[i]-arrival_time[i];
//    }

//    float sum =0;
//    for(int i=0; i<process; i++){
//       sum+=waiting_time[i];
//    }

  
  
//    float average_waiting_time ;
//    average_waiting_time = (sum/process);

//    cout<<"Average waiting time is:"<<average_waiting_time;



// }




// #include <iostream>
// using namespace std;

// int main (){
//     int process ;
//    cout<<"enter process";
//    cin >>process;

//    cout<<"enter burst time";
//    int burst_time[process];
//    for(int i=0 ; i<process; i++){
//       cin>>burst_time[i];
//    }

//    cout<<"enter arrival time";
//    int arrival_time[process];
//    for(int i=0; i<process;i++){
//       cin>>arrival_time[i];
//    }

//    int wt[process];

//       for(int i=0; i<process;i++){
//     for(int j=0;j<process-i-1;j++){
//         if(burst_time[j]>burst_time[j+1]){
//             swap(burst_time[j],burst_time[j+1]);
//         }
//     }
//    }


// int ans =0;
// int tat[process];

// for(int i=0; i<process;i++){
//    ans = ans+burst_time[i];
//    wt[i]=ans-arrival_time[i]-burst_time[i];
//    tat[i]=ans-arrival_time[i];
// }


//    float sum =0;
//    float sum2 =0;
//    for(int i=0; i<process; i++){
//       sum+=wt[i];
//       sum2+=tat[i];
//    }

  
  
//    float average_waiting_time ;
//    float average_tat;
//    average_waiting_time = (sum/process);
//    average_tat=(sum2/process);
//    cout<<"Average waiting time is:"<<average_waiting_time<<endl;
//    cout<<"Average turn around time is:"<<average_tat;



// }



//priority sheduling
#include <iostream>
using namespace std;

int main (){
    int process ;
   cout<<"enter process";
   cin >>process;

   cout<<"enter burst time";
   int burst_time[process];
   for(int i=0 ; i<process; i++){
      cin>>burst_time[i];
   }

   cout<<"enter priority";
   int priority[process];
   for(int i=0; i<process;i++){
      cin>>priority[i];
   }

   int wt[process];

   //sorting burst time
      for(int i=0; i<process;i++){
    for(int j=0;j<process-i-1;j++){
        if(burst_time[j]>burst_time[j+1]){
            swap(burst_time[j],burst_time[j+1]);
        }
    }
   }


//   sorting  priority

         for(int i=0; i<process;i++){
    for(int j=0;j<process-i-1;j++){
        if(priority[j]>priority[j+1]){
            swap(priority[j],priority[j+1]);
        }
    }
   }


int ans =0;
int tat[process];

for(int i=0; i<process;i++){
   ans = ans+burst_time[i];
   wt[i]=ans-priority[i]-burst_time[i];
   tat[i]=ans-priority[i];
}


   float sum =0;
   float sum2 =0;
   for(int i=0; i<process; i++){
      sum+=wt[i];
      sum2+=tat[i];
   }

  
  
   float average_waiting_time ;
   float average_tat;
   average_waiting_time = (sum/process);
   average_tat=(sum2/process);
   cout<<"Average waiting time is:"<<average_waiting_time<<endl;
   cout<<"Average turn around time is:"<<average_tat;



}