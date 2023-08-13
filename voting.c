#include <stdio.h>
void
main ()
{
  
 
int choice;
  
int arr[5] = { 0 };
  
char names[5][10] = { "Mohan", "Ram", "Shyam", "Priya", "Ritik" };
  
 
while (1)
    {
      
printf ("1. Vote Caste\n2. Candidate votes\n3. Leading Candidate\n");
      
 
printf ("Enter your choice : ");
      
scanf ("%d", &choice);
      
 
switch (choice)
	{
	
case 1:
	  
printf ("Candidates:\n");
	  
for (int i = 0; i < 5; i++)
	    
printf ("%d. %s\n", i + 1, names[i]);
	  
 
printf ("Select your candidate : ");
	  
int cand;
	  
scanf ("%d", &cand);
	  
arr[cand - 1]++;
	  
break;
	
case 2:
	  
for (int i = 0; i < 5; i++)
	    
printf ("%d.\t %s\t %d\n", i + 1, names[i], arr[i]);
	  
break;
	
case 3:
	  
int max = arr[0];
	  
cand = 0;
	  
for (int i = 0; i < 5; i++)
	    
if (arr[i] > max)
	      {
		
max = arr[i];
		
cand = i;
	      
}
	  
printf ("Leading Candidate : %s\n", names[cand]);
	  
printf ("Votes:%d\n", arr[cand]);
	  
break;
	
default:
	  
printf ("Enter correctly");
	
}
    
}

}
