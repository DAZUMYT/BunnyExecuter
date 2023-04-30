// Title: BunnyExecuter Example Payload
// Description: Windows notification message for testing purposes
// AUTHOR: DAZUM
// Version: 1.1

#include <stdio.h>
#include <windows.h>

int main(){
    
    MessageBoxW(
        NULL,
        L"It Works! You will just need to change this file for the one you are willing to execute.",
        L"IT WORKS",
        MB_OK | MB_ICONEXCLAMATION
    );

}