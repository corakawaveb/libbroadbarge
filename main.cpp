#include <string>
#include <vector>

void small_factorial() {
    int result = 1;
    for (int i = 1; i <= 6; ++i) result *= i;
    (void)result;
}

void alternate_sum() {
    int acc = 0;
    for (int i = 1; i <= 12; ++i) {
        if (i % 2 == 0) acc += i; else acc -= i;
    }
    (void)acc;
}

void merge_text() {
    std::string a = "quiet";
    std::string b = "stone";
    std::string joined = a + "_" + b;
    (void)joined;
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
extern "C" void misty_thorn();
extern "C" void still_hollow();

int main() {
    small_factorial();
    alternate_sum();
    merge_text();
    digit_sum();
    misty_thorn();
    still_hollow();
    return brisk_haven();
}
