#include <stdio.h>
#include <stdlib.h>

int main() {
    int adultTicket, childTicket, adultTicket1, childTicket1;
    char movieName[500];

    printf("Please enter the movie name: ");
    fgets(movieName, 500, stdin);
 
    printf("Please enter the number of adult tickets sold: ");
    scanf("%d", &adultTicket1);

    adultTicket = adultTicket1 * 10;

    printf("Please enter the number of child tickets sold: ");
    scanf("%d", &childTicket1);

    childTicket = childTicket1 * 6;

    printf("Movie Name: %s", movieName );
    
    const double grossProfit = adultTicket + childTicket;
    const double netProfit = grossProfit * 0.20;
    const double distributorPaid = grossProfit - netProfit;

    printf("Adult Tickets Sold: %d\n",adultTicket1 );
    printf("Child Tickets Sold: %d\n",childTicket1  );
    printf("Gross Box Office Profit: $  %.2lf\n",grossProfit);
    printf("Net Box Office Profit: $  %.2lf\n", netProfit );
    printf("Amount Paid to Distributor: $  %.2lf\n", distributorPaid );


}
