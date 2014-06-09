#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <unistd.h>
#include "sample.hpp"
#include "queue.hpp"

int main()
{

    navigation::sample smp("2112222|1221|999990220|");
    std::cout << smp.result() << std::endl;

    navigation::Queue q(3);
    q << smp.result();
    q << smp.result();
    q << smp.result();

    std::cout << q.suggest() << std::endl;

//    //! build bluetooth stream.
//    std::string     raw_data;
//    std::fstream    blueTooth("/dev/rfcomm0");
//    std::vector<int> v(3);
//    while(blueTooth >> raw_data)
//    {
//        std::cout << raw_data << std::endl;
//        std::string distance0, distance1, distance2;
//        std::string::iterator input = raw_data.begin();

//        while(*input != '|')
//            distance0.push_back(*input++);

//        ++input;
//        while(*input != '|')
//            distance1.push_back(*input++);

//        ++input;
//        while(*input != '|')
//            distance2.push_back(*input++);

//        v[0] = std::stoi(distance0);
//        v[1] = std::stoi(distance1);
//        v[2] = std::stoi(distance2);


//        for(auto i : v)
//            std::cout << i << std::endl;


//        if(v[0] >= v[1] && v[0] >= v[2]){
//            std::cout << "turn left"        << std::endl;
//            system("play left.wav");
//        }

//        if(v[1] >= v[0] && v[1] >= v[2]){
//            std::cout << "keep straight"        << std::endl;
//            system("play mid.wav");
//        }

//        if(v[2] >= v[1] && v[2] >= v[0]){
//            std::cout << "turn right"        << std::endl;
//            system("play right.wav");
//        }

        //sleep(1);
        //system("play left.wav");
//    }

}
