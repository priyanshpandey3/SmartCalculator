
int Fibonacci(int n)
{
 int t1=0,t2=1,nextterm,i;

 printf("\n%d %d",t1,t2);
 //printing 0 and 1
 for(i=2;i<n;++i)//loop starts from 2 because 0 and 1 are already printed
 {
  nextterm=t1+t2;
  printf(" %d",nextterm);
  t1=t2;
  t2=nextterm;
 }
  return 1;
 }
