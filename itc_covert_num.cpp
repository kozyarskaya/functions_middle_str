#include "middle_str.h"

long long itc_covert_num(long long number, int ss){

    long long new_num = 0, pow_of_ten = 1;
    if (number < 0)
        return (itc_covert_num((number * -1), ss))* -1;
    while(number > 0){
        new_num += number % ss * pow_of_ten;
        number /= ss;
        pow_of_ten *= 10;
    }
    return new_num;
}
