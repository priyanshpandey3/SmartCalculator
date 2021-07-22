
int sumofnaturalnumber(int n)
    {
        int i, sum = 0;

    //printf("Enter a positive integer: ");
    //scanf("%d", &n);
    if(n>0)
        {
            for (i = 1; i <= n; ++i)
             {
                 sum += i;
             }

        printf("Sum = %d", sum);
    }
else
    {
    return 0;
}

    return sum;
}
