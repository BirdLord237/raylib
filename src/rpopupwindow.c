#include <windows.h>
#include <stdio.h>

void make_popup_window(const char *title, const char *text)
{
    MessageBox(NULL, text, title, MB_OK | MB_ICONINFORMATION);
}