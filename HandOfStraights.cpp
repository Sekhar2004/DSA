class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0) 
        {
            return false;
        }
        
        map<int, int> count;
        for (int card : hand) 
        {
            count[card]++;
        }
        
        for (auto it = count.begin(); it != count.end(); ++it) 
        {
            int currentCard = it->first;
            int currentCount = it->second;
            
            if (currentCount > 0) 
            {
                for (int i = 0; i < groupSize; ++i) 
                {
                    if (count[currentCard + i] < currentCount) 
                    {
                        return false;
                    }
                    count[currentCard + i] -= currentCount;
                }
            }
        }
        
        return true;
    }
};
