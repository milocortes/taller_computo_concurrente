/*

Programa: ThMove.C

*  Compilar
g++ -std=c++11 ThMove.C -lpthread -o ThMove 

*  Ejecutar.
./ThMove

*/

#include <iostream>
#include <thread>
#include <chrono>

void ThreadFunc()
{
    std::chrono::seconds workTime(5);
    std::this_thread::sleep_for(workTime); // sleep
}

int main(int argc, char* argv[]){
    std::thread T1(ThreadFunc);     // launch thread T1
    std::cout << "T1 identity = " << T1.get_id() << std::endl;
    std::thread T2 = std::move(T1); // transfers thread ownership
    std::cout << "New T1 identity = " << T1.get_id() << std::endl;
    std::cout << "T2 identity = " << T2.get_id() << std::endl;
    T2.join();
    return 0;
}