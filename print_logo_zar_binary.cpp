#include "print_logo_zar_binary.h"
#include<string>
#include<iostream>
#include<ctime>
#include "color.h"



void print_logo(std::string logo) {

    int color_print=rand() %5;

    if(color_print == 0) {
        std::cout<<logo;
        
    }else if(color_print == 1) {

        std::cout<<GREEN<<logo<<RESET;

    }else if(color_print == 2) {

        std::cout<<RED<<logo<<RESET;


    }else if(color_print == 3) {
    
        std::cout<<BLUE<<logo<<RESET;


    }else if(color_print == 4) {

        std::cout<<YELLOW<<logo<<RESET;


    }else{


        std::cout<<logo;


    }
    
    

}
