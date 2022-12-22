bool MillerRabin(u64 n, int iter=5) { // returns true if n is probably prime, else returns false.
    if (n < 4)
        return n == 2 || n == 3;
 
    int s = 0;
    u64 d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        s++;
    }
 
    for (int i = 0; i < iter; i++) {
        int a = 2 + rand() % (n - 3);
        if (check_composite(n, a, d, s))
            return false;
    }
    return true;
}

int prime[N];
vector<int> primes;
void sieve() {
    for (int i = 2; i < N; ++i) prime[i] = 1;
    for (int i = 2; i < N; ++i) if (prime[i]) for (int j = 2 * i; j < N; j += i) prime[j] = 0;
    for (int i = 0; i < N; ++i) if (prime[i]) primes.push_back(i);
}
