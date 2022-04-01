#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    char ip[10][20] = {"192.168.0.64", "192.168.0.60", "192.168.0.68", "132.147.3.3"};
    char et[10][20] = {"00_A8_00_40_8E_FS", "00_16_17_31_8e_22", "00_16_17_31_8E_F7", "00_16_17_31_8E_08"};
    char ipaddr[20], etaddr[20];
    int i, option;
    int x = 0, y = 0;
    while (1)
    {
        printf("\n Enter the Choice");
        printf("\n\n 1.ARP 2.RARP 3.EXIT");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\n enter IP address");
            scanf("%s", ipaddr);
            for (i = 0; i <= 20; i++)
            {
                if (strcmp(ipaddr, ip[i]) == 0)
                {
                    printf("Ethernet address is%s", et[i]);
                    x = 1;
                }
            }
            if (x == 0)
                printf("Invalid IP Address");
            x = 0;
            break;
        case 2:
            printf("enter Ethernet address");
            scanf("%s", etaddr);
            for (i = 0; i <= 20; i++)
            {
                if (strcmp(etaddr, et[i]) == 0)
                {
                    printf("IP address is %s", ip[i]);
                    y = 1;
                }
            }
            if (y == 0)
                printf("Invalid Ethernet address");
            y = 0;
            break;
        case 3:
            exit(0);
        }
    }
}
