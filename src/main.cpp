#include "head.h"
#include<cstring>
int main(int argc, char* argv[]){
    const int a=2, b=4;
    if(argc!=2)return -1;
    if(strcmp(argv[1], "add") == 0)add(a, b);
    if(strcmp(argv[1], "sub") == 0)sub(a, b);
    return 0;
}
