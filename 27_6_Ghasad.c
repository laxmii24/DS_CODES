#include <stdio.h>
void decToBin(int n)
{
 int bin[32], i=0;

 while(n>0)
    { bin[i++]=n%2; n/=2; }

 for(int j=i-1;j>=0;j--)
 {
  printf("%d", bin[j]);
 }

}
int main()
{   int n;
     printf("Enter decimal no. to be converted: ");
     scanf("%d",&n);
     decToBin(n);
     return 0;
}
