# Taller del Curso de Cómputo Concurrente

Implementación de los algoritmos y conceptos de concurrencia en C++.

## Contenido
* 1.- Arquitectura de Memoria
    - Memoria principal y cachés (Herlihy et al., 2021).
    - The memory hierarchy and theoretical memory bandwith (Robey and Zamora, 2021).
    - Microbeanchmark : Empirical measurement of bandwith and flops (Robey and Zamora, 2021).

* 2.- Threads (Alessandrini, 2015)
    - POSIX threads
    - Windows threads
    - C++ threads
    - Java threads (Evans et al., 2022)

* 3.- Introduction to Memory Hierarchy Organization (Solihin, 2015).
    - Basic Architecture of a cache.
            + Placement Policy.
            + Replacement Policy.
            + Write Policy.
    - Prefetching.

* 4.- Introduction to Shared Memory Multiprocessors(Solihin, 2015).
    - The Cache Coherence Problem.
            + MESI protocol (Herlihy et al., 2021).
    - Memory Consistency Problem.
            + Sequencial Consistency.
            + Relaxed Consistency Models.
    - Synchronization Problem.
            + Lock implementations (Atomics operations, CAS, LLCL).
            + Barriers implementations.
            + Transactional memory.

* 5.- Acceso Concurrente a Datos compartidos (Alessandrini, 2015; Williams, 2019)
    - Race Conditions
    - Sincronización de accesos a memoria
    - Exclusión mutua y locks.

* 6.- Event synchronization (Alessandrini, 2015; Williams, 2019)
    - Sincronizing concurrent operations
    - Condition variables
    - Futures

* 7.- Modelos de Memoria
    - Modelo de Memoria
    - Coherencia de caché y consistencia de memoria (Alessandrini, 2015).
    - Modelos de consistencia de memoria y Ordenamiento de Memoria (Solihin, 2015)
    - Modelo de Memoria en C++ y operaciones en tipos atómicos (Williams, 2019).
    - Garantı́as del ordenamiento de memoria en C++

* 8.- Estructuras de datos basadas en locks (Barlas, 2022; Williams, 2019)
    - Queues
    - Lists
    - Spin locks

* 9.- Estructuras de datos libres de locks (Barlas, 2022; Williams, 2019)
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