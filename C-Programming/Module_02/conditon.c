#include <stdio.h>

int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka >= 100)
    {
        printf("Pizza khabo . Low budget er Pizza. ha-ha-ha.\n");
    }
    else if (taka >= 50)
    {
        printf("Fuska khabo. Taka beshi nai.\n");
    }
    else
    {
        printf("Kichu khabo na. We are goribs.. (so sad)");
    }
    return 0;
}