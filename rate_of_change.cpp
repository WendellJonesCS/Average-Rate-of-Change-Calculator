#include <iostream>
#include <array>

int main(){

    float first_point[2] = {};
    float second_point[2] = {};

    for (int i = 0; i < 2; i++){
        if(i == 0){
            std::cout << "x1" << ":" << std::endl;
            std::cin >> first_point[i];
        }
        else{
            std::cout << "y1" << ":" << std::endl;
            std::cin >> first_point[i];
        }
    }
    for (int i = 0; i < 2; i++){
         if(i == 0){
            std::cout << "x2" << ":" << std::endl;
            std::cin >> second_point[i];
        }
        else{
            std::cout << "y2" << ":" << std::endl;
            std::cin >> second_point[i];
        }
    }
    float avr_rate_of_change = (first_point[1] - second_point[1]) / first_point[0] - second_point[0];
    std::cout << "Average rate of change: " << avr_rate_of_change << std::endl;
}
