class Solution {
public:
    int findCenter(vector<vector<int>>& edges)
    {
        int u1=edges[0][0];
        int v1=edges[0][1];
        int u2=edges[1][0];
        int v2=edges[1][1];

        if(u1==u2 || u1==v2)
        {
            return u1;
        }
        else
        {
            return v1;
        }
        
    }
};

// int n=edges.size()+1;
//         vector<int>degree(n+1,0);

//         for(const auto& edge:edges)
//         {
//             degree[edge[0]]++;
//             degree[edge[1]]++;
//         }

//         for(int i=1;i<=n;i++)
//         {
//             if(degree[i]==n-1)
//             {
//                 return i;
//             }
//         }
//         return -1;
