#include <iostream>
#include <vector>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

std::vector<int> count_primes_in_range(int start, int end) {
    std::vector<int> primes;
    for (int i = start; i <= end; ++i) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int start, end;

    std::cout << "Input Batas Awal: ";
    std::cin >> start;
    std::cout << "Input Batas Akhir: ";
    std::cin >> end;

    std::vector<int> primes = count_primes_in_range(start, end);

    if (!primes.empty()) {
        std::cout << "Bilangan prima yang ada sebanyak " << primes.size() << " yaitu ";
        for (size_t i = 0; i < primes.size(); ++i) {
            std::cout << primes[i];
            if (i < primes.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    } else {
        std::cout << "Bilangan prima tidak ditemukan" << std::endl;
    }

    return 0;
}
