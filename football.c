#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char data[100];
    int i=0,j=0,d=2,count=0;
    printf("Enter input(max: 100, 0 or 1 accepted) :");
    scanf("%s",data);
    if(strlen(data)<1 || strlen(data)>100){
                printf("\n *** Length Error ***\n");
                exit(0);
            }else{
                    while(i<strlen(data)){
                        if(data[i] != '0' && data[i] != '1'){
                            printf("\n*** wrong input ***\n");
                            exit(0);
                        }else{
                            if(data[i+1]!='\0'){
                                if(data[i]!= data[i+1]){
                                    count++;
                                }
                            }
                        }
                        i++;
                    }
                    if(count!= 0){
                        while(j<strlen(data)-1){
                            if(data[j] == data[j+1]){
                                d++;
                                if (d==7){
                                    break;
                                }
                            }else{
                            d=2;
                            }
                            j++;
                        }
                    }else{
                        printf("\n *** Must be 0 & 1 combination *** \n");
                        exit(0);
                    }
                }

                if(d==7){
                    printf("\n Yes \n");
                }else{
                    printf(" \n No \n");
                }


    getch();
    return 0;
}
