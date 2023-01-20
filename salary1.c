#include<stdio.h>
int main()
{
	int basic_pay, rent, house_rent_allowance, job_type, conveyance_allowance, city, petrol_price, dearness_allowance, medical_allowance, you, spectacle_allowance, gross_pay, lpa, tax_deduction_at_source, deduction, net_salary;
	int special_allowance=2500, pf= 2000, professional_tax= 200, employee_provident_fund= 4800;
	double net_salary_per_month;
	
	printf("Enter your basic pay= ");
	scanf("%d", &basic_pay);
	
	printf("Enter how much you pay for house rent= ");
	scanf("%d", &rent);
	
	house_rent_allowance= 0.10*basic_pay+rent;
	printf("Your House Rent Allowance= %d \n", house_rent_allowance);
	
	printf("Press 1 if you are governoment eployee \n");
	printf("Press 2 if you are NOT governoment eployee \n");
	scanf("%d", job_type);
	
	if(job_type==1)
	{
		printf("Enter current petrol price per litre= ");
	    scanf("%d", &petrol_price);
	
	
    	printf("Press 3 if you are living in MUMBAI or DELHI or CHENNAI or BANGALORE \n");
    	printf("Press 4 if you are living in other than MUMBAI or DELHI or CHENNAI or BANGALORE \n");
    	scanf("%d", &city);
	
	if(city==3)
	{
		conveyance_allowance= 200*petrol_price;
		printf("Conveyance Allowance= %d \n",conveyance_allowance);
	}
	
	if(city==4)
	{
		conveyance_allowance= 150*petrol_price;
		printf("Conveyance Allowance= %d \n", conveyance_allowance);
	}
	
	dearness_allowance= 1.13*basic_pay;
	
	printf("Press 5 if you are married \n");
	printf("Press 6 if you are unmarried \n");
	scanf("%d", &you);
	
	if(you==5)
	{
		medical_allowance= 4000*2;
		spectacle_allowance= 7000*2;
		printf("Your Medical Allwance= %d \n", medical_allowance);
		printf("Your Spectacle Allowance= %d \n", spectacle_allowance);
	}
	
	if(you==6)
	{
		medical_allowance= 4000*1;
		spectacle_allowance= 7000*1;
		printf("Your Medical Allowance= %d \n", medical_allowance);
		printf("Your Spectacle Allowance= %d \n", spectacle_allowance);
	}
}
	printf("Your Soecial Allowance= %d \n", special_allowance);
	
	gross_pay= basic_pay+house_rent_allowance+conveyance_allowance+dearness_allowance+medical_allowance+spectacle_allowance+special_allowance;
	
	printf("Your Monthly Gross Salary= %d \n", gross_pay);
	
	lpa= gross_pay*12;
	printf("Your Anual Gross Salary= %d \n", lpa);
	
	if(lpa<=300000)
	{
		tax_deduction_at_source= 0;
	}
	
	if(300001<=lpa<=500000)
	{
		tax_deduction_at_source= 0.05*lpa;
	}
	
	if(500001<=lpa<=1000000)
	{
		tax_deduction_at_source= 0.20*lpa+10000;
	}
	
	if(lpa>=1000001)
	{
		tax_deduction_at_source= 0.30*lpa+110000;
	}
	
	printf("Professional Tax= %d \n", professional_tax);
	
	printf("PF= %d \n", pf);
	
	printf("Employee Provident Fund= %d \n", employee_provident_fund);
	
	printf("Tax Deduction At Source= %d \n", tax_deduction_at_source);
	
	deduction= employee_provident_fund+pf+professional_tax+tax_deduction_at_source;
	printf("Total deduction from your yearly gross salary= %d \n", deduction);
	
	net_salary= lpa-deduction;
	printf("YOUR NET SALARY= %d \n", net_salary);
	
	net_salary_per_month= net_salary/12;
	printf("YOUR MONTHLY NET SALARY= %lf \n", net_salary_per_month);
	
	return 0;
}
