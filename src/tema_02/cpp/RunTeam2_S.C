/*

Programa: RunTeam2_S.C

*  Compilar
g++ -std=c++11 RunTeam2_S.C -lpthread -o RunTeam2_S 

*  Ejecutar.
./RunTeam2_S

*/

#include <iostream>
#include <thread>
#include <chrono>
#include <vector>

void helloFunc(unsigned rank)
{
    std::chrono::seconds workTime(rank);
    std::this_thread::sleep_for(workTime);      // sleep
    std::cout << "Hello from thread number " << rank << std::endl;
}

int main(int argc, char* argv[]){
    unsigned n, nTh;
    if(argc == 2) nTh = atoi(argv[1]);
    else nTh = 4;

    std::vector<std::thread> workers;

    for (n = 0; n < nTh; ++n)
        workers.push_back(std::thread(helloFunc, n));

    for(auto &th : workers) th.join();

    std::cout << "Main: done" << std::endl;

    return 0;

}