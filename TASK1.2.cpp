#include<stdio.h>

main()
{
	float baseSalary,hrap,dap,tap;
	float hra,da,ta,grossSalary;
	
	printf("Enter the baseSalary = ");
	scanf("%f",&baseSalary);
	printf("Enter the HRA = ");
	scanf("%f",&hrap);
	printf("Enter the DA= ");
	scanf("%f",&dap);
	printf("Enter the TA = ");
	scanf("%f",&tap);
	
	hra=(hrap/100)*baseSalary;
	da=(dap/100)*baseSalary;
	ta=(tap/100)*baseSalary;
	
	grossSalary=baseSalary+hra+da+ta;
	
	printf("GrosasSalary : Rs.%.2f\n",grossSalary);
	
}

