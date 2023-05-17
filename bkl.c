#include <stdio.h>

int get(int n) {
    if(n <= 1) {
        return n;
    }
    return get(n - 1) + get(n - 2)+get(n-1);
}

void solve() {
    int ans = get(6);
    printf("%d", ans);
}

int main() {
    solve();
	return 0;
}

