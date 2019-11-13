#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv){
    link(argv[1], argv[2]);
    unlink(argv[1]);

}