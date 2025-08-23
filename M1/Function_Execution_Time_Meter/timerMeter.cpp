#include "timerMeter.hpp"

void timerMeterCPU(string name, function<void()> f, int r, tableFunctions *table)
{
    double sum = 0;
    table->name = name;
    for (int i = 0; i < r; i++)
    {
        auto begin = steady_clock::now();
        f();
        auto end = steady_clock::now();
        table->value[i] = duration_cast<nanoseconds>(end - begin).count();
        sum += duration_cast<nanoseconds>(end - begin).count();
    }
    table->media = sum / r;
}

void benchMarkCPU(unordered_map<string, function<void()>> &map, int r)
{
    tableFunctions *table = new tableFunctions[map.size()];
    int idx = 0;
    for (auto &p : map)
    {
        table[idx].value = new double[r];
        timerMeterCPU(p.first, p.second, r, table+idx);
        cout << "Função " << table[idx].name
             << " tem tempo medio de " << table[idx].media << " ns\n";
        idx++;
    }

    // limpar memória
    for (size_t i = 0; i < map.size(); i++)
    {
        delete[] table[i].value;
    }
    delete[] table;
}
