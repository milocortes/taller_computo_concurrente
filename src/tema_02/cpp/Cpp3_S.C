/*

Programa: Cpp3_P.C

*  Compilar
g++ -std=c++11 Cpp3_S.C -lpthread -o Cpp3_S 

*  Ejecutar.
./Cpp3_S

*/

#include <iostream>
#include <thread>
#include <chrono>
#include <math.h>       /* fabs */


class Worker    // This is the function object
{
private:
    unsigned Niters;

public:
    Worker(unsigned N) : Niters(N){}

    ~Worker(){};

    void operator()(double target, double guess)
    {
        std::cout << "Worker: computing sqrt(" << target
        << "), iterations = " << Niters << std::endl;

        // use Newton's method
        //--------------------

        double x;
        double xl = guess;

        for ( unsigned i = 0; i < Niters; i++)
        {
            x = xl - (xl*xl - target) / (2*xl);
            if(fabs(x-xl) < 0.0000001) break;
            xl = x;
            std::cout << "Iter " << i << " = " << x << std::endl;
        }
    
    std::cout << "Worker: answer = " << x << std::endl;
    }
};


int main(int argc, char* argv[])
{
    Worker w(612);              // object w is constructed
    std::thread T(w, 25, 4);    // thread function is w(25, 4)
    
    std::cout << "main: waiting for thread " << std::endl;
    T.join();
    std::cout << "main: done" << std::endl;

    return 0;
}
