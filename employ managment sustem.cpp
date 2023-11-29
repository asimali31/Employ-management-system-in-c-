#include<iostream>
#include<cctype>
#include<conio.h>
#include<windows.h>
using namespace std;
int i=0;
struct Employee{
	string id,fName,lName,address,contact,salary;
};
Employee employee[100];
void addRecord(){
	system("cls");
	system("COLOR 0A");
	cout<<"\n\n ADD EMPLOYEE RECORD";
	FName:
	cout<<"\n\n ENTER EMPLOYEE First NAME ===== >>>>  ";
	cin>>employee[i].fName;
	for(int a=0;a<employee[i].fName.length();a++){
		if(!isalpha(employee[i].fName[a])){
			cout<<"\n\n ENTER VALID FIRST NAME ===== >>>>  ";
			goto FName;
		}
	}
	if(employee[i].fName.length()==0){
		cout<<"\n\n EMPLOYEE FIRST NAME IS REQUIRED ===== >>>>  ";
		goto FName;
	}
	LName:
	cout<<"\n\n ENTER EMPLOYEE LAST NAME ===== >>>>  ";
	cin>>employee[i].lName;
	for(int a=0;a<employee[i].lName.length();a++){
		if(!isalpha(employee[i].lName[a])){
			cout<<"\n\n ENTER VALID LAST NAME ===== >>>>  ";
			goto LName;
		}
	}
	if(employee[i].lName.length()==0){
		cout<<"\n\n LAST NAME IS REQUIRED ===== >>>>  ";
		goto LName;
	}
	ID:
	cout<<"\n\n ENTER EMPLOYEE ID ===== >>>>  ";
	cin>>employee[i].id;
	for(int a=0;a<employee[i].id.length();a++){
		if(!isdigit(employee[i].id[a])){
			cout<<"\n\n ENTER VALID EMPLOYEE ID ===== >>>>  ";
			goto ID;
		}
	}
	if(employee[i].id.length()!=13){
		cout<<"\n\n EMPLOYEE ID IS REQUIRED AND SHOULD BE OF 13 DIGITS ===== >>>>  ";
		goto ID;
	}
	cout<<"\n\n ENTER EMPLOYEE ADDRESS ===== >>>>  ";
	cin.ignore();
	getline(cin,employee[i].address);
	Contact:
	cout<<"\n\n ENTER EMPLOYEE CONTACT ===== >>>>  ";
	cin>>employee[i].contact;
	if(employee[i].contact.length()!=11){
		cout<<"\n\n EMPLOYEE CONTACT IS REQUIRED AND SHOULD BE OF 11 DIGITS ===== >>>>  ";
		goto Contact;
	}
	for(int a=0;a<employee[i].contact.length();a++){
		if(!isdigit(employee[i].contact[a])){
			cout<<"\n\n ENTER VALID EMPLOYEE CONTACT ===== >>>>  ";
			goto Contact;
		}
	}
	Salary:
	cout<<"\n\n ENTER EMPLOYEE SALARY ===== >>>>  ";
	cin>>employee[i].salary;
	for(int a=0;a<employee[i].salary.length();a++){
		if(!isdigit(employee[i].salary[a])){
			 cout<<"\ ENTER SALARY IN DIGITS AND WIITHOUT SPACE";
			 goto Salary;
		}
	}
	cout<<"\n\n EMPLOYEE RECORD ADDED SUCCESSFULY ===== >>>>  ";
	i++;
}
// Searching
void searchEmployee(){
	system("cls");
	system("COLOR 0A");
	cout<<"\n\n SEARCH EMPLOYEE ";
	if(i==0){
		cout<<"\n\n YOUR RECOR IS EMPTY ";
	}
	else
	{
		string t_id;
		int found=0;
		cout<<"\n\n ENTER EMPLOYEE ID FOR SEARCH -->";
		cin>>t_id;
		for(int a=0;a<i;a++)
		{
		
			
			if(t_id==employee[a].id)
			{
				cout<<"\n\n EMPLOYEE FIRST NAME -->"<<employee[a].fName;
				cout<<"\n\n EMPLOYEE LAST NAME -->"<<employee[a].lName;
				cout<<"\n\n  EMPLOYEE  ADDRESS  -->"<<employee[a].address;
				cout<<"\n\n  EMPLOYEE  CONTACT  -->"<<employee[a].contact;
				cout<<"\n\n  EMPLOYEE  SALARY  -->"<<employee[a].salary;
				found++;
			}
			
			
		}
		if(found==0)
		{
			cout<<"\n\n **** EMPLOYEE NOT FOUND ****";
			cout<<"\n\n **** ENTER VALID ID ****";
		}
	}
}
//  Update record
void updateRecord()
{
	system("cls");
	system("COLOR 0A");
	cout<<"\n\n UPDATE RECORD ";
	if(i==0){
		cout<<"\n\n YOUR RECORD IS EMPTY ";
	}
	else
	{
		string t_id;
		int found=0;
		cout<<"\n\n ENTER EMPLOYEE ID TO UPDATE RECORD -->";
		cin>>t_id;
		for(int j=0;j<i;j++)
		{
		
			
			if(t_id==employee[j].id)
			{
					    
					FName:
					cout<<"\n\n ENTER EMPLOYEE First NAME ===== >>>>  ";
					
					cin>>employee[j].fName;
					for(int a=0;a<employee[j].fName.length();a++){
						if(!isalpha(employee[j].fName[a])){
							cout<<"\n\n ENTER VALID FIRST NAME ===== >>>>  ";
							goto FName;
						}
					}
					if(employee[j].fName.length()==0){
						cout<<"\n\n EMPLOYEE FIRST NAME IS REQUIRED ===== >>>>  ";
						goto FName;
					}
					LName:
					cout<<"\n\n ENTER EMPLOYEE LAST NAME ===== >>>>  ";
					cin>>employee[j].lName;
					for(int a=0;a<employee[j].lName.length();a++){
						if(!isalpha(employee[j].lName[a])){
							cout<<"\n\n ENTER VALID LAST NAME ===== >>>>  ";
							goto LName;
						}
					}
					if(employee[j].lName.length()==0){
						cout<<"\n\n LAST NAME IS REQUIRED ===== >>>>  ";
						goto LName;
					}
					ID:
					cout<<"\n\n ENTER EMPLOYEE ID ===== >>>>  ";
					cin>>employee[j].id;
					for(int a=0;a<employee[j].id.length();a++){
						if(!isdigit(employee[j].id[a])){
							cout<<"\n\n ENTER VALID EMPLOYEE ID ===== >>>>  ";
							goto ID;
						}
					}
					if(employee[j].id.length()!=2){
						cout<<"\n\n EMPLOYEE ID IS REQUIRED AND SHOULD BE OF 13 DIGITS ===== >>>>  ";
						goto ID;
					}
					cout<<"\n\n ENTER EMPLOYEE ADDRESS ===== >>>>  ";
					cin.ignore();
					getline(cin,employee[j].address);
					Contact:
					cout<<"\n\n ENTER EMPLOYEE CONTACT ===== >>>>  ";
					cin>>employee[j].contact;
					if(employee[j].contact.length()!=2){
						cout<<"\n\n EMPLOYEE CONTACT IS REQUIRED AND SHOULD BE OF 11 DIGITS ===== >>>>  ";
						goto Contact;
					}
					for(int a=0;a<employee[j].contact.length();a++){
						if(!isdigit(employee[j].contact[a])){
							cout<<"\n\n ENTER VALID EMPLOYEE CONTACT ===== >>>>  ";
							goto Contact;
						}
					}
					Salary:
					cout<<"\n\n ENTER EMPLOYEE SALARY ===== >>>>  ";
					cin>>employee[j].salary;
					for(int a=0;a<employee[j].salary.length();a++){
						if(!isdigit(employee[j].salary[a])){
							 cout<<"\ ENTER SALARY IN DIGITS AND WIITHOUT SPACE";
							 goto Salary;
						}
					}
					    
					    
					    
					    
				cout<<"\n\n RECORD UPDATED SUCCESSFULLY -->";
				found++;
			}
			
			
		}
		if(found==0)
		{
			cout<<"\n\n **** RECORD NOT FOUND ****";
			cout<<"\n\n **** ENTER VALID ID ****";
		}
	}
	
}

// Deleting Record

void delRecord()
{
	system("cls");
	cout<<"\n\n DELETE RECOTRD ";
	if(i==0){
		cout<<"\n\n YOUR RECORD LIST IS EMPTY ";
	}
	else
	{
		string t_id;
		int found=0;
		cout<<"\n\n ENTER EMPLOYEE ID FOR DELETING RECORD -->";
		cin>>t_id;
		for(int a=0;a<i;a++)
		{
											
			if(t_id==employee[a].id)
			{
				for(int k=a;k<i-1;k++)
				{
					employee[k].fName=employee[k+1].fName;
					employee[k].lName=employee[k+1].lName;
					employee[k].address=employee[k+1].address;
					employee[k].contact=employee[k+1].contact;
					employee[k].salary=employee[k+1].salary;
				}
				i--;
				
				cout<<"\n\n RECORD DELETED SUCCESSFULLY -->";
				found++;
			}
			
			
		}
		if(found==0)
		{
			cout<<"\n\n **** EMPLOYEE ID NOT FOUND ****";
		}
	}
	
}

// VIEW RECORD OF ALL EMPLOYEES 
void viewRecord()
{
	system("cls");
	system("COLOR 0A");
	cout<<"\n\n FOLLOWING ARE YOUR ALL EMPLOYEES ";
	if(i==0){
		cout<<"\n\n YOUR RECORD IS EMPTY ";
	}
	else
	{
		for(int a=0;a<i;a++)
		{
				cout<<"\n\n EMPLOYEE  ID -->"<<employee[a].id;
				cout<<"\n\n EMPLOYEE FIRST NAME -->"<<employee[a].fName;
				cout<<"\n\n EMPLOYEE LAST NAME -->"<<employee[a].lName;
				cout<<"\n\n EMPLOYEE CONTACT -->"<<employee[a].contact;
				cout<<"\n\n EMPLOYEE ADDRESS -->"<<employee[a].address;
				cout<<"\n\n EMPLOYEE SALARY -->"<<employee[a].salary;
			cout<<"\n\n ------------------------------------------";
		}
	}
	
}

void caller(){
	start:
	system("COLOR 0A");
	system("cls");
	cout<<"\n\n EMPLOYEE MANAGEMENT SYSTEM";
	cout<<"\n\n 1- ADD RECORD";
	cout<<"\n\n 2- SEARCH RECORD";
	cout<<"\n\n 3- UPDATE RECORD";
	cout<<"\n\n 4- DELETE RECORD";
	cout<<"\n\n 5- SHOW ALL RECORDS";
	cout<<"\n\n 6- EXIT";
	char choice;
	cout<<"\n\nEnter your choice \n";
	cin>>choice;
	switch(choice){
		case '1':
			addRecord();
		break;
		case '2':
			searchEmployee();
		break;
		case '3':
			updateRecord();
		break;
		case '4':
			delRecord();
		break;
		case '5':
			viewRecord();
		break;
		case '6':
			exit(0);
		default:
			cout<<"\n\n ENTER VALID CHOICE";		
	}
	getch();
	goto start;
}

int main(){

system ("color f1");
cout<<"\n\n\n*******************************************Employee Management system***************************************\n\n";
cout<<"\t\t\t\t\t___________________________________";
cout<<"\n\n\t\tSIGN UP";
string name,key;
cout<<"\n\t\tENTER USERNAME ";
getline(cin,name);
cout<<"\n\t\tSET KEY ";
cin>>key;
getch();
again:
system("cls");
cout<<"\n\n\t\tLOG IN";	
string userName,password;
cout<<"\n\t\tENTER your NAME ";
cin.ignore();
getline(cin,userName);
cout<<"\n\t\tENTER YOUR PASSWORD ";
char ch=_getch();
while(ch != 13){
	password.push_back(ch);
	cout<<"*";
	ch=_getch();
}
if(userName==name && password==key){
	getch();
	caller();
}
else{
	goto again;
}
	return 0;
}