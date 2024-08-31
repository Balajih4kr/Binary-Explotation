#include <stdio.h>
#include <string.h>

int main(){
    char hex_exploit[20];
    int inc = 2;
    int offset = 1;
   
    printf("                                ___       __     __ __  ____  ______\n");
    printf("                               /   | ____/ /____/ // / / __ \/ ____/\n");
    printf("                              / /| |/ __  / ___/ // /_/ /_/ / __/   \n");
    printf("                             / ___ / /_/ / /  /__  __/ _, _/ /___   \n");
    printf("                            /_/  |_\__,_/_/     /_/ /_/ |_/_____/   \n");
    printf("                                                                    \n");
    printf("                                                                    \n");
    printf("                                                        --> BALAJI\n");
    printf("                                                                    \n");
    printf("                                                                    \n");

    printf("        NOTE : COPY THE FULL ADDRESS INCLUDING '0x'");

     
    printf("                                                                    \n");
    printf("                                                                    \n");
    printf("Enter your Little-Endian Address Format (max 8 characters): ");
    scanf("%s", hex_exploit);

   
    char *hex_address = &hex_exploit[2];
    int hex_len = strlen(hex_address);

    for (int i = 0; i < strlen(hex_address); i += 2) {
        if (i + 1 <hex_len ) {
                printf("/x%c%c", hex_address[hex_len - inc], hex_address[hex_len - inc + offset]);
        }
        inc += 2;
    }
    if(hex_len % 2 ==1){
        printf("/x0%c",hex_address[0]);
    }
    printf("\n");
    return 0;
}
