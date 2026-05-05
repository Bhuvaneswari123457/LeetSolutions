class Solution {
public:
    int reverse(int x) {
        int a=x;
        int n;
    
        long long int sum=0;
      
         int b=INT_MAX;
        int c= INT_MIN;
        while(a!=0)
        {
         int m=a%10;
             sum=sum*10+m;
            a=a/10;
        }
         if((sum<INT_MIN)|| (sum>INT_MAX))
         {
          sum=0;
         }
        return sum;
    }
};