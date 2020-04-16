//#include <iostream>
//#include <thread>
//#include <chrono>
//#include <string>
//#include <assert.h>
//#include <vector>
//
//#include "Timer.h"
//
//std::vector<Task*> Timer::task_list;
//std::chrono::system_clock::time_point Timer::timer_start_time;
//
//Timer::Timer(std::string name){
//    m_taskp = new Task();
//    m_name = name;
//}
//
//Timer::~Timer(){
//    if(!m_taskp){
//        delete m_taskp;
//    }
//}
//
//void Timer::Stop(){
//    if(m_taskp)
//        m_taskp->_expired = true;
//}
//
//void Timer::Tick(){
//    auto now = std::chrono::system_clock::now();
//    std::chrono::duration<double, std::micro> world_elapsed = now - Timer::timer_start_time;
//    int count = uint64_t(world_elapsed.count())%(1000*1000);
//    if(count==0){
//        std::cout<<uint64_t(world_elapsed.count())/1000/1000<<std::endl;
//    }
//    std::vector<Task*>::iterator it;
//    for(it=task_list.begin(); it!=task_list.end();){
//        std::chrono::duration<double, std::micro> elapsed_time = now - (*it)->start_time;
//        if(!(*it)->_expired){
//            if( (uint64_t(elapsed_time.count()) % ((*it)->m_delay_milliseconds*1000)) == 0){
//                if( (*it)->m_task_type==1){
//                    (*it)->m_callback_f();
//                    (*it)->_expired = true;
//                    delete (*it);
//                    it = Timer::task_list.erase(it);
//                    continue;
//                }
//                else{
//                    (*it)->m_callback_f();
//                }
//            }
//            it++;
//        }
//        else{
//            delete (*it);
//            Timer::task_list.erase(it);
//        }
//    }
//
//}
