/*

Programa: RunTeam1_S.C

*  Compilar
g++ -std=c++11 RunTeam1_S.C -lpthread -o RunTeam1_S 

*  Ejecutar.
./RunTeam1_S

*/

#include <iostream>
#include <thread>
#include <chrono>

std::thread **Wth;      // array of the thread pointers
int nTh;                // number of threads

int GetRank()           // auxiliary
{
    std::thread::id my_id, target_id;
    int n, my_rank;

    my_id = std::this_thread::get_id();
    n = 0;

    do
    {
        n++;
        target_id = Wth[n] -> get_id();
    } while (my_id != target_id && n < nTh);
    
    if(n <= nTh) my_rank = n;   // if rank OK, return
    else my_rank = (-1);        // else, return error

    return my_rank;
}

void helloFunc()            // thread function
{
    std::chrono::milliseconds delay1(500);
    std::this_thread::sleep_for(delay1);    // first delay
    int rank = GetRank();
    //---------------------------------------
    std::chrono::seconds delay2(rank);
    std::this_thread::sleep_for(delay2);    // second delay
    std::cout << "Hello from thread number " << rank << std::endl;
}

int main(int argc, char* argv[]){
    if(argc == 2) nTh = atoi(argv[1]);
    else nTh = 4;

    Wth = new std::thread*[nTh+1];      // allocate thread array

    for(int n=1; n<=nTh; ++n) 
        Wth[n] = new std::thread(helloFunc);     // create threads

    for(int n=1; n<=nTh; ++n) Wth[n] -> join(); // Join threads

    std::cout << "main: done" << std::endl;

    for(int n=1; n<=nTh; ++n) delete Wth[n]; // delete threads

    delete [] Wth;                           // delete array
    
    return 0;

}