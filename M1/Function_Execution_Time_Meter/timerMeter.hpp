#ifndef TIMERMETER_H
#define TIMERMETER_H

#include <iostream>
#include <chrono>
using namespace std::chrono;

template <typename Func>
double timerMeterCPU(function<void()> f, int r);

template <typename Func>
void benchMarkCPU(std::unordered_map<std::string, function<void()>> &map,int r = 10);

#endif
