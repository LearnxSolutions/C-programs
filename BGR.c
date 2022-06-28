#include <stdio.h>

int main()
{
    int Col,Row,i,j,k,pad,r,a,b,c,rem;//declaring variables as integers
    scanf("%i %i",&Col,&Row);//getting the number of columns and rows as inputs
    printf("%i %i",Col,Row);//prints the number of columns and rows
    printf("\n");
    rem = (Col*3)%4;//calculates the remainder value
    if(rem == 0){//checking whether the remainder is equal to zero or not
        pad = 0;//if remainder equals zero then the padding value is zero
    }
    else{
        pad=4-rem;//calculates the number of padding values
    }
    for(i=0;i<Row;i++){ //accessing rows

        for(j=0;j<Col;j++){ //access the first three BGR values
                scanf("%i %i %i",&a,&b,&c);//get the first three BGR values
                printf("%i %i %i",(255-a),(255-b),(255-c));//prints modified BGR
                printf("\n");
        }

          for(k=0;k<pad;k++){//loop for printing padding values
          scanf("%i",&r);//scanning padding values
          printf("%i",r);//prints padding value
          printf("\n",0);


         }


         }
return 0;
}

