#include<stdio.h>
int main(){
	int CustomerId,Units;
	float ChargesPerUnit,TotalBill,SurCharge=0;
	char CustomerName[50];
	
	
	 
	
printf("Enter the Customer's Id:");
scanf("%d",&CustomerId);
	
printf("Enter the Customer's Name:");
scanf("%s",&CustomerName);
	
printf("Enter the Units:");
scanf("%d",&Units);
	
	
if(Units<=199){
ChargesPerUnit=1.20;}
		
   else if(Units>=200 && Units<400){
ChargesPerUnit=1.50;}
    	
 else if(Units>=400 && Units<600){
ChargesPerUnit=1.80;}
 		
else{ChargesPerUnit=2.00;}
		 	
TotalBill=Units*ChargesPerUnit;
   
if(TotalBill>400){
SurCharge=TotalBill*0.15;
TotalBill+=SurCharge;
			 
if(TotalBill<100){
TotalBill=100;
}
}
		 
printf("Customer's Id:%d\n",CustomerId);
printf("Customer's Name:%s\n",CustomerName);
printf("Total Units :%d\n",Units);
printf("Charge per Unit:%.2f\n",ChargesPerUnit);
printf("Total Bill:%.2f\n",TotalBill);
		 
	return 0;
}