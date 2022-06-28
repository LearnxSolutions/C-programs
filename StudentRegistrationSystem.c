//calling standard libraries
#include <stdio.h>
#include <stdlib.h>
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
   
//defining a linked list node
typedef struct node {char batch[3];
                     char regNo[4];
                     char firstName[20];
                     char lastName[20];
                     float cGPA;
                     struct node *Next;
                     }node;
// function prototypes
int strCmp (char *str1,char *str2);
void printsystem();
void printAll(node *head);
node *AddNewStudent();

int NoOfTimes=0;//defining a global variable to count the no of students data entered by the user
node *head=NULL;//defining a node type pointer global variable

int main() {
    
    char a[4];// defining a char array to copy the registration number
    char b[3];// defining a char array to copy the batch number
    char RgNumber[8];// defining a char array to scan the registration number
    int option;//defining a variable to scan the user's option
    int i;//defining a variable for the loop
   
    printsystem();// calling the function to print the user interface message
     
    for(i=0;i<1000;i++){//loop to print the message and scan the option again
    printf("------------------\n");
    printf("ENTER OPTION [0-4]\n");
    printf("------------------\n");
    scanf("%i",&option);    
   
   
    if(option==1){//checks the option
        AddNewStudent(); //if option is 1 calling the function to add a new student
        
     }else if (option==2){ //checks the option
        char temparary;
        printf("Enter the Registration Number: ");
        scanf("%c",&temparary);
        scanf("%s",RgNumber);// scans reg number from user
           
            b[0]=RgNumber[2];//copy the batch number to array called b
            b[1]=RgNumber[3];
            b[2]='\0';
       
            a[0]=RgNumber[5];//copy the reg number to array called a
            a[1]=RgNumber[6];
            a[2]=RgNumber[7];
            a[3]='\0';

        node *p=head;
        while(p!=NULL){//loop to check whether the which data entry is matched with reg no
            if((strCmp(p->regNo,a)==0)&& (strCmp(p->batch,b)==0)){//checks whether the reg no is matching using string compare
            printf("The student %s %s (E/%s/%s) has a cumulative GPA of %.2f\n\n",p->firstName,p->lastName,p->batch,p->regNo,p->cGPA);

    
        }else if((strCmp(p->regNo,a)!=0)&& (strCmp(p->batch,b)!=0)){//else
           
            printf("No student with the given Registration Number!\n\n\n");//print the statement
            
        }

     break;

    }if(NoOfTimes==0){//checks whether a data entry is added or not
             printf("No student with the given Registration Number!\n\n");
         }
}

    else if(option==3){//checks the option
       printAll(head);// calling the function to print all the students info
       printf("\n");


} else if(option==4){ //checks the option
        char temparary;
        printf("Enter the Registration Number: ");
        scanf("%c",&temparary);
        scanf("%s",RgNumber);
            b[0]=RgNumber[2];//copy the batch number to array called b
            b[1]=RgNumber[3];
            b[2]='\0';

            a[0]=RgNumber[5];//copy the reg number to array called a
            a[1]=RgNumber[6];
            a[2]=RgNumber[7];
            a[3]='\0';
   node * p=head;
 while(p!=NULL){//loop to check whether the which data entry is matched with reg no
     if((strCmp(p->regNo,a)==0)&& (strCmp(p->batch,b)==0)){//checks whether the reg no is matching using string compare
         free(p);//if so free that memory space
         printf("Delete Successful!\n\n");
         break;
     }else if(p->Next==NULL) {//if no such reg no
         printf("No student with the given Registration Number!\n\n");//prints the statement
         
     }
     p=p->Next;//increment for the loop
 }
       
        
if(NoOfTimes==0) {//if no data entry is added
     printf("No student with the given Registration Number!\n\n");
     
     
}
    }else if(option==0){//checks whether the option equals to 0

   return 0;//then ends the program
   
    }
  

}

    return 0;
}

//function to print system message
void printsystem(){
    printf("--------------------------------------------\n");
    printf("A VOLATILE STUDENT RECORD MAINTENANCE SYSTEM\n");
    printf("--------------------------------------------\n");
    printf("0. Quit\n");
    printf("1. Insert a Student Record\n");
    printf("2. Print a Student Record\n");
    printf("3. Print all Student Records\n");
    printf("4. Delete a Student Record\n");
   
}
//function to add new student
node *AddNewStudent(){

 node *temp=NULL;
 node *p=NULL;
 //creates individual isolated node
   temp=(node*)malloc(sizeof(node));

    printf("Enter the batch (14/15/16/17): ");
    scanf("%s",temp->batch);
    printf("Enter the registration number: ");
    scanf("%s",temp->regNo);
    printf("Enter the first name         : ");
    scanf("%s",temp->firstName);
    printf("Enter the last name          : ");
    scanf("%s",temp->lastName);
    printf("Enter the cumulative GPA     : \n");
    scanf("%f",&temp->cGPA);
   temp->Next=NULL;
   if(head==NULL){//if current list is empty makes temp as first node
       head=temp;
   }else{
       p=head;
       while(p->Next!=NULL){//while the linking address is null
           p=p->Next;//links the nodes
        
       }
      p->Next=temp;//puts the list into temp
   }NoOfTimes++;//increments the count by one if another entry is added
     
     return head;//returns linked the list
     
}
//recursive function to print all students except deleted students when option 3 is entered
void printAll(node * p){
if (p==NULL){//checking the base case
return ;
}
printAll(p->Next);//use recursive method to print data in reverse manner

if(strCmp(p->regNo,"")!=0)
//checks whether the regno is empty or not, to not print deleted student
printf("The student %s %s (E/%s/%s) has a cumulative GPA of %.2f\n",p->firstName,p->lastName,p->batch,p->regNo,p->cGPA);

}


// a function to compare two strings with return type of int using charcter pointers
   int strCmp (char *str1,char *str2){
       int l;
       while((*str1 !='\0') && (*str2!='\0')&&(*str1==*str2)){//a loop which runs while the characters of stings are not equal to null terminating charachter and while strings are equal
         str1=str1+1;//increments the character by one
         str2=str2+1;//increments the character by one
       
       }if(*str1==*str2){//checks whether the characters are equal or not
           l=0;//if so value is 0
       }else{
          l=*str1-*str2;//else value is str1-str2
       }
       return l;//returns the value l
   }
  
 /*Discussion

 1. float variable allocates 4 bytes in memory
   int variable allocates 4 bytes in memory
   char type allocates 1 byte in memeory
   then memory allocation for 1 student data= 1*3+1*4+1*20+1*20+4=51 bytes
   memory allocation for 1 student struct node *Next(pointer)=51 bytes
   total memory allocation for 1 student=51+51=102 bytes
        memory allocation for 5 students=5*102=510 bytes

2.Memory is allocated when we dynamically allocate memory through malloc function, when I declaring the AddNewStudent function in the above program and when the function is called in the main function(option is equal to one).Memory is freed when the program is ended.Since this is a volatile program once program is ended it loses the all the data in memory.

3.In the above program deleting is done by freeing the memory allocated for the variables which should be deleted.For that first I found the which node should be deleted by comparing the reg number and then freed that space.After that when defining the  printAll   function i printed all data except which data's reg no is 0.

4.yes we can add unlimted amount of data as this program is implemented using linked list.

5.pros over arrays
1) Dynamic size-can add unlimited amount of data
2) Ease of insertion/deletion-insertion and deletion of nodes are easier than arrays

cons over arrays
1) We cannot do binary search with linked lists efficiently like arrays.Random access is not allowed. We have to access elements sequentially starting from the first node.
2) Extra memory space is needed as a pointer is required with each element of the list.
3) Not cache friendly. Since linked elements are  not contiguous locations, there is  no locality of reference which is  there in case of arrays.

6.Both linked lists and arrays have pros and cons.When we need to add unlimited amount of data and deleteting it is better to use linked lists as it is really easy to do it with linked lists than arrays.When we want to randomly access the memory it is easy to do with arrays.So when we only want to view and modify data both methods are acceptable.But I prefer to implement the program with arrays as arrays donot need extra space of memory when there is no deletion or insertion.*/
