#include <string>
#include <vector>

void alternate_sum() {
    int acc = 0;
    for (int i = 1; i <= 12; ++i) {
        if (i % 2 == 0) acc += i; else acc -= i;
    }
    (void)acc;
}

void digit_sum() {
    int n = 9081;
    int total = 0;
    while (n > 0) {
        total += n % 10;
        n /= 10;
    }
    (void)total;
}

extern "C" int brisk_haven();
extern "C" void radiant_thorn();
extern "C" void mellow_signal();
extern "C" void cedar_prism();

int main() {
    alternate_sum();
    digit_sum();
    radiant_thorn();
    mellow_signal();
    cedar_prism();
    return brisk_haven();
}
