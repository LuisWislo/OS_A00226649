#include "types.h"
#include "user.h"
#include "stat.h"

int main(int argc, char **argv){

    int i;
    //printf(2,"The argument counter is:%d\n",argc);
    if(argc!=2){
        printf(2,"Error: No sleeping time arguments / Only one argument needed.\n");
        exit();
    }


    ///printf(2,"i is %d",i);
    i = atoi(argv[1]);

    if(i>0){
        printf(2, "Imma sleep....\n");
        sleep(i);
        //exit();
    } else
    {
     printf(2, "Invalid time range for sleep.\n");
   }
    exit();
}