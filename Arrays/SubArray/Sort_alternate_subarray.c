#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {

            cnt++;

            if(cnt%2!=0) {
                for(int k=i;k<=j;k++)
                    printf("%d ",arr[k]);
            }
            else {
                int len=j-i+1;
                int temp[len];

                for(int k=0;k<len;k++)
                    temp[k]=arr[i+k];

                for(int a=0;a<len-1;a++)
                    for(int b=0;b<len-a-1;b++)
                        if(temp[b]>temp[b+1]) {
                            int t=temp[b];
                            temp[b]=temp[b+1];
                            temp[b+1]=t;
                        }

                for(int k=0;k<len;k++)
                    printf("%d ",temp[k]);
            }

            printf("\n");
        }
    }
}