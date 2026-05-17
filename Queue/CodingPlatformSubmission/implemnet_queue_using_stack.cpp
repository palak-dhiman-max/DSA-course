class MyQueue {
public:
stack<int>s1;
stack<int>s2;
int elemnt;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(empty()){
            return 0;
        }

        if(!s2.empty()){
             elemnt = s2.top();
            s2.pop();
        
        }else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }

        elemnt = s2.top();
            s2.pop();
          
        }
return elemnt;
    }
    
    int peek() {
        if(empty()){
            return 0 ;
        }
        if(!s2.empty()){
   
        }   
        else{

         while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
  return s2.top();

         }
    
    bool empty() {
        return s1.empty()&&s2.empty();
    }
};