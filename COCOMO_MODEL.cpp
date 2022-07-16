#include<bits/stdc++.h>
using namespace std;



void calculate(float table[][4], int n,char mode[][15], int size)
{
	float effort,timestamp,staff;

	int model;
	
	
	if(size>=2 && size<=50)
		model=0;	 //organic
	
	else if(size>50 && size<=300)
		model=1;	 //semi-detached
	
	else if(size>300)
		model=2;	 //embedded

	cout<<"The mode is "<<mode[model];

	
	effort = table[model][0]*pow(size,table[model][1]);


	timestamp = table[model][2]*pow(effort,table[model][3]);


	staff = effort/timestamp;


	cout<<"\nEffort = "<<effort<<" Person-Month";

	cout<<"\nDevelopment Time = "<<timestamp<<" Months";

	cout<<"\nAverage Staff Required = "<<ceil(staff)<<" Persons";
	
}


int main()
{
	float table[3][4]={2.4,1.05,2.5,0.38,3.0,1.12,2.5,0.35,3.6,1.20,2.5,0.32};

	char mode[][15]={"Organic","Semi-Detached","Embedded"};

	int size ;
	
	//Kilo line of code means line of code in a multiple of 1000
	cout<<"Enter number of Kilo line of code(KLOC) you estimate for the project \n";
	cin>>size;
	

	calculate(table,3,mode,size);
	
	return 0;
}
