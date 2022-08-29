#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char command[2000];
    char path[1000];
    char port[10] = "8080";
    char unityVersion[100] = "2022.1.8f1";

    puts("Webgl local host");

    printf("Game Folder path: ");
    fflush(stdin);
    gets(path);

    printf("Unity Version (2022.1.8f1): ");
    fflush(stdin);
    gets(unityVersion);

    printf("Port: ");
    fflush(stdin);
    gets(port);

    puts("");

    strcpy(command, "C:\\\"Program Files\"\\Unity\\Hub\\Editor\\");
    strcat(command, unityVersion);
    strcat(command, "\\Editor\\Data\\PlaybackEngines\\WebGLSupport\\BuildTools\\SimpleWebServer.exe \"");
    strcat(command, path);
    strcat(command, "\" ");
    strcat(command, port);
    printf("Command:%s\n", command);

    system(command);

    return 0;
}