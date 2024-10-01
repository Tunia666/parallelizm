#include <stdio.h>
#include <omp.h>
int main()
{
    printf("Hello, World!\n");

#pragma omp parallel
    { int i, n;
    i = omp_get_thread_num();//	Возвращает число потоков потока, выполняемого в команде потоков.
    n = omp_get_num_threads();//Возвращает количество потоков в параллельном регионе.
    printf("I’m thread % d of % d\n", i, n);
    }
    return 0;
}

/*
#include <stdio.h>
#include <omp.h>
int main()
{
    int i;
#pragma omp parallel
    {
#pragma omp for
        for (i = 0; i < 1000; i++)
            printf(" % d ", i);
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <omp.h>
int main()
{
    int i;
#pragma omp parallel sections private(i)
    {
#pragma omp section
        printf("1st half\n");
        for (i = 0; i < 500; i++) printf("%d ",i);
#pragma omp section
        printf("2nd half\n");
        for (i = 501; i < 500; i++) printf("%d", i);
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <omp.h>
int main()
{
    int i;
#pragma omp parallel private(i)
    {
#pragma omp for
        for (i = 0; i < 100; i++) printf("% d", i);
#pragma omp master
        printf("I’m Master!\n");
#pragma omp for
        for (i = 0; i < 100; i++) printf("% d", i);
    }
    return 0;
}
*/

