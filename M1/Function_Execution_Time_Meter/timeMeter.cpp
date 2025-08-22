#include <iostream>
#include <chrono>
#include <unordered_map>
using namespace std;

struct tableTimerCPU
{
    string functionName;
    double time;
};

template <typename Func>
double timerMeterCPU(Func f, int r = 10)
{
    double media, sum;
    for (int i = 0; i < r; i++)
    {
        auto begin = steady_clock::now();
        f();
        auto end = steady_clock::now();
        double sum += duration_cast<nanoseconds>(fim - inicio).count();
    }
    media = sum/r;
    return media;
}

template <typename Func>
void benchmarkCPU(Func f)
{
    for (auto f :)
    {
        timerMeterCPU();
    }
}