/*

Programa: Hello1_P.C

*  Compilar
gcc Hello1_P.C -o Hello1_P -lpthread

*  Ejecutar.
./Hello1_P.C

*/

#include <stdio.h>
#include <pthread.h>

#define NTHREADS 4

/*--------------------------------------------------
* Declare an array of thread identifiers. This array
* will be initialized by pthread_create() 
*---------------------------------------------------*/

pthread_t hello_id[NTHREADS];

/*--------------------------------------------------
* This is the thread function executed by each thread.
* Thread functions receive and return a (void *), but 
* here the argument and return value are ignored.
*--------------------------------------------------*/
void *hello_world(void *arg)
{
    printf("Hello, world \n");
    return NULL;
}

int main(int argc, char *argv[])
{
    int i,status;

    /*---------------------------------------------------------
    * Create threads. The first NULL means that the new thread
    * picks the default attributes. The second NULL is the void 
    * pointer passed as argument to the thread function
    -----------------------------------------------------------*/

    for ( i = 0; i < NTHREADS; i++)
    {
        pthread_create (&hello_id[i], NULL, hello_world, NULL);
    }

    /*----------------------------------------------------------
    * Join the threads in the same order they have been created.
    * The NULL argument means that we do no want to receive the
    * thread return value in the join operation
    *-----------------------------------------------------------*/
    for ( i = 0; i < NTHREADS; i++)
    {
        pthread_join(hello_id[i], NULL);
    }

    printf("\n From main : threads have been joined \n");

    return 0;
    
}
