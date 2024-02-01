#include <unistd.h>
int main(int ac, char **av)
{
    int i;


    i = 0;
    if(ac == 3)
    {
        if(av[1][0] == 'p' && av[1][1] == 'a' && av[1][2] == 'd' && av[1][3] == 'i' && av[1][4] == 'n' && av[1][5] == 't' && av[1][6] == 'o' && av[1][7] == 'n' )
        {
            write(1, "padinto", 7);
        }
        else if(av[1][0] == 'd' && av[1][1] == 'd' && av[1][2] == 'f' && av[1][3] == '6' && av[1][4] == 'v' && av[1][5] == 'e' && av[1][6] == 'w' && av[1][7] == 'g' && av[1][8] == '6' && av[1][9] == '4' && av[1][10] == 'f')
        {
            write(1, "df6ewg4", 7);
        }
        else if(av[1][0] == 'r' && av[1][1] == 'i' && av[1][2] == 'e' && av[1][3] == 'n')
        {
            write(1, "rien", 4);
        }
    }
    write(1, "\n", 1);
    return (0);

}
