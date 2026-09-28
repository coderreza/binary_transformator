#include "binary.h"
#include<string>
#include<bitset>
#include<iostream>


std::string Pt_BINARY::ToBINARY(std::string text) {
    for(char c : text) {
        out +=std::bitset<8>(c).to_string();
        out += " ";

    }
    return out;
}
