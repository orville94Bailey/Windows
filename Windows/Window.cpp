#include "Window.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

Window::Window()
    {
        create();
    }

void Window::create()
    {
        height = 60;
        width = 60;
        xPos = 0;
        yPos = 0;
        isShown = 0;

        for (int x = 0; x<60; x++)
        {
            for (int y = 0; y<60; y++)
            {
                windowArray[x][y] = ' ';
            }
        }

        for (int x = 0; x<60; x++)
        {
            for (int y = 0; y<60; y++)
            {
                if((x==0 && (y!= 0 || y!=59)) || (x==59 && (y!= 0 || y!=59)))
                {
                    windowArray[x][y] = '|';
                }

                if((y==0 && (x!= 0 || x!=59)) || (y==59 && (x!= 0 || x!=59)))
                {
                    windowArray[x][y] = '-';
                }

                if((x==0 && (y== 0 || y==59)) || (x==59 && (y== 0 || y==59)))
                {
                    windowArray[x][y] = '+';
                }
            }
        }
    }

void Window::show()
    {
        if(!isShown)
        {
            isShown = 1;
            for(int yLoop = 0; yLoop< height; yLoop++)
            {
                for(int xLoop = 0; xLoop< width; xLoop++)
                {
                    cout<<windowArray[xLoop][yLoop];
                }
                cout<<endl;
            }
        }
    }

void Window::hide()
    {
        isShown = 0;
        for (int i = 0; i<25;i++)
        {
            cout<<endl;
        }
    }

void Window::move()
    {

    }

void Window::resize(int x, int y)
    {
        hide();
        width = x;
        height = y;
        for (int x = 0; x<width; x++)
        {
            for (int y = 0; y<height; y++)
            {
                if((x==0 && (y!= 0 || y!=(height-1))) || (x==(width-1) && (y!= 0 || y!=(height-1))))
                {
                    windowArray[x][y] = '|';
                }

                if((y==0 && (x!= 0 || x!=(width-1))) || (y==(height-1) && (x!= 0 || x!=(width-1))))
                {
                    windowArray[x][y] = '-';
                }

                if((x==0 && (y== 0 || y==(height-1))) || (x==(width-1) && (y== 0 || y==(height-1))))
                {
                    windowArray[x][y] = '+';
                }
            }
        }
    }

Window::~Window()
    {

    }

RandWindow::RandWindow()
    {
        create();
    }

void RandWindow::create()
    {
        height = 60;
        width = 60;
        xPos = 0;
        yPos = 0;
        isShown = 0;

        for (int x = 0; x<60; x++)
        {
            for (int y = 0; y<60; y++)
            {
                windowArray[x][y] = ' ';
            }
        }

        for (int x = 0; x<60; x++)
        {
            for (int y = 0; y<60; y++)
            {
                if((x==0 && (y!= 0 || y!=59)) || (x==59 && (y!= 0 || y!=59)))
                        {
                            windowArray[x][y] = '|';
                        }

                else if((y==0 && (x!= 0 || x!=59)) || (y==59 && (x!= 0 || x!=59)))
                        {
                            windowArray[x][y] = '-';
                        }

                else if((x==0 && (y== 0 || y==59)) || (x==59 && (y== 0 || y==59)))
                        {
                            windowArray[x][y] = '+';
                        }
                else
                {
                    windowArray[x][y] = (rand()%94) + 32;
                }
            }
        }
    }

AnswerWindow::AnswerWindow()
    {
        create();
    }

void AnswerWindow::create()
    {
        height = 60;
        width = 60;
        xPos = 0;
        yPos = 0;
        isShown = 0;

        for (int x = 0; x<60; x++)
        {
            for (int y = 0; y<60; y++)
            {
                windowArray[x][y] = ' ';
            }
        }

        for (int x = 0; x<60; x++)
        {
            for (int y = 0; y<60; y++)
            {
                if((x==0 && (y!= 0 || y!=59)) || (x==59 && (y!= 0 || y!=59)))
                        {
                            windowArray[x][y] = '|';
                        }

                else if((y==0 && (x!= 0 || x!=59)) || (y==59 && (x!= 0 || x!=59)))
                        {
                            windowArray[x][y] = '-';
                        }

                else if((x==0 && (y== 0 || y==59)) || (x==59 && (y== 0 || y==59)))
                        {
                            windowArray[x][y] = '+';
                        }
                else
                {
                    windowArray[x][y] = '*';
                }
            }
        }
    }

HelloWindow::HelloWindow()
    {
        create();
    }

void HelloWindow::create()
    {
        height = 60;
        width = 60;
        xPos = 0;
        yPos = 0;
        isShown = 0;

        for (int x = 0; x<60; x++)
        {
            for (int y = 0; y<60; y++)
            {
                windowArray[x][y] = ' ';
            }
        }

        for (int x = 0; x<60; x++)
        {
            for (int y = 0; y<60; y++)
            {
                if((x==0 && (y!= 0 || y!=59)) || (x==59 && (y!= 0 || y!=59)))
                        {
                            windowArray[x][y] = '|';
                        }

                else if((y==0 && (x!= 0 || x!=59)) || (y==59 && (x!= 0 || x!=59)))
                        {
                            windowArray[x][y] = '-';
                        }

                else if((x==0 && (y== 0 || y==59)) || (x==59 && (y== 0 || y==59)))
                        {
                            windowArray[x][y] = '+';
                        }
            }
        }
        if(height >= 3 && width >= 7)
        {
            windowArray[1][1]='h';
            windowArray[2][1]='e';
            windowArray[3][1]='l';
            windowArray[4][1]='l';
            windowArray[5][1]='o';
        }

    }
