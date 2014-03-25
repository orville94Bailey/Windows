#include "Window.h"

using namespace std;

int main()
    {
        HelloWindow test;
        test.show();
        test.resize(30,20);
        test.show();

        RandWindow test0;
        test0.show();
        test0.resize(30,20);
        test0.show();

        AnswerWindow test1;
        test1.show();
        test1.resize(30,20);
        test1.show();

        Window test2;
        test2.show();
        test2.resize(30,20);
        test2.show();
        return 0;
    }
