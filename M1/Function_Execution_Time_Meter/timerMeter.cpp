#include "timerMeter.hpp"

template <typename Func>
double timerMeterCPU(Func f, int r) {
    
    double sum = 0;
    for (int i = 0; i < r; i++) {
        auto begin = steady_clock::now();
        f();
        auto end = steady_clock::now();
        sum += duration_cast<nanoseconds>(end - begin).count();
    }
    return sum / r;
}