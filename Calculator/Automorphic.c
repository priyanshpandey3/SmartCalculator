int Automorphic(int n)
{
    int square = n * n;
    int flag=0;
   while(n>0)
   {
       if(n%10 != square%10)
         {
           flag=-1;
           break;
         }

       n=n/10;
       square=square/10;
   }
   if(flag==0){
     printf("It is an Automorphic Number");
      return 1;
   }

   else{
    printf("It is not an Automorphic Number");
     return 0;
   }

}
