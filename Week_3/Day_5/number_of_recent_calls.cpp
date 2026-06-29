class RecentCounter {
public:
    deque<int> dq;
    RecentCounter() {
       
    }
    
    int ping(int t) {
        int range=t-3000;
        while(!dq.empty()){
            
            int node=dq.front();
            if(node<range){
                dq.pop_front();
            }
            else{
                break;
            }      
        }
        
        dq.push_back(t);
        return dq.size();
    }
};

