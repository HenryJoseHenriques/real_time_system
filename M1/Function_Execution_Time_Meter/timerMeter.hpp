#ifndef TIMERMETER_H
#define TIMERMETER_H

#include <iostream>
#include <chrono>
using namespace std::chrono;

template <typename Func>
double timerMeterCPU(Func f, int r);

// // ---- Benchmark ----
// void benchMarkCPU(int r = 10) {
//     unordered_map<string, function<void()>> funcoes;
//     fillMap();
//     for (auto& [name, func] : funcoes) {
//         double t = timerMeterCPU(func, r);
//         cout << name << " -> " << t << " ns\n";
//     }
// }

#endif
