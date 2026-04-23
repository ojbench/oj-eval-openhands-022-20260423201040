#ifndef SOURCE_H
#define SOURCE_H

// External function provided by grader
int query(int x, int y, int z);

const long long MOD = 998244353;

int guess(int n, int Taskid) {
    // Very simple test implementation
    long long result = 0;
    long long pow233 = 233;
    
    // Just return a dummy value for testing
    for (int i = 1; i <= n; i++) {
        result = (result + (i * pow233) % MOD) % MOD;
        pow233 = (pow233 * 233) % MOD;
    }
    
    return (int)result;
}

#endif // SOURCE_H
