// gcc -c -fPIC lib1.cpp && gcc -o lib1.so lib1.o -fPIC -shared -lstdc++ && gcc -c proc1.cpp && gcc -o proc1 proc1.o -lstdc++ -ldl && ./proc1

#include <stdio.h>
#include <dlfcn.h>

main() {
    printf("\nloading dynamic library...\n");
    void * module = dlopen("./lib1.so", RTLD_NOW);
    printf("dynamic library is loaded\n");

    printf("\ndynamic library module handle: %p\n\n", module);

    printf("unloading dynamic library...\n");
    dlclose(module);
    printf("dynamic library is unloaded\n\n");
}
