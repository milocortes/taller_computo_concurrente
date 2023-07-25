/*

Programa: Cpp2_P.C

*  Compilar
g++ -std=c++11 Cpp2_S.C -lpthread -o Cpp2_S 

*  Ejecutar.
./Cpp2_S

*/

#include <iostream>
#include <thread>
#include <chrono>

void ThreadFunc(unsigned mSecs){
    std::chrono::milliseconds workTime(mSecs); // create duration
    std::this_thread::sleep_for(workTime); // sleep
}

std::thread *Wth; // global data

int main(int argc, char* argv[]){
    std::cout << "main: startup" << std::endl;
    Wth = new std::thread(ThreadFunc, 3000); // thread created

    std::cout << "main: waiting for thread " << std::endl;

    Wth -> join();

    std::cout << "main: done" << std::endl;

    delete Wth;

    return 0;
}