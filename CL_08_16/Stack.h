//
// Created by Joe on 2024/8/16.
//

#ifndef CL_08_16_STACK_H
#define CL_08_16_STACK_H
#include <iostream>
namespace bit
{
    typedef struct Stack
    {
        int* next;
        int top;
        int capacity;
    }ST;

    void StackInit(ST* ps);


}
#endif //CL_08_16_STACK_H
