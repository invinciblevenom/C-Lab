/*
Write a program to receive marks of physics, chemistry & maths from user
& check its eligibility for course if
a) Marks of physics > 40
b) Marks of chemistry > 50
c) Marks of math’s > 60
d) Total of physics & math’s marks > 150
or
e) Total of three subjects marks > 200
*/

#include <stdio.h>
void main()
{  
   int p,c,m,t,mp;

   printf("Eligibility Criteria :\n");
   printf("a.Marks in Phy:>40\n");
   printf("b.Marks in Chem:>50\n");
   printf("c.Marks in Maths:>60\n");
   printf("d.Total in Maths and Physics >150\n");
   printf("e.Total in all three subject >200\n");
   
   printf("-------------------------------------\n");

   printf("Input the marks obtained in Physics :");
   scanf("%d",&p);
   printf("Input the marks obtained in Chemistry :");
   scanf("%d",&c);
   printf("Input the marks obtained in Mathematics :");
   scanf("%d",&m);
   printf("Total marks of Maths, Physics and Chemistry : %d\n",m+p+c);
   printf("Total marks of Maths and  Physics : %d\n",m+p);

   if (p>40)
         if(c>50)
             if(m>60)
	        if((m+p+c)>200||(m+p)>150)
	           printf("The  candidate is eligible for admission.\n");
	        else
	          printf("The candidate is not eligible.\n");
             else
	    printf("The candidate is not eligible.\n");
         else
	   printf("The candidate is not eligible.\n");
    else
     printf("The candidate is not eligible.\n");
}
