#include<stdio.h>
main(){
        int num;
        printf("Enter any integer:");
        scanf("%d",&num);
        switch(num  > 0){
        	case 1:
        	printf(" %d is positive",num);
        	break;
        	case 0:
        	switch(num < 0){

        	        	case 1 :
        	printf(" %d is Negative",num);
        	break;
        	        	case 0 :
        	printf("%d is Zero",num);
        	break;
        	}
        	break;
        }
        return 0;
}
