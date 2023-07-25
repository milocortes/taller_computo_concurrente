/*

Programa: Cpp4_P.C

*  Compilar
g++ -std=c++11 Cpp4_S.C -lpthread -o Cpp4_S 

*  Ejecutar.
./Cpp4_S

*/

#include <iostream>
#include <thread>
#include <chrono>


void ThreadFunc(int& N){ N+=10;}    //a simple thread function

int main(int argc, char* argv[])
{
    int N = 10;
    std::cout << "Initial value of N = " << N << std::endl;
    //--------------------------------------------------------
    //std::thread T1(ThreadFunc, N);
    //T1.join();
    //std::cout << "First value of N = " << N << std::endl;
    //--------------------------------------------------------
    std::thread T2(ThreadFunc, std::ref(N));
    T2.join();
    std::cout << "Second value of N = " << N << std::endl;
    //--------------------------------------------------------

    return -0;
}

