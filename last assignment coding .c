#include <stdio.h>
int main(){

    int BookID;
    int DueDate;
    int ReturnDate;
    int overdue;
    int finerate;
    int fineamount;

    printf("Enter the Book ID:");
    scanf("%d", &BookID);

    printf("Enter the Due Date(in format YYYYMMDD):");
    scanf("%d", &DueDate);

    printf("Enter the Return Date(in format YYYYMMDD):");
    scanf("%d", &ReturnDate);

    overdue = ReturnDate-DueDate;

    if(ReturnDate<DueDate){
        overdue = 0;

    }

      if(overdue<=0){
        finerate = 0;
      }
      
      else if(overdue<=7){
       finerate = 20;
    }
    else if(overdue>=8 && overdue<=14){
        finerate = 50;
    }
    else if (overdue>=15){
       finerate = 100;
    }
    
    
     fineamount = overdue*finerate;

    printf("Book ID: %d\n", BookID);
    printf("Due Date:%d\n", DueDate);
    printf("Return Date:%d\n", ReturnDate);
    printf("Days Overdue:%d\n", overdue);
    printf("Finerate:%d\n", finerate);
    printf("fineammount: %d\n", fineamount);

     if(overdue<=0){
        finerate = 0;
        printf("NO OVERDUE CHARGED\n");
     }




    return 0;
}