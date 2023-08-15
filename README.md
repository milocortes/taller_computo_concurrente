# Taller del Curso de Cómputo Concurrente

Implementación de los algoritmos y conceptos de concurrencia en C++.

## Contenido

* 1.- Threads (Alessandrini, 2015)
    - POSIX threads
    - Windows threads
    - C++ threads

* 2.- Acceso Concurrente a Datos compartidos (Alessandrini, 2015; Williams, 2019)
    - Race Conditions
    - Sincronización de accesos a memoria
    - Exclusión mutua y locks.

* 3.- Event synchronization (Alessandrini, 2015; Williams, 2019)
    - Condition variables
    - Futures

* 4.- Modelo de Memoria en C++ y operaciones en tipos atómicos (Williams, 2019).
    - Coherencia de caché y consistencia de memoria (Alessandrini, 2015).
    - Modelos de consistencia de memoria y Ordenamiento de Memoria (Solihin, 2015)
    - Garantı́as del ordenamiento de memoria en C++
    - Spin locks

* 5.- Estructuras de datos basadas en locks (Barlas, 2022; Williams, 2019)
    - Queues
    - Lists

* 6.- Estructuras de datos libres de locks (Barlas, 2022; Williams, 2019)
    - Lock-free stacks
    - A bounded lock-free queue: first attempt
    - The ABA problem
    - A fixed bounded lock-free queue
    - A unbounded lock-free queue


## Referencias
* Alessandrini, V. (2015). Shared memory application programming: Concepts and strategies in Multicore application programming. Morgan Kaufmann, first edition.
* Barlas, G. (2022). Multicore and GPU Programming: An integrated approach. Elsevier, second edition.
* Evans, B., Clark, J., and Verburg, M. (2022). The Well-Grounded Java Developer. Manning, second edition.
* Herlihy, M., Shavit, N., Luchangco, V., and Spear, M. (2021). The Art of Multiprocessor Programming (Second Edition). Morgan Kaufmann, Boston, second edition edition.
* Robey, R. and Zamora, Y. (2021). Parallel and High Performance Computing. Manning, first edition.
* Solihin, Y. (2015). Fundamentals of parallel multicore architecture. CRC Press, first edition.
* Williams, A. (2019). C++ concurrency in action. Manning, second edition.