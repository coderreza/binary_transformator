#include "input.h"
#include<iostream>
#include<string>
#include "color.h"
#include "binary.h"
#include "print_logo_zar_binary.h"
#include<ctime>

int main() {
    
    srand(time(0));

    std::string logo=R"(
███████╗ █████╗ ██████╗
╚══███╔╝██╔══██╗██╔══██╗
  ███╔╝ ███████║██████╔╝
 ███╔╝  ██╔══██║██╔══██╗
███████╗██║  ██║██║  ██║
╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝
██████╗ ██╗███╗   ██╗ █████╗ ██████╗ ██╗   ██╗
██╔══██╗██║████╗  ██║██╔══██╗██╔══██╗╚██╗ ██╔╝
██████╔╝██║██╔██╗ ██║███████║██████╔╝ ╚████╔╝
██╔══██╗██║██║╚██╗██║██╔══██║██╔══██╗  ╚██╔╝
██████╔╝██║██║ ╚████║██║  ██║██║  ██║   ██║
╚═════╝ ╚═╝╚═╝  ╚═══╝╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝


)";

    print_logo(logo);
    Input inputting;
    Pt_BINARY PT_ToBINARY;

    while(true) {
    std::cout<<"\nenter your text to BINARY:";
    inputting.read();

    std::cout<<"\n"<<"your text to BINARY:"<<PT_ToBINARY.ToBINARY(inputting.enter)<<"\n";
    }
    

    return 0;

}
