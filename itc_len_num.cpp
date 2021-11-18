#include "middle_str.h"


int itc_len_num(long long number){
    if (number < 0){
        number *= -1;
    }
   int kol = 0;
   if (number == 0){
       kol += 1;
       return kol;
   }
   else{
   while (number > 0){
        number /= 10;
        kol += 1;
   }
   return kol;
 }
}
