
int EvenOdd(int n) {
  int ans = 0;


    // True if n is perfectly divisible by 2
    if(n % 2 == 0){
       printf("%d is even.", n);
       ans = 1;
}
  else {
       printf("%d is odd.", n);
  ans = 0;
  }
    return ans;
}
