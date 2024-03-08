#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct data {
    int id;
    float sl;
    float sw;
    float pl;
    float pw;
    char species[1024];
};
int main() {
    struct data d[1024];
    FILE *f;
    f = fopen("Iris.csv", "r");
    if(f == NULL) {
        printf("File not Found\n");
        exit(0);
    }
    char line[1024];
    int record = 0;
    while (fgets(line, sizeof(line), f) != NULL) {
        if (record > 0){
            char *token = strtok(line, ",");//tokening each value by using , as condition
            if (token != NULL) {//checks if at end
                d[record].id = atoi(token);//first value is taken as plant id
                for (int i = 1; i < 5; i++) {//using for loop to enter the next four float values
                    token = strtok(NULL, ",");
                    if (token != NULL) {//checking if at end
                        switch (i) {
                            case 1:
                                d[record].sl = atof(token);
                                break;
                            case 2:
                                d[record].sw = atof(token);
                                break;
                            case 3:
                                d[record].pl = atof(token);
                                break;
                            case 4:
                                d[record].pw = atof(token);
                                break;
                        }
                    }
                }
                token = strtok(NULL, "\n");
                if (token != NULL) {
                    strncpy(d[record].species,token,sizeof(d[record].species) - 1);
                }
                printf("\n%d,%.2f,%.2f,%.2f,%.2f,%s\n",d[record].id,d[record].sl,d[record].sw,d[record].pl,d[record].pw,d[record].species);
            }
        }
        record++;
    }
    printf("Total number of flowers found is : %d\n",record-1);
    fclose(f);
    //test
}
