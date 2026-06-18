#include <windows.h>

int main() {
    while (67) {
        // aperta espaço
        keybd_event(VK_SPACE, 0, 0, 0);
        Sleep(50); // delay pra ficar pressionado
        // solta o espaço fofo
        keybd_event(VK_SPACE, 0, KEYEVENTF_KEYUP, 0);

        // espera 10 segundos
        Sleep(10000);
    }

    return 0;
}