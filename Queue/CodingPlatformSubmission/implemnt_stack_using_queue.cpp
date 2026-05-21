class MyStack {
public:
queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        if(empty()){
            return 0;
        }
int n =q.size();
        while(n-->1){
            q.push(q.front());
            q.pop();

        }

        int elemnt = q.front();
        q.pop();
        return elemnt;
    }
    
    int top() {
        if(empty()){
            return 0;
        }

        return q.back();

    }
    
    bool empty() {
        return q.empty();
    }


// //second approach usiing tow queues
//     queue<int>q2;
//     void push(int x) {

//         if(empty()){
//             q.push(x);
//         }

//         else if(q2.empty()){

//         q.push(x);}

//         else{
//             q2.push(x);
//         }
//     }
    
//     int pop() {
//         if(empty()){
//             return 0;
//         }
//     else if(q.empty()){

//         while(q2.size()>1){

//         q.push(q2.front());
//         q2.pop();}

//         int elemnt = q2.front();
//         q2.pop();
//         return elemnt;
//         }

//         else{
//          while(q.size()>1){

//         q2.push(q.front());
//         q.pop();}

//         int elemnt = q.front();
//         q.pop();
//         return elemnt;
//         }
//     }
    
//     int top() {
//         if(empty()){
//             return 0;
//         }
//      if(q.empty()){
//         return q2.back();
//      }
//      else{
//         return q.back();
//      }

//     }
    
//     bool empty() {
//         return q.empty()&& q2.empty();
//     }



};
