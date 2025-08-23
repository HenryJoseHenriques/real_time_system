#include "keyValueMap.hpp"

void fillMap(std::unordered_map<std::string, function<void()>> &map){
    map.insert({"write8bitPGM",[](){write8bitPGM(PGMImage);}});
    map.insert({"read8bitPGM",[](){read8bitPGM(PGMImage);}});
    map.insert({"printPGMFileError",[](){printPGMFileError(result);}});
    map.insert({"diff2d",[](){diff2d (0.5, lambda, PGMImage->x, PGMImage->y, matrix);}});
    //map.insert({"main",[](){fill(argc,argv);}});
}