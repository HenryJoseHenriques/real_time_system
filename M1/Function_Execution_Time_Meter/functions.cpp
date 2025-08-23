#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// 1. Loop simples
void loopSimples(int n) {
    volatile int x = 0;
    for(int i = 0; i < n; i++) {
        x += i;
    }
}

// 2. Bubble Sort (ineficiente, mas ótimo para testes)
void bubbleSort(vector<int> &v) {
    for(size_t i = 0; i < v.size(); i++) {
        for(size_t j = 0; j < v.size()-1; j++) {
            if(v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
            }
        }
    }
}

// 3. Multiplicação de matrizes
void multMatriz(int n) {
    vector<vector<int>> A(n, vector<int>(n, 1));
    vector<vector<int>> B(n, vector<int>(n, 2));
    vector<vector<int>> C(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// 4. Fibonacci recursivo (péssimo desempenho de propósito)
long long fibRec(int n) {
    if(n <= 1) return n;
    return fibRec(n-1) + fibRec(n-2);
}

// 5. Fibonacci iterativo (muito mais rápido)
long long fibIter(int n) {
    if(n <= 1) return n;
    long long a = 0, b = 1, c;
    for(int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// 6. Função pesada com trigonometria
void trigPesado(int n) {
    volatile double x = 0;
    for(int i = 1; i < n; i++) {
        x += sin(i) * cos(i) + tan(i % 90 + 1);
    }
}

// 7. Ordenação usando STL (para comparar com Bubble Sort)
void stlSort(vector<int> &v) {
    sort(v.begin(), v.end());
}
