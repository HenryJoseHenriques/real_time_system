#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "C:\Users\Henry\OneDrive\Documents\Formacao\Real_Time_System\Teacher_Support_Material\Codes\FDA_Original_C\pgmfiles.h"
#include "C:\Users\Henry\OneDrive\Documents\Formacao\Real_Time_System\Teacher_Support_Material\Codes\FDA_Original_C\diff2d.h"

char row[80];
int i, j;
FILE *inimage, *outimage;
long imax;
float lambda;
eightBitPGMImage *PGMImage;
int result;
float **matrix;
