#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED

class Window
{
public:
    Window();
    void create();
    void show();
    void hide();
    void move();
    void resize(int,int);
    ~Window();
protected:
    int
      height
    , width
    , xPos
    , yPos;
    bool isShown;
    char windowArray[60][60];
};

class RandWindow: public Window
{
public:
    RandWindow();
    void create();
};

class AnswerWindow: public Window
{
public:
    AnswerWindow();
    void create();
};

class HelloWindow: public Window
{
public:
    HelloWindow();
    void create();
};

#endif // WINDOW_H_INCLUDED
