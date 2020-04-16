////
////  Timer.h
////  demo
////
////  Created by hangyu on 2020/3/10.
////  Copyright © 2020 hangyu. All rights reserved.
////
//
//#ifndef Timer_h
//#define Timer_h
//
//#include<stdint.h>
//#include<functional>
//#include<vector>
//#include<chrono>
//#include<string>
//
//typedef std::function<void()> CallBackFunction;
//
//struct Task
//{
//    int m_task_type;
//    int m_callback_type;
//    bool _expired;
//    uint64_t m_delay_milliseconds;
//    CallBackFunction m_callback_f;
//    
//    std::chrono::system_clock::time_point start_time;
//};
//
//class Timer
//{
//public:
//    static void Tick();
//    static std::chrono::system_clock::time_point timer_start_time;
//    
//public:
//    Timer(std::string name);
//    ~Timer();
//    
//    void SetDelay(uint64_t delay_milliseconds){assert(m_taskp); m_taskp->m_delay_milliseconds = delay_milliseconds;}
//    void SetInterval(uint64_t interval_milliseconds){assert(m_taskp); m_taskp->m_delay_milliseconds = interval_milliseconds;}
//    
//    template<class...Args>
//    void StartOnce(void (*callback_f)(Args...), Args... args){
//        assert(m_taskp);
//        m_taskp->m_task_type=1;
//        m_taskp->_expired = false;
//        m_taskp->start_time = std::chrono::system_clock::now();
//        m_taskp->m_callback_f = std::bind(callback_f, std::forward<Args>(args)...);
//        Timer::task_list.push_back(m_taskp);
//    }
//    
//    template<class T, class...Args>
//    void StartOnce(void (T::*func)(Args...), T& instance, Args... args){
//        assert(m_taskp);
//        m_taskp->m_task_type=1;
//        m_taskp->_expired = false;
//        m_taskp->start_time = std::chrono::system_clock::now();
//        m_taskp->m_callback_f = std::bind(func, instance, std::forward<Args>(args)...);
//        Timer::task_list.push_back(m_taskp);
//    }
//    
//    template<class...Args>
//    void StartLoop(void (*callback_f)(Args...), Args... args){
//        assert(m_taskp);
//        m_taskp->m_task_type=2;
//        m_taskp->_expired = false;
//        m_taskp->start_time = std::chrono::system_clock::now();
//        m_taskp->m_callback_f = std::bind(callback_f, std::forward<Args>(args)...);
//        Timer::task_list.push_back(m_taskp);
//    }
//    
//    template<class T, class...Args>
//    void StartLoop(void (T::*func)(Args...), T& instance, Args... args){
//        assert(m_taskp);
//        m_taskp->m_task_type=2;
//        m_taskp->_expired = false;
//        m_taskp->start_time = std::chrono::system_clock::now();
//        m_taskp->m_callback_f = std::bind(func, instance, std::forward<Args>(args)...);
//        Timer::task_list.push_back(m_taskp);
//    }
//
//    void Stop();
//
//public:
//    std::string m_name;
//    
//private:
//    Task* m_taskp;
//
//private:
//    static std::vector<Task*> task_list;
//};
//
//#endif /* Timer_h */
