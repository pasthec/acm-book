int sqrtt(int X) {
    int res = sqrt(max(0LL, X - 100000));
    while ((res + 1) * (res + 1) <= X) {
        res++;
    }
    return res;
}
