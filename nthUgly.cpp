class Solution {
public:
    int nthUglyNumber(int n)
    {
        if(n<=0)
        {
            return 0;
        }
        vector<int>v(n);
        v[0]=1;

        int a2=0,b3=0,c5=0;
        for(int i=1;i<n;i++)
        {
            int next2=v[a2]*2;
            int next3=v[b3]*3;
            int next5=v[c5]*5;

            int num=min({next2,next3,next5});
            v[i]=num;

            if(num==next2)
            {
                a2++;
            }
            if(num==next3)
            {
                b3++;
            }
            if(num==next5)
            {
                c5++;
            }


        }
        return v[n-1];
              
    }
};


/*


main motto

generate ugly numbers

return last ugly number

*2
*3
*5

[1, , , , , , , , , ]

min find



*2,*3,*5
update i

if generated==num

inc++

for last--n-1




for every number

check whether with 2 or 3 or 5

int count=0;
        if(n==0)
        {
            return 0;
        }
        while(n%2==0)
        {
            n=n/2;
            count++;
        }
        while(n%3==0)
        {
            n=n/3;
            count++;
        }
        while(n%5==0)
        {
            n=n/5;
            count++;
        }

        // (n!=1)


return count;
  



*/
