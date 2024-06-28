class RecentCounter {
public:
    queue<int>q;
    RecentCounter()
    {

    }
    
    int ping(int t)
    {
        q.push(t);//add new request to the queue
        while(!q.empty()&&q.front()<t-3000)
        {
            q.pop();
        }
        return q.size();
    }
};

//q=[]
//[1]   q=[1]-> size=1
//[100] q=[1,100]-> size=2
//[3001]q=[1,100,3001]-> size=3
//[3002]q=[1,100,3001,3002]-> [100,3001,3002]->1 is not in range of (2,3002) so pop it->size=3

// null 1 2 3 3
