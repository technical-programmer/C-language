#include <stdio.h>
int fun1(int x ){
    return x+1;
}
int fun2(int x ){
    return x+2;
}
int fun3(int x ){
    return x+3;
}
int main(){
    int(*ptr_func1)(int)=fun1;
    int(*ptr_func2)(int)=fun2;
    int(*ptr_func3)(int)=fun3;
    int (*ptr[3])(int);
    ptr[0]=fun1;
    ptr[1]=fun2;
    ptr[2]=fun3;
    
    for(int i=0;i<=4;i++){
        printf("%d",(*ptr[i])(4));
    }
    return 0;
}