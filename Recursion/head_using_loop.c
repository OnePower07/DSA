#include<stdio.h>

void fun(int n)
{
  int i=1;
  while(i<=n)
  {
    printf("%d ",i);
    i++;
  }
}
int main()
{
  fun(3);
}