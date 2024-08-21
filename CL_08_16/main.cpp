

//#include "Stack.h"
//#include "Queue.h"
//#include <stdio.h>




//namespace bit
//{
//    int rand = 0;
//
//    int Add(int left, int right)
//    {
//        return left + right;
//    }
//
//    struct Node
//    {
//        struct Node* next;
//        int val;
//    };
//
//    struct Node node = {NULL, 0};
//
//    namespace xxx
//    {
//        int rand = 111;
//    }
//}

//using namespace bit;
//int main() {
//    printf("hello world\n");
//    printf("%p\n", rand);
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//}


//using bit::Add;
//using bit::node;
//int main()
//{
//    printf("%d\n", bit::xxx::rand);
//    printf("%d\n", Add(5, 6));
//    printf("%d\n", node.val);
//    printf("%d\n", strlen("hello"));
//    bit::QueueInit();
//    bit::StackInit();
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    double j = 0.0;
//    cin >> i >> j;
//    cout << i << endl;
//    cout << j << endl;
//
//    cout << &i << endl;
//    cout << &j << endl;
//    return 0;
//}

//int main()
//{
//    float x = 11111.11;
//    printf("%02.3f", x);
//    return 0;
//}

//void Func(int a = 1)
//{
//    cout << a << endl;
//}

//void Func(int a = 0, int b = 1, int c = 2)
//{
//    cout << "a = "   << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl;
//}

#include <iostream>
using namespace std;
#include "Stack.h"

//namespace bit
//{
//    typedef struct Stack
//    {
//        int* next;
//        int top;
//        int capacity;
//    }ST;
//
//    void StackInit(struct Stack* ps)
//    {
//        ps->next = NULL;
//        ps->top = 0;
//        ps->capacity = 0;
//    }
//
//
//}



//int main()
//{
//    bit::ST st;
//    StackInit(&st);
//    return 0;
//}


//void Func(int x = 1, int y = 2, int z = 3);
//
//void Func(int x, int y, int z)
//{
//    cout << x << y << z;
//}
//
//int main()
//{
//    Func();
//    return 0;
//}

//int Add(int x = 1, int y = 2)
//{
//    return x + y;
//}
//
//float Add(double x = 1.1, int y = 3)
//{
//    return x + y;
//}
//
//void swap(int* x, int* y)
//{
//    int tmp = *x;
//    *x = *y;
//    *y = *x;
//}
//
//void swap(double* x, double* y)
//{
//    int tmp = *x;
//    *x = *y;
//    *y = *x;
//}

void func(int a)
{
    cout << "void func(int a)" << endl;
}

void func(int a, int b = 1)
{
    cout << "void func(int a, int b = 1)" << endl;
}

int main()
{
//    Add(1, 1);
//    Add(1.1, 1);
//    int a = 0;
//    int b = 1;
//    cout << a << b << endl;
//    cout << a;
//    cout << b;
//    swap(a, b);
//    cout << a << b << endl;
//
//    double c = 1.1;
//    double d = 2.2;
//
//    cout << c << d << endl;
//    swap(c, d);
//    cout << c << d << endl;
//    Add();
    func(1, 1);
    return 0;
}

