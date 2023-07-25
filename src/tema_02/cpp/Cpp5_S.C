/*

Programa: Cpp5_P.C

*  Compilar
g++ -std=c++11 Cpp5_S.C -lpthread -o Cpp5_S 

*  Ejecutar.
./Cpp5_S

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
    double result;
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
    result = x;
    }
};


int main(int argc, char* argv[])
{
    Worker w(612);             
    std::thread T(std::ref(w), 25, 4);    // w passed by reference
    T.join();
    std::cout << "main: result obtained is " << w.result << std::endl;

    return 0;
}
