// "Test for Address-Sanitizer"

int g_array[100] = {-1};

int main(int argc, char ** argv) {
    return g_array[argc+100];

    return 0;
}
