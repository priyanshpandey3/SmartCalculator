
int palindrome(int n)
{
   int  reverse_num=0, remainder,temp;
int ans=0;
   temp=n;
   while(temp!=0)
   {
      remainder=temp%10;
      reverse_num=reverse_num*10+remainder;
      temp/=10;
   }

   /* If the original input number (num) is equal to
    * to its reverse (reverse_num) then its palindrome
    * else it is not.
    */
   if(reverse_num==n){
     printf("%d is a palindrome number",n);
       ans =1;
   }
   else
   {
        printf("%d is not a palindrome number",n);
    ans = 0;
   }

        return ans;
}
