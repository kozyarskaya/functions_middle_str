#include "middle_str.h"

string itc_DecToBin(string str){
    long long i = 0, number = 0, dvnumber = 0;
    string new_str = "", global_str = "";
    while(str[i] != '\0'){
        if (str[i] < '0' || str[i] > '9'){
            number = itc_str_to_int(new_str);
            dvnumber = itc_covert_num(number, 2);
            global_str += itc_int_to_str(dvnumber) + str[i];

            new_str = "";
        }
        if(str[i] >= '0' && str[i] <= '9')
            new_str += str[i];

        i++;
    }
    number = itc_str_to_int(new_str);
    dvnumber = itc_covert_num(number, 2);
    global_str += itc_int_to_str(dvnumber);
    return global_str;
}
