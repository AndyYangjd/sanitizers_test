// thread_sanitizer_test.cpp ---> Test for Thread-Sanitizer

#include <pthread.h>
#include <stdio.h>

int Global;

void* fcn_thread1(void* x){
    Global++;
    return NULL;
}

void* fcn_thread2(void* x){
    Global--;
    return NULL;
}

int main(int argc, char ** argv) {
    pthread_t t[2];

    pthread_create(&t[0], NULL, fcn_thread1, NULL);
    pthread_create(&t[1], NULL, fcn_thread2, NULL);

    pthread_join(t[0], NULL);
    pthread_join(t[1], NULL);

    return 0;
}