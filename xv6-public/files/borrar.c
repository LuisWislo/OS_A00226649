#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv){
    unlink(argv[1]);

}