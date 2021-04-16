#include <stdio.h>
#include <string.h>

struct sigrecord
{
    int signum;
    char signame[20];
    char sigdesc[100];
} sigline, *sigline_p;

int main(void)
{
    sigline.signum = 5;
    strcpy(sigline.signame, "SIGINT");
    strcpy(sigline.sigdesc, "Interrupt from keyboard");

    sigline_p = &sigline;
    printf("%d %s %s\n", sigline.signum, sigline.signame, sigline.sigdesc);

    sigline_p->signum = 4;
    strcpy(sigline_p->signame, "SINGING OUT");
    strcpy(sigline_p->sigdesc, "Interrrupt from mouse");
    printf("%d %s %s\n", sigline.signum, sigline.signame, sigline.sigdesc);
}
