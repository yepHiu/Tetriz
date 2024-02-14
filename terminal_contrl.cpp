#include <iostream>
#include <terminal_contrl.h>

using namespace std;

#define ESC "\033["

void tc::MoveTo(int row,int col)
{
    cout<<ESC<<row<<";"<<col<<"H";
}

void tc::SetFontColor(int id)
{
    cout<<ESC<<"38;5;"<<id<<"m";
}

void tc::SetBackColor(int id)
{
    cout<<ESC<<"48;5;"<<id<<"m";
}

void tc::EraseScreen(void)
{
    cout<<ESC<<"2J";
}

void tc::SetMode()
{
    // cout<<ESC<<"1;24;"
}

void tc::ResetMode(void)
{
    cout<<ESC<<"0m";
}

void tc::HideCursor(void)
{
    cout<<ESC<<"?25l";
}

void tc::ShowCursor()
{
    cout<<ESC<<"?25lh";  
}

