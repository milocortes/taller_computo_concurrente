/*

Programa: Hello1_P.C

*  Compilar
g++ -std=c++11 Cpp1_S.C -lpthread -o Cpp1_S 

*  Ejecutar.
./Cpp1_S

*/

#include <iostream>
#include <thread>
#include <chrono>

void ThreadFunc(unsigned mSecs)
{
    std::chrono::milliseconds workTime(mSecs); // Create duration
    std::this_thread::sleep_for(workTime); // sleeps

}

int main(void)
{
    std::thread T(ThreadFunc, 3000); // thread created
    std::cout << "main : waiting for thread" << std::endl;

    T.join();

    std::cout << "main : done" << std::endl;

    return 0;

}