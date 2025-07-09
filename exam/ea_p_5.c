
#include <stdio.h>

int main()
{
    int n = 5;

    // first loop for printing rows
    for (int i = 1; i <=n; i++) {
        int tem =i;
            for(int j=1; j<=(2*i)-1; j++){
                if(tem>9){
                    tem=0;
                }
               printf("%d ",tem++);
            }
        printf("\n");
    }
    return 0;
}
