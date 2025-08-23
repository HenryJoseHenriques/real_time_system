#include <iostream>
#include <vector>
#include "functions.cpp"   // suas funções de benchmark
#include "timerMeter.cpp"  // sua função timerMeterCPU

using namespace std;

int main() {
    int N = 2000; // tamanho do vetor/matriz
    vector<int> v(N);
    for(int i = 0; i < N; i++) v[i] = N - i;

    // Wrappers com lambdas para passar no timerMeterCPU
    auto f1 = [&](){ loopSimples(1e7); };
    auto f2 = [&](){ bubbleSort(v); };
    auto f3 = [&](){ multMatriz(200); };
    auto f4 = [&](){ fibRec(25); };
    auto f5 = [&](){ fibIter(90); };
    auto f6 = [&](){ trigPesado(1e6); };
    auto f7 = [&](){ stlSort(v); };

    cout << "loopSimples -> "
         << timerMeterCPU(f1, 10) << " ns\n";

    cout << "bubbleSort -> "
         << timerMeterCPU(f2, 5) << " ns\n";

    cout << "multMatriz -> "
         << timerMeterCPU(f3, 5) << " ns\n";

    cout << "fibRec(25) -> "
         << timerMeterCPU(f4, 5) << " ns\n";

    cout << "fibIter(90) -> "
         << timerMeterCPU(f5, 10) << " ns\n";

    cout << "trigPesado -> "
         << timerMeterCPU(f6, 5) << " ns\n";

    cout << "stlSort -> "
         << timerMeterCPU(f7, 10) << " ns\n";
}
