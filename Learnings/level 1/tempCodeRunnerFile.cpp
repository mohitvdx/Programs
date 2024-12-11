int power(int a, int n) {
    if (n == 0) {
        return 1;
    }
    int half_power;
    if (n % 2 == 0) {
        half_power = power(a, n / 2) * power(a, n / 2);
    } else {
        half_power = power(a, n / 2) * power(a, n / 2) * a;
    }
    return half_power;
}
