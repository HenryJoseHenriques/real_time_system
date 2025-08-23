#include <iostream>
using namespace std;
#include <unordered_map>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <fstream>
#include <functional>
#include "C:\Users\Henry\OneDrive\Documents\Formacao\Real_Time_System\Teacher_Support_Material\Codes\FDA_Original_C\pgmfiles.h"
#include "C:\Users\Henry\OneDrive\Documents\Formacao\Real_Time_System\Teacher_Support_Material\Codes\FDA_Original_C\diff2d.h"
#include "C:\Users\Henry\OneDrive\Documents\Formacao\Real_Time_System\Teacher_Support_Material\Codes\FDA_Original_C\pgmfiles.c"
#include "C:\Users\Henry\OneDrive\Documents\Formacao\Real_Time_System\Teacher_Support_Material\Codes\FDA_Original_C\diff2d.c"
//#include "tableFunctions.hpp"
//#include "keyValueMap.hpp"   
//#include "timerMeter.hpp" 
#include "tableFunctions.cpp"
#include "keyValueMap.cpp"   
#include "timerMeter.cpp" 

int main() {
    std::unordered_map<std::string, function<void()>> map;
    int r = 30;
    fillMap(map);
    benchMarkCPU(map,r);
    cout << "Teste feito, nehum erro\n";
}
