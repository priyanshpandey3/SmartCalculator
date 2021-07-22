
int power(int n) {
    int exp;
    long long result = 1;
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= n;
        --exp;
    }
    printf("Answer = %lld", result);
    return result;
}
