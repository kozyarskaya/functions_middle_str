#include "middle_str.h"

string itc_Cezar(string str, int k){
long long i = 0;
int h = 0;
string new_str = "";
while(str[i] != '\0'){
        if(k >= 0){
        if ((str[i] + k) > 'z'){
            h = (str[i] + k) - 123;
            new_str += 'a' + h;
        }
        else if ((str[i] + k) > 'Z' && (str[i] + k) < 'a'){
            h = (str[i] + k) - 91;
            new_str += 'A' + h;
        }
        else if((str[i] + k) > 'a'&& (str[i] + k) < 'z' || (str[i] + k) < 'Z' && (str[i] + k) > 'A')
            new_str += str[i] + k;

        else
            new_str += str[i];

        }

        else if (k < 0){
        if(str[i] < 'a'&& str[i] > 'Z' || str[i] > 'z' || str[i] < 'A')
            new_str += str[i];
        else if ((str[i] + k) < 'a'){
            h = 123 - ('a' - (str[i] + k));
            new_str += h;
        }
        else if ((str[i] + k) < 'Z' && (str[i] + k) > 'A'){
            h = 93 - ('A' - (str[i] + k));
            new_str += h;
        }
        else if((str[i] + k) >= 'a'&& (str[i] + k) < 'z' || (str[i] + k) < 'Z' && (str[i] + k) > 'A')
            new_str += (str[i] + k);


        }
    i++;

}
return new_str;

}
