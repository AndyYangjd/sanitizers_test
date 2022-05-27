// undefined_behaviour_sanitizer.cpp ---> test for undefined behaviour sanitizer

int main(int argc, char ** argv){
    int i = 2048;
    i << 28;

    return 0;
}