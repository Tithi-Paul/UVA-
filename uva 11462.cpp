#include<bits/stdc++.h>
using namespace std;
long int a[10000000], i, n;
int main()
{

     while(scanf("%ld", &n)!=EOF){
          if (n==0)
               break;
          for(i=0;i<n;i++)
               scanf("%ld", &a[i]);
               sort(a,a+i);
               for(i=0;i<n;i++)
               {

                    printf("%ld", a[i]);
                    if(i<(n-1))
                         printf(" ");
               }
               printf("\n");
               }
               return 0;
}
