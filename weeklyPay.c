#include<stdio.h>


int main(void){

	int code, product, numberOfWorker;
	double workingHour, weeklySalary, grossSales;
	double total = 0.00;
	
	printf("----------Calculating Weekly Pay----------\n\n");
	
	do{
		
		printf("\nEnter pay code :\n\n1.Managers\n2.Hourly worker\n3.Commission workers\n4.Pieceworkers\n5.Total Salary and Exit  : ");
		scanf("%d", &code );
		
		switch(code){
		
			
			case 1:
				
				printf("\n\nManagers weekly salary is $1502\n\n");
				break;
		
			
			case 2:
				
				printf("\n\nEnter this week's working hours : ");
				scanf("%lf", &workingHour );
				
				
				if( workingHour > 40 ){
					
					weeklySalary = ( 40 * 26.5 ) + ( ( workingHour - 40 ) * 26.5 * 1.5 );
					printf("Hourly worker weekly salary is $%lf\n\n", weeklySalary );
				}
				
				else{
					
					weeklySalary = ( workingHour * 26.5 );
					printf("Hourly worker weekly salary is $%lf\n\n", weeklySalary );
				}
				
				break;
						
			
			case 3:
				
				printf("\n\nEnter the weekly gross sales : ");
				scanf("%lf", &grossSales );
				weeklySalary = 250 + ( grossSales * 5.7 / 100 );
				printf("Commission workers salary is $%lf\n\n", weeklySalary );
				break;
				
			
			case 4:
			
				printf("\n\nEnter the number of products produced this week : ");
				scanf("%d", &product);
				weeklySalary = product * 100;
				printf("Pieceworkers salary is $%lf\n\n", weeklySalary );
				break;
				
			case 5:
				
				puts( "" );
				break;
				
			default:
			
				printf("\n\nYou entered wrong code!!!\n\n");
				break;
		
		
		}
		
		total += weeklySalary;
	
		printf("--------------------------------------------\n");
		
	}while( code != 5 );
	
	printf("\nTotal salary is $%.2lf", total );
	puts("");
	
	
}
