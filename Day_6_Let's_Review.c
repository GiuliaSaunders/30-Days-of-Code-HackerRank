#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    
    
    scanf("%d", &t);
    
    if(t >= 1 && t<= 10) {
        for(int i = 0; i < t; i++) {
            char s[100000];
            scanf("%s", s);
            int len = strlen(s);
            
            char odd[10000] = "", even[10000] = "";
            int i_even = 0, i_odd = 0;
            
            if(len >= 2 && len <= 10000) {
                for(int j = 0; j < len; j++) {
                    if(j % 2 == 0) {
                        even[i_even] = s[j];
                        i_even++;
                    }
                    else {
                        odd[i_odd] = s[j];
                        i_odd++;
                    }
                }
                printf("%s %s\n", even, odd);
            }
        }
    } 
    return 0;
}
