////
////  main.cpp
////  demo
////
////  Created by hangyu on 2020/3/10.
////  Copyright © 2020 hangyu. All rights reserved.
////
//
//#include <iostream>
//#include <time.h>
//#include <unistd.h>
//#include <string>
//#include "main.hpp"
//
//#include "Timer.h"
//
//class A{
//public:
//    void function(std::string name){
//        std::cout<<name<<" call member function"<<std::endl;
//    }
//};
//
//void function(std::string name){
//    std::cout<<name<<" call static function"<<std::endl;
//}
//
//
//int main(){
//    A a = A();
//    Timer timer11 = Timer("once: timer 1");
//    Timer timer12 = Timer("once: timer 2");
//    Timer timer21 = Timer("loop: timer 1");
//    Timer timer22 = Timer("loop: timer 2");
//    timer11.SetDelay(1500);
//    timer12.SetDelay(2500);
//    timer21.SetInterval(1500);
//    timer22.SetInterval(2500);
//    timer11.StartOnce(function, timer11.m_name);
//    timer12.StartOnce(&A::function, a, timer12.m_name);
//    timer21.StartLoop(function, timer21.m_name);
//    timer22.StartLoop(&A::function, a, timer22.m_name);
//
//    std::cout<<"main start:"<<std::endl;
//    Timer::timer_start_time = std::chrono::system_clock::now();
//    while(true){
//        Timer::Tick();
////        timer2.Stop();
//    }
//    return 0;
//}
