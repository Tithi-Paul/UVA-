#include<bits/stdc++.h>
using namespace std;
int main()
{
   ll n,e,c,a;
   int no=0;
   while(sc("%lld %lld",&n,&e)==2)
   {
       if(n<0&&e<0)
       break;
       c=0;
       a=n;
       while(n<=e)
       {
           if(n==1)
           {
               c++;
               break;
           }
           else if(n%2==0)
           {
               c++;
               n/=2;
           }
           else if(n%2==1)
           {
               c++;
               n=n*3+1;
           }

       }
       pf("Case %d: A = %lld, limit = %lld, number of terms = %lldn",
          ++no,a,e,c);
   }
    return 0;
}
