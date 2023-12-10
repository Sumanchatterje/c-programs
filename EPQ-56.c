//mr.x walks 20ft and 8inch in a narrow road and covers it in 10 mins.
//from mr. x ending point mr.y starts walking and covers a distance 32 ft and 6inch in 15 min.
//find total distance covered and time using structure
#include "stdio.h"
struct dt {
    int ft;
    int inch;
    int time;
};
int main() {
    struct dt s1, s2, s3;
    s1.ft = 20, s1.inch = 8, s1.time = 10;
    s2.ft = 32, s2.inch = 6, s2.time = 15;
    s3.ft = s1.ft + s2.ft;
    s3.inch = s1.inch + s2.inch;
    s3.time = s1.time + s2.time;
    while (123) {
        if (s3.inch >= 12)
        {
            s3.inch=s3.inch-12;
            s3.ft++;
        }
        if (s3.inch < 12) {
            break;
        }
    }
    printf("\nTotal ft is: %dft",s3.ft);
    printf("\nTotal inch is: %dinch",s3.inch);
    printf("\nTotal time is: %dmins",s3.time);
}



