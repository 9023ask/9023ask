Slip no 2
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to accept a character and check if it is uppercase
or lowercase [5 marks]
#include<stdio.h>
int main()
{
char ch;
printf("enter any char:ch");
scanf("%c",&ch);
if
(ch=='a',ch=='e',ch=='i',ch=='o',ch=='u')
{
printf("%c is lowercase",ch);
}
else if(ch>='A' && ch<='Z')
{
printf("%cis uppercase",ch);
}
else
{
printf("%cis not an alphabet",ch);
}
return 0;
}
ii. Write a ‘C’ program to display n terms of the Fibonacci series. [10 marks]
#include<stdio.h>
int main()
{
int n1=0,n2=1,n3,i,number;
printf("Enter the number of elements:");
scanf("%d",&number);
printf("\n%d %d",n1,n2);//printing 0 and 1
for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed
{
n3=n1+n2;printf(" %d",n3);
n1=n2;
n2=n3;
}
return 0;
}
OR
Q 1) A Write ‘C’ program to find the maximum number from an array of n
integers. [15 marks]
#include <stdio.h>
int main()
{
int array[100], maximum, size, c, location = 1;
printf("Enter the number of elements in array\n");
scanf("%d", &size);
printf("Enter %d integers\n", size);
for (c = 0; c < size; c++)
scanf("%d", &array[c]);
maximum = array[0];
for (c = 1; c < size; c++)
{
if (array[c] > maximum)
{
maximum = array[c];
location = c+1;
}
}
printf("Maximum element is present at location %d and it's value is %d.\n", location,
maximum);
return 0;
}
Section II : Database Management Systems [15 marks]Consider the following database
Employee(eno,ename,designation,salary)
Department(dno,dname,location)
The relationship is as follows: Employee-Department: many-to-one.
Q 2) A Create the above database in PostGreSQL and insert sufficient records. [5 marks]
B Execute the following queries in PostGreSQL (any 3)
i.
Give a 5% raise in salary to all the employees.
ii.
Display average salary of an employee.
iii.
List the details of all the departments located at _____city.
iv.
Display the details of employees whose names ends with an
alphabet___.
v.
Display the location of ‘HR’ department.
[6 marks]
C Write a query to List the details of employees who do not work in any of
the departments located at ‘Calcutta’.
OR
Create a view to list the names of employees whose salary is greater than
all the employees working in ‘HR’ department.
Create table dept( dno int primary key , dname varchar(20) , location varchar(20));
Insert into dept values(101,’HR’,’pune’);
Insert into dept values(102,’Account’,’Nashik’);
Insert into dept values(103,’Computer’,’pune’);
Insert into dept values(104,’Admin’,’pune’);
Insert into dept values(105,’Employee’,’Mumbai’);
select * from dept;
create table emp(eno int primary key,ename varchar(20),designation varchar(40),salary
float,dno int references dept(dno));
insert into emp values(1,'mr.mane','CA',5000,1);
insert into emp values(2,'mr.rahane','maneger',4000,2);
insert into emp values(3,'mr.gate','HOD',3000,3);
insert into emp values(4,'mr.sane','PA',2000,4);
select * from emp
1) update emp set salary = salary+(salary*0.5)
where dasignation = 'maneger';
2) SELECT avg(salary)from emp where eno = 3
3) select * from dept
where dlocation ='pune'
4) select * from emp
where ename ='HOD'
5) SELECT * from emp
where dname like '%ne'
6)select eno, ename, designation, salary from emp,dept
where emp.dno=dept.dno and location <> 'pune';Slip no 3
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to accept two integers from the user and
interchange them. Display the interchanged numbers. [5 marks]
#include<stdio.h>
int main()
{
int x,y,temp;
printf("enter the value of x and y\n");
scanf("%d%d",&x,&y);
printf("Before swapping \nx=%d\ny=%d\n",x,y);
temp=x;
x =y;
y=temp;
printf("After swapping \nx=%d\ny=%d\n",x,y);
return 0;
}
ii. Write ‘C’ program to accept a single digit and display it in words. For
example, Input = 9 Output = Nine [10 marks]
#include<stdio.h>
void main()
{
int cdigit;
printf("Input digit(0-9) :");
scanf("%d",&cdigit);
switch(cdigit)
{
case 0:
printf("zero\n");
break;
case 1:
printf("one\n");
break;
case 2:
printf("two\n");
break;
case 3:
printf("three\n");
break;
case 4:
printf("four\n");
break;
case 5:printf("five\n");
break;
case 6:
printf("six\n");
break;
case 7:
printf("seven\n");
break;
case 8:
printf("eight\n");
break;
case 9:
printf("nine\n");
break;
default:
printf("invalid digit.\n piease try again...\n");
break;
}
}
OR
Q 1) A Write a ‘C’ program to add two matrices of order mXn [15 marks]
#include <stdio.h>
int main()
{
int m, n, c, d, first[10][10], second[10][10], sum[10][10];
printf("Enter the number of rows and columns of matrix\n");
scanf("%d%d", &m, &n);
printf("Enter the elements of first matrix\n");
for (c = 0; c < m; c++)
for (d = 0; d < n; d++)
scanf("%d", &first[c][d]);
printf("Enter the elements of second matrix\n");
for (c = 0; c < m; c++)
for (d = 0 ; d < n; d++)
scanf("%d", &second[c][d]);
printf("Sum of entered matrices:-\n");for (c = 0; c < m; c++) {
for (d = 0 ; d < n; d++) {
sum[c][d] = first[c][d] + second[c][d];
printf("%d\t", sum[c][d]);
}
printf("\n");
}
}
return 0;
Section II : Database Management Systems [15 marks]
Consider the following database
Person (pnumber, pname, birthdate, income)
Area (aname, area_type,pincode)
The relationship is as follows: Person-Area: many-to-one.The ‘area_type’ can have
values as either ‘urban’ or ‘rural’.
Q 2) A Create the above database in PostGreSQL and insert sufficient records. [5 marks]
B Execute the following queries in PostGreSQL (any 3)
i. List the details of all people whose name starts with the alphabet ‘R’.
ii. List the names of all people whose birthday falls in the month of
‘July’.
iii. Display the details of people in the sorted order of their income.
iv. Display the count of areas of ‘urban’ type.
v. Change the pincode of ‘kalyaninagar’ to 411036.
[6 marks]
C Write a query to List the names of people who live in ‘Camp’ area and
have income less than at least one person who lives in ‘kalyaninagar’
area.
OR
Create a view to list the details of the person with second maximum
income.
create table area3(aname varchar(30)primary key,area_type varchar(40),pincode
numeric(10));
select * from area3;
create table person6(pno int primary key,pname varchar(20),birthdate date,income
numeric(10),a_name varchar(30)references area3(a_name));
select * from person6;
insert into area2 values('mumbai','urban','550040');
insert into area2 values('knagar','urban','411036');
insert into area2 values('nashik','rural','340100');
insert into area2 values('ranwad','urban','230100');insert into area2 values('wavi','rural','560100');
select * from area2;
insert into person6 values(1,'shivay','12-01-2018','52000','knagar');
insert into person6 values(2,'shital','11-07-2015','15000','nashik');
insert into person6 values(3,'pooja','08-12-2018','32000','mgroad');
insert into person6 values(4,'anita','05-04-2014','50000','nashik');
insert into person6 values(5,'nileema','05-04-2018','50000','mumbai');
select * from person6;
q1
select pname from person6
WHERE pname like'R'
q2
SELECT * from person6 order by incomes
q3
select count(area_type) from area3
WHERE area_type='urban';
q4
update area3 set pincode='411036'
WHERE aname='ranwad'
q5
SELECT pname,birthdate from person6
WHERE month=extract(month=07 from brithdate);
q6
create or replace view v10 as select pname,brithdate,income from person order by income
DESC LIMIT 2;
select * from v10 order by income ASC LIMIT 1;Slip no 5
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to check whether the given year is leap year or not. [5 marks]
#include<stdio.h>
int main()
{
int year;
printf("enter a year:");
scanf("%d",&year);
if(year%4==0)
{
if(year%100==0)/*checking for a century year*/
{
if(year%400==0)
printf("%d is a leap year.",year);
else
printf("%dis not a leaf year.",year);
}
else
printf("%dis a leap year.",year);
}
else
printf("%d is not a leap year.",year);
return 0;
}
ii. Write a ‘C’ program to display all numbers between two given numbers. [10 marks]
#include<stdio.h>
void main()
{
int num,m,n;
printf("Enter range (m,n):");
scanf("%d%d", &m, &n);
for(num = m; num <= n; num++)
{
printf("%d", num);
}
}
OR
Q 1) A Write ‘C’ program to subtract two matrices of order mXn [15 marks]
#include<stdio.h>
int main()
{int m,n,c,d, first[10][10], second[10][10],difference[10][10];
printf("Enter the number of rows and columns of matrix\n");
scanf("%d%d", &m,&n);
printf("Enter the elements of first matrix\n");
for (c = 0; c < m; c++)
for (d =0; d < n; d++)
scanf("%d", &first[c][d]);
printf("Enter the elements of second matix\n");
for (c = 0; c < m; c++)
for (d = 0; d < n; d++)
scanf("%d", &second[c][d]);
printf("difference of entered matrices:-\n");
for (c = 0; c < m; c++)
{
for (d = 0; d <n; d++)
{
difference[c][d] = first[c][d] - second[c][d];
printf("%d\t",difference[c][d]);
}
printf("\n");
}
return 0;
}
Section II : Database Management Systems [15 marks]
Consider the following database
Doctor (dno, dname, city)
Patient (pno, pat_name, city, disease)
The relationship is as follows: Doctor-Patient: many-to-many with Fee as a descriptive
attribute .
A Create the above database in PostGreSQL and insert sufficient records. [5 marks]
B Execute the following queries in PostGreSQL (any 3)
i.List the details of all the doctors from ______ city.
ii. Display count of patients.
iii. List the names of the patients suffering from ‘cancer’ disease.
iv. Change the city of ‘Dr. Patil’ to Pune.
v. List the names of patients that starts with alphabet ‘A’ [6 marks]
C Write a query to Find the number of patients suffering from “Asthama” and have been
charged a fee of Rs 200,by “Dr. Kumar”.
OR
Create a view to find the name of a doctor who treats maximum number of patients
Doctor table
create table doctor1(dno int primary key,dname varchar(20),city varchar(30));
insert into doctor1 values(1,'dr patil','pune');
insert into doctor1 values(2,'dr Amit','nashik');insert into doctor1 values(3,'dr kumar','jalgoan');
insert into doctor1 values(4,'dr Amol','mumbai');
insert into doctor1 values(5,'dr Arrya','delhi');
select * from doctor1
patient table
create table patient1(pno int primary key,pat_name varchar(20),city varchar(30),disease
varchar(20));
insert into patient1 values(11,'Akshda','pune','cancer');
insert into patient1 values(12,'Avi','nashik','Asthama');
insert into patient1 values(13,'ram','wavi','blood cancer');
insert into patient1 values(14,'Amol','yeola','Asthama');
insert into patient1 values(15,'sham','jalgon','cancer');
select * from patient1
Doctor_patient table
create table doctor_patient(dno int references doctor1(dno),pno int references
patient1(pno),fee numeric(30));
insert into doctor_patient values(1,11,'100');
insert into doctor_patient values(2,12,'200');
insert into doctor_patient values(3,13,'300');
insert into doctor_patient values(4,14,'400');
insert into doctor_patient values(5,15,'500');
select * from doctor_patient
Q1
select * from doctor
WHERE city='nashik';
Q2
select count(pno) FROM patient3;
Q3
select * from patient3
WHERE disease='cancer';
Q4
UPDATE doctor2 SET city='pune'
WHERE dname='dr patil';
select * from doctor2
Q5
select pat_name FROM patient3
WHERE pat_name like 'A%';Q6
select count (patient3.pno)
FROM patient3,doctor2.doctor2_patient3
WHERE disease='Asthama'
and fee='200' and
dname='dr kumar' and
patient3.pno=doctor2_patient3.pno and
doctor2.dno=doctor2_patient3.dno.Slip no 6
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to find maximum of two numbers. [5 marks]
#include<stdio.h>
int main()
{
int a,b;
printf("Please enter two different values\n");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("%d is maximum \n",a);
}
else if (b>a)
{
printf("%d is maximum \n",b);
}
else
{
printf("Both are equal \n");
}
return 0;
}
ii. Write a recursive function in ‘C’ to calculate factorial of a number. Use this function in
main. [10 marks]
#include<stdio.h>
int main()
{
int num;
long int fact=0;
long int factorial(int n);
printf("enter an integer number:");
scanf("%d",&num);
fact=factorial(num);
printf("factorial of %d is=%Ild",num,fact);
printf("\n");
return 0;
}
long int factorial(int n)
{
if(n==0)/*base case or terminating condition*/
return 1;
return n*factorial(n-1);}
OR
Q 1) A Write a ‘C’ program with menu to perform the following operations on a
character.
1. Check uppercase or lowercase
2. Display its ASCII value
3. Display its next and previous character
4. Exit [15 marks]
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
char ch; int n, i;
printf("\n enter any character:");
scanf("%c",&ch);
printf("\n*****MENU*****\n");
printf("\n1.check uppercase or lowercase \n2. display its ASCII value \n3. display its next
and previous character \n4. exit\n");
printf("\n enter your choice:");
scanf("%d",&n);
switch(n)
{
case 1:
if(isupper(ch))
printf("\n%c is uppercase",ch);
else
printf("%c is lowercase",ch);
break;
case 2:
printf("\n the ASCII value of %c is %d",ch,ch);
break;
case 3:
printf("the previous charactar of %c=%c",ch,--ch);
ch++;
printf("the next charactar of %c is %c",ch,++ch);
break;
case 4:
exit(0);
break;
}
}Section II : Database Management Systems [15 marks]
Consider the following database
Student (rno,name,city)
Teacher(tno,tname,phone_no,salary)
The relationship is as follows: Student-Teacher: many-to-many with subject as a
descriptive
attribute .
Q 2) A Create the above database in PostGreSQL and insert sufficient records. [5 marks]
B Execute the following queries in PostGreSQL (any 3)
i.List the names of students from______city.
ii. Display the count of students from ‘Mumbai’city.
iii. Change the phone number of ‘Prof. Patil’ to ‘9822131226’
iv. List the details of the teachers in the sorted order of their name.
v. List the names of the teachers who have salary less than 50000. [6 marks]
C Write a query to List the names of all teachers who do not teach any subject that is taught
by ‘Mr. Patil’
OR
Create a view to list the details of students who have taken ‘DBMS’ subject.
create table stud(srno int primary key , sname varchar (30),city varchar (40),sub
varchar(50));
create table tech(tno int primary key ,tname varchar (50), phone_no numeric (10) ,salary
float );
create table stud_tech(srno int references stud(srno),tno int references tech (tno));
insert into
drop table tech;
drop table stud;
drop table stud_tech;
insert into stud values(1,'sanket j','america','dbms');
insert into stud values(2,'gaurav b','america','dbms');
insert into stud values(3,'shubham w','new york','c prog');
insert into stud values(4,'ayush k','china','dbms');
insert into stud values(5,'bahubali','maheshmati','math');
insert into stud values(6,'ram charan','mumbai','stat');
insert into stud values(7,'allu arjun','mumbai','dbms');
select * from stud;
insert into tech values(1,'prof.patil',7323585682,45000.00);
insert into tech values(2,'prof.shaikh',7923585682,50000.00);
insert into tech values(3,'prof.jagtap',9232434568,55000.00);insert into tech values(4,'prof.phirke',8699185682,60000.00);
insert into tech values(5,'prof.gavli',657345682,40000.00);
insert into tech values(6,'prof.salunke',657345682,40000.00);
insert into tech values(7,'prof.salunke',657355682,30000.00);
select * from tech;
insert into stud_tech values(1,1);
insert into stud_tech values(2,2);
insert into stud_tech values(3,3);
insert into stud_tech values(4,4);
insert into stud_tech values(5,5);
insert into stud_tech values(6,6);
insert into stud_tech values(7,7);
select*from stud_tech ;
Q1
select sname from stud
where cit
y='america';
Q2
select count(city)from stud
where city = 'mumbai';
Q3
update tech
set phone_no = 9822131226
where tno=1;
select*from tech;
Q4
select tname from tech;
Q5
select tname from tech
where salary <50000;
QC
select tname from tech
where tname <> 'prof patil';
QC orcreate or replace view v1 as
select sub,sname from stud
where sub='dbms';
select * from v1;
Slip no 7
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to calculate area and circumference of a circle. [5 marks]
#include<stdio.h>
#define PI 3.14
int main()
{
float radius,area,cirf;
printf("\n Enter Radius =");
scanf("%f",&radius);
area=PI * radius * radius;
cirf=2 * PI * radius;
printf("\n area of circle =%.2f",area);
printf("\n circumference of circle=%.2f",cirf);
return 0;
}
ii. Write a ‘C’ program to accept a character and check if it is alphabet, digit or special
symbol. If it is an alphabet, check if it is uppercase or lowercase. [10 marks]
#include<stdio.h>
#include<ctype.h>
int main()
{
char ch;
/* input character from user*/
printf(" enter any character:");
scanf("%c",&ch);
if(isalpha(ch))
{
printf("%c is alphabet",ch);
if (ch>='A' && ch<='z')
printf("'%c' is uppercase alphabet.",ch);
else
printf("'%c' is lower an alphabet.",ch);
}
else if (isdigit(ch))
printf("%c is digit", ch);
else
printf("%c is Special character", ch);return 0;
}
OR
Q 1) A Write a ‘C’ program to read a matrix and calculate the sum of its diagonal elements.
[15 marks]
#include<stdio.h>
int main()
{
int i, j, rows, columns, a[10][10], Sum = 0;
printf("\n Please Enter Number of rows and columns : ");
scanf("%d %d", &i, &j);
printf("\n Please Enter the Matrix Elements \n");
for(rows = 0; rows < i; rows++)
{
for(columns = 0;columns < j;columns++)
}
scanf("%d", &a[rows][columns]);
for(rows = 0; rows < i; rows++)
{
Sum = Sum + a[rows][rows];
}
printf("\n The Sum of Diagonal Elements of a Matrix = %d", Sum );
}
return 0;
Section II : Database Management Systems [15 marks]
Consider the following database
Item (item_no, name, quantity)
Supplier (s_no, name, city)
The relationship is as follows: Item-Supplier: many-to-many with rate as a descriptive
attribute .
Q 2) A Create the above database in PostGreSQL and insert sufficient records. [5 marks]
B Execute the following queries in PostGreSQL (any 3)
i.Change the quantity for item ‘Mouse’ to 80.
ii. List the details of the suppliers whose name begins with the alphabet ‘M’.
iii. Display the count of items.iv. List the names of suppliers who do not live in _______city.
v. List the names of items with quantity less than 10. [6 marks]
C Write a query to Display the names of all suppliers who do not supply ‘CD’ and ‘Mouse’.
OR
Create a view to display supplier-wise list of items
create table item(item_no int primary key,i_name varchar(30),i_quantity int);
create table supplier(s_no int primary key,s_name varchar(30),s_city varchar(50));
create table item_supplier(item_no int references item(item_no),s_no int references
supplier(s_no) );
select* from item;
select*from item_supplier;
insert into item values(1,'mouse',50);
insert into item values(2,'keybords',55);
insert into item values(3,'moniter',50);
insert into item values(4,'p.c',55);
insert into item values(4,'p.c',55);
insert into supplier values (1,'sanket j','america');
insert into supplier values (2,'akshay j','jurmany');
insert into supplier values (3,'aditya w','new york');
insert into supplier values (4,'sanny j','pune');
insert into supplier values (5,'raju j','nashik');
insert into supplier values (6,'manju j','nashik');
insert into supplier values (7,'manoj k','nashik');
insert into item_supplier values(1,1);
insert into item_supplier values(2,2);
insert into item_supplier values(3,3);
insert into item_supplier values(4,4);
insert into item_supplier values(1,5);
Q1
update item
set i_quantity ='80'
where i_name= 'mouse';
select * from item;
Q2
select * from supplier
where s_name like 'm%';
Q3
select count(item) from item;Q4
select s_city from supplier
where s_city <>'pune';
Q5
select i_name,i_quantity from item
where i_quantity <10;
create or replace view v1 as
select item.iteim_no,i_name,i__quantity
from item_supplier,item supplier
where item.item_no = item_supplier .item_no
and supplier.s_no = item_supplier.s_no
order by s_name ;
select * from v1;Slip no 10
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to check whether a given number is even or odd. [5 marks]
#include<stdio.h>
int main()
{
int num
printf("Enter an integer you want to check:");
scanf("%d",& num);
if((num%2)==0)
printf("%d is Even.",num);
else
printf("%d is odd.",num);
return 0;
}
ii. Write a ‘C’ program to accept n integers in an array and display the array in reverse order.
[10 marks]
#include<stdio.h>
int main()
{
int i,n,A[100];
printf("\n how many elements you want to store=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter no %d=",i);
scanf("%d",&A[i]);
}
printf("\n numbers in reverse order are as follows=");
for(i=n-1; i>=0; i--)
{
printf("\n %d", A[i]);
}
return 0; }
OR
Q 1) A Write a ‘C’ function to check if a number is prime. Use this function to display all
prime numbers between 100 and 500. [15 marks]
#include<stdio.h>
int main(){
int numbr,k,remark;printf(" The prime numbers between 1 and 100 : \n");
for(numbr=100;numbr<=500;++numbr)
{
remark=0;
for(k=2;k<=numbr/2;k++){
if((numbr % k) == 0){
remark++;
break;
}
}
if(remark==0)
printf("\n %d ",numbr);
}
return 0;
}
Section II : Database Management Systems [15 marks]
Create the following tables ( primary keys are underlined).
Person (pnumber, pname, birthdate, income),
Area( aname,area_type).
There exists a one-to-many relationship between Area and Person. The attribute ‘area_type’
can have values as either urban or rural.
A. Create the above database in PostGreSQL and insert sufficient records.
B. B. Execute the following queries in PostGreSQL (any 3)
i. List the details of persons having income > 10000.
ii. Transfer all people living in ‘Pune’ to ‘Delhi’.
iii. Count number of area’s having type ‘urban’.
iv. Give the count of people who are born on “_________”.
v. List the names of all people living in ‘_____’ area.C Write a query to Count the total number of people staying in “urban” area and having
average income.
OR
Create a View to print the person details along with their area name.
create table area2(a_name varchar(30)primary key,area_type varchar(40));
select * from area2;
create table person6(p_number integer primary key,p_name varchar(20),birthdate
date,income numeric(10),a_name varchar(30)references area2(a_name));
select * from person6;
insert into area2 values('knagar','urban');
insert into area2 values('mgroad','urban');
insert into area2 values('nashik','rural');
insert into area2 values('nagpur','urban');
insert into area2 values('pune','rural');
insert into area2 values('mumbai','rural');
select * from area2;
insert into person6 values(1,'shivay','12-01-2018','52000','knagar');
insert into person6 values(2,'shital','11-07-2015','15000','nashik');
insert into person6 values(3,'pooja','08-12-2018','32000','mgroad');
insert into person6 values(4,'anita','05-04-2014','50000','nashik');
insert into person6 values(5,'nileema','05-04-2018','50000','mumbai');
select * from person6;
q1
select p_name,income FROM person6
WHERE income>10000
q2
UPDATE person6 SET a_name='mumbai'
WHERE a_name='nashik'
q3
select count(p_number) FROM person6;
q4
select p_name FROM person6
WHERE a_name='rural';
q5
SELECT count(area_type) FROM area2
WHERE area_type='urban';
q6
create view v12 as SELECT * FROM person6,area2
WHERE a_name and area_type='urban';
select * from v12Slip no 11
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i.Write a ‘C’ program to find whether a given year is a leap year or not. [5 marks]
#include<stdio.h>
int main()
{
int year;
printf("enter any year");
scanf("%d",&year);
if
(year%4==0);
{
printf("leap year");
}
else
{
printf("not leap year");
}
return 0;
}
ii.Write a ‘C’ program to accept an integer and display its sum of digits. [10 marks]
#include<stdio.h>
int main()
{
int n,sum=0,m;
printf("Enter a number:");
scanf("%d",&n);
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
printf("Sum is=%d",sum);
return 0;
}
OR
Q 1) A Write a ‘C’ program to accept a matrix of size m x n and display transpose of a given
matrix. [15 marks]
#include<stdio.h>
int main(){
int a[10][10],transpose[10][10],r,c,i,j;
printf("Enter rows and colums of matrix:");
scanf("%d%d",&r,&c);
printf("\nenter element of matrix:\n");
for(i=0;i<r;++i);
{
for(j=0;j<c;++j)
{
printf("enter element a %d%d",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("\nentered matrix:\n")
for(i=0;i<y;++i)
{
printf("%d",a[i][j])
}
printf("\n\n")
}
/*findig the transpose of matrix a*/
for(i=0;i<r;==i)
{
for(j=0;j<c;++j)
{
transpose[j][i]=a[i][j]
}
}
/*displaying the transpose of matrixa*/
printf("\transpose of matrix:\n");
for(i=0;i<c;++i)
{
for(j=0;j<r;++j)
printf("%d",transpose[i][j]);
printf("\n\n");
}
return 0;
}
Section II : Database Management Systems [15 marks]
Create the following tables ( primary keys are underlined).
Emp(eno, ename, designation, sal)
Dept(dno, dname, dloc)There exists a one-to-many relationship between Dept and Emp.
C Write a query to display the name of the department having maximum
employees.
OR
Create a View to print the employee names along with their department details.
[4 marks]
Q 2) A Create the above database in PostGreSQL and insert sufficient records.
B Execute the following queries in PostGreSQL (any 3)
i. Increase salary of “managers” by 15%;
ii. Delete all employees of department no 30;
iii. Count the number of employees in dept no ____.
iv. List the details of employees having salary between 30000 and 50000.
v. Display the average salary of employee.
Create table dept( dno int primary key , dname varchar(20) , location varchar(20));
Insert into dept values(101,’HR’,’pune’);
Insert into dept values(102,’Account’,’Nashik’);
Insert into dept values(103,’Computer’,’pune’);
Insert into dept values(104,’Admin’,’pune’);
Insert into dept values(105,’Employee’,’Mumbai’);
select * from dept;
create table emp(eno int primary key,ename varchar(20),designation varchar(40),salary
float,dno int references dept(dno));
insert into emp values(1,'mr.mane','CA',5000,1);
insert into emp values(2,'mr.rahane','maneger',4000,2);
insert into emp values(3,'mr.gate','HOD',3000,3);
insert into emp values(4,'mr.sane','PA',2000,4);
select * from emp
1) update emp set salary = salary+(salary*0.15)
where dasignation = 'maneger';
2) DELETE from emp
where eno = 3;
3) select count(ename) from emp
where dno = 2;
4)select * from emp
where salary between 3000 to 5000;
6)create view v1 as select empname,dname,dloc,fromemp,dept
where emp.dno=dept.dnoSlip no 12
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to read the age of a candidate and determine
whether the candidate is eligible for casting his/her own vote. [5 marks]
# include<stdio.h>
int main()
{
int a;
printf("enter the age of the person :");
scanf("%d",&a);
if(a>=18)
{
printf("eigibal for voting");
}
else
{
printf("not eligibal for voting\n");
}
return 0;
}
ii.Write a ‘C’ program to check if a number is perfect (number = sum of its factors)
[10 marks]
# include <stdio.h>
int main()
{
int i,num,sum=0;
printf("enter any number to check perfect number:");
scanf("%d",&num);
for (i=1;i<num;i++)
{
if(num%i==0)
{
sum+=i;
}
}
if(sum==num)
{
printf("%d is perfect number",num);
}
else
{
printf("%d is not perfect number",num);
}return 0;
}
OR
Q 1) A Write a ‘C’ program to accept real number x and integer n and calculate
the sum of first n terms of the series x+ x/3!+ x/5!+ x/7!+… [15 marks]
#include<stdio.h>
int main()
{
long int x,i,j,k,n,sq,cnt;
double fact,sum=0;
printf("\n ENTER THE VALUE OF N: ");
scanf("%ld",&n);
printf("\n ENTER THE VALUE OF X: ");
scanf("%ld",&x);
for(i=1,cnt=1;i<=n;i=i+2,cnt++)
{
for(k=1,fact=1;k<=i;k++)
fact=fact*k;
sum=sum+(x/fact);
printf("\n THE SUM OF THIS SERIES IS %7.2lf\n",sum);
}
}
Section II : Database Management Systems [15 marks]
Create the following tables ( primary keys are underlined).
Person (pnumber, pname, birthdate, income),
Area( aname, area_type).
There exists a one-to-many relationship between Area and Person. The attribute ‘area_type’
can have values as either urban or rural.
Q 2) A Create the above database in PostGreSQL and insert sufficient records.
B Execute the following queries in PostGreSQL (any 3)
i. Delete the record of “Mr. Kumar”.
ii. Transfer all people living in ‘Mumbai’ to ‘Pune’.
iii. Count number of area’s having type ‘urban’.
iv. Give the count of people who are living in “_________”.
v. Calculate the average income of people in “Pune”.
C Write a query to Give details of persons staying in “rural” area and having income >
100000
ORCreate a View to print the person details in “urban” area. [4 marks]
create table area3(aname varchar(30)primary key,area_type varchar(40));
select * from area3;
create table person6(pno int primary key,pname varchar(20),birthdate date,income
numeric(10),a_name varchar(30)references area3(a_name));
select * from person6;
insert into area2 values('mumbai','urban');
insert into area2 values('knagar','urban');
insert into area2 values('nashik','rural');
insert into area2 values('ranwad','urban');
insert into area2 values('wavi','rural');
select * from area2;
insert into person6 values(1,'shivay','12-01-2018','52000','knagar');
insert into person6 values(2,'shital','11-07-2015','20000','nashik');
insert into person6 values(3,'pooja','08-12-2018','30000','mgroad');
insert into person6 values(4,'anita','05-04-2014','50000','nashik');
insert into person6 values(5,'nileema','05-04-2018','50000','mumbai');
select * from person6;
q2
UPDATE person6 set aname='mumbai'
WHERE aname='nashik'
select*from person6
q3
select count(area_type) from area2
WHERE area_type='urban'
q4
select pname from person6
WHERE aname='rural'
q1
DELETE from person6
WHERE pname='shivay'
q6
select pname,birthdate,income fron person6,area2
WHERE area2.aname=person6.aname and area_type='urban';
and income>50000;
q5
select avg(income) from person6,area2
WHERE area_type='urban' and person6.aname=area2.aname;
q7
create or replace view v12 as select person6 fron person6,area2
WHERE area2.aname=person6.aname and area_type='urban';seloect * from v12
Slip no 13
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to which accepts a character from the user and
display its ASCII value. Also display its next and previous integer. [5 marks]
#include<stdio.h>
int main()
{
char ch;
printf("\n print enter any character\n");
ch=getchar();
printf("\n the ancii value of given character=%d",ch);
printf("next character=%d",ch+1);
printf("previous character=%c\n",ch-1);
return 0;
}
ii. Write a ‘C’ program to display multiplication tables of n having 10 multiples. [10 marks]
#include<stdio.h>
int main()
{
int n,i;
printf("enter an integer:");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
printf("%d*%d=%d\n",n,i,n*i);
}
return 0;
}
OR
Q 1) A Accept two numbers and perform the following operations till the user
selects Exit.
i. Maximum
ii. Display all numbers between the two
iii. Sum and average
iv. EXIT
[15 marks]
# include<stdio.h>
# include<stdlib.h>#include<ctype.h>
void main()
{
int n,i,a,b,sum,avg;
printf("\n enter any two numbers:");
scanf("%d%d",&a,&b);
printf("\n*****menu*****\n");
printf("\n 1.maximum\n 2.display all numbers between the two\n 3.sum and average\n
4.exit\n");
printf("\n enter your choice:");
scanf("%d",&n);
switch(n)
{
case 1: if(a>b)
printf("\n the maximum value is %d",a);
else
printf("\n the maximum value is %d",b);
break;
case 2: printf("\n the numbers between %d%d",a,b);
for(i=a;i<=b;i++)
printf("%d",i);
break;
case 3: sum=a+b;
printf("sum = %d",sum);
avg = sum/2;
printf("avg = %d",avg);
break;
case 4: exit(0);
break;
}
}
Section II : Database Management Systems [15 marks]
Create the following tables ( primary keys are underlined).
Account ( acct_no ,acct_type, balance, branch_name)
Customer (cust_no, cust_name, cust_city)
Relationships : Customer-Account :1-M
Constraints: acct_type can be “saving” or “current”, balance > 0
Q 2) A Create the above database in PostGreSQL and insert sufficient records.
C. Execute the following queries in PostGreSQL (any 3)
i. Display information of all saving accounts having balance > ___________
ii. Count customers in city “___________”.
iii. Find the total balance at branch “M.G.Road”.
iv. Delete the record whose cust_name is “____________”.
v. Change city of customer “_____” to “Pune”C Write a query to Find the number of account holders for each city.
OR
Create a View to print the account details along with customer and their
branch details. [4 marks]
create table customer(custno int primary key,custname varchar(10),custcity varchar(30));
insert into customer values(1,'om sharma','palkhed');
insert into customer values(2,'sai thete','ranwad');
insert into customer values(3,'raj jadhav','wavi');
select * from customer;
create table account2(acctno int primary key,accttype varchar(30), balance
numeric(10),branchname varchar(40),custno int);
insert into account2 values(101,'marketing','2000','maharashtra',1);
insert into account2 values(102,'college','3000','mg.road',2);
insert into account2 values(103,'scollership','4000','hdfc',3);
select * from account2;
1)select balance from account2 where balance>2000;
2) select custcity from customer where custcity='ranwad';
3) select balance,branchname from account2 where branchname='mg.road';
4) delete from customer where custname='sai thete';
5) update customer
set custcity='pune'
where custno=3;
6) select count(custno),city
from cust group by city;
7) select count(custno),custcity
from customer
group by custcity;
select acctno,custcity from account2,customer ***
8) create or replace view v1 as SELECT acctno,branchname from account,customer
select * from v1;Slip no14
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to accept a number and check if it is positive, negative or zero.
[5 marks]
#include<stdio.h>
int main()
{
int A;
printf("enter the number A:");
scanf("%d",&A);
if(A>0)
printf("%d is positive.",A);
else if(A<0)
printf("%d is negetive.",A);
else if(A==0)
printf("%d is zero.",A);
return 0;
}
ii. Write ‘C’ program to accept a single digit number and display it in words. For example,
Input = 9 Output = Nine [10 marks]
#include <stdio.h>
int main()
{
int n, num = 0;
/* Input number from user */
printf("Enter any number to print in words: ");
scanf("%d", &n);
/* Store reverse of n in num */
while(n != 0)
{
num = (num * 10) + (n % 10);
n /= 10;
}
/*
* Extract last digit of number and print corresponding digit in words
* till num becomes 0
*/
while(num != 0){
}
}
switch(num % 10)
{
case 0:
printf("Zero ");
break;
case 1:
printf("One ");
break;
case 2:
printf("Two ");
break;
case 3:
printf("Three ");
break;
case 4:
printf("Four ");
break;
case 5:
printf("Five ");
break;
case 6:
printf("Six ");
break;
case 7:
printf("Seven ");
break;
case 8:
printf("Eight ");
break;
case 9:
printf("Nine ");
break;
}
num = num / 10;
return 0;
OR
Q 1) A Write a ‘C’ program to copy one matrix to another. Display the copied matrix.
[15 marks]#include<stdio.h>
int main() {
int arr1[30], arr2[30], i, num;
printf("\nEnter no of elements :");
scanf("%d", &num);
//Accepting values into Array
printf("\nEnter the values :");
for (i = 0; i < num; i++) {
scanf("%d", &arr1[i]);
}
/* Copying data from array 'a' to array 'b */
for (i = 0; i < num; i++) {
arr2[i] = arr1[i];
}
//Printing of all elements of array
printf("The copied array is :");
for (i = 0; i < num; i++)
printf("\narr2[%d] = %d", i, arr2[i]);
}
return 0;
Section II : Database Management Systems [15 marks]
Create the following tables ( primary keys are underlined).
Emp (eno, ename, salary)
Project (pno, pname, budget)
Relationships:
Emp– Project : M – M with descriptive attribute no-of-hrs.
Q 2)
A Create the above database in PostGreSQL and insert sufficient records.
B Execute the following queries in PostGreSQL (any 3)
i. Find the maximum budget.
ii. Increase the salary of all employees by 10%
iii. Count the number of projects having duration > 100 hrs.
iv. List all employees whose name ends with “a“.
v. Add column contact_number to employee table.
C Write a query to List the names of employees who are not working on any project.
OR
Create a view to list the project details having maximum number of hours. [4 marks]create table emp(eno int primary key,ename varchar(10),salary numeric(20));
create table project(pno int primary key,pname varchar(20),budget varchar(30));
create table emp_project(pno int references project(pno),eno int references
emp(eno),no_of_hrs int);
insert into emp values(1,'om sharma',2000);
insert into emp values(2,'sai thete',3000);
insert into emp values(3,'raj patil',4000);
select * from emp;
insert into project values(101,'animals','1000');
insert into project values(102,'plants','2000');
insert into project values(103,'science','5000');
select * from project;
insert into emp_project values(101,1,5);
insert into emp_project values(102,2,6);
insert into emp_project values(103,3,7);
select * from emp_project;
Q1
select max(budget) from project;
Q2
update emp set salary=salary+(salary*10);
Q3 select count(emp_project.pno) from project,emp_project,emp where
project.pno=emp_project.pno and emp.eno= emp_project.eno and no_of_hrs>5;
Q4 select ename from emp where ename like'%a';
Q5 alter table emp add contact_no char(2);
Q6 select ename from emp,project,emp_project where emp.eno<>emp_project.eno;
Q7 select pname buget from project,emp_project where no_of_hrs=(select
max(no_of_hrs)from emp_project);Slip no16
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i.Write a ‘C’ program to find the area and perimeter of rectangle. [5 marks]
#include<stdio.h>
int main() {
int length, breadth, area,perimeter;
printf("\nEnter the Length of Rectangle : ");
scanf("%d", &length);
printf("\nEnter the Breadth of Rectangle : ");
scanf("%d", &breadth);
area = length * breadth;
perimeter=2*(length+breadth);
printf("\nArea of Rectangle : %d", area);
printf("\nPerimeter of Rectangle : %d", perimeter);
}
return (0);
ii.Write a ‘C’ program to display n lines of the following pattern.
1
23
456
[10 marks]
#include <stdio.h>
int main()
{
int rows, i, j, number= 1;
printf("Enter number of rows: ");
scanf("%d",&rows);
for(i=1; i <= rows; i++)
{
for(j=1; j <= i; ++j)
{
printf("%d ", number);++number;
}
printf("\n");
}
}
return 0;
OR
Q 1) A Write a ‘C’ program to find the transpose of a mXn matrix. [15 marks]
//Slip no 16- Q1- A
#include <stdio.h>
int main()
{
int a[10][10], transpose[10][10], r, c, i, j;
printf("Enter rows and columns of matrix: ");
scanf("%d %d", &r, &c);
// Storing elements of the matrix
printf("\nEnter elements of matrix:\n");
for(i=0; i<r; ++i)
for(j=0; j<c; ++j)
{
printf("Enter element a%d%d: ",i+1, j+1);
scanf("%d", &a[i][j]);
}
// Displaying the matrix a[][] */
printf("\nEntered Matrix: \n");
for(i=0; i<r; ++i)
for(j=0; j<c; ++j)
{
printf("%d ", a[i][j]);
if (j == c-1)
printf("\n\n");
}
// Finding the transpose of matrix a
for(i=0; i<r; ++i)
for(j=0; j<c; ++j)
{
transpose[j][i] = a[i][j];
}
// Displaying the transpose of matrix a
printf("\nTranspose of Matrix:\n");
for(i=0; i<c; ++i)}
for(j=0; j<r; ++j)
{
printf("%d ",transpose[i][j]);
if(j==r-1)
printf("\n\n");
}
return 0;
Section II : Database Management Systems [15 marks]
Create the following tables ( primary keys are underlined).
Bus ( Bus_no , capacity ,depot_name)
Route (Route_no ,source ,destination ,no_of_stations )
Relationship :
Bus-Route : M-1
Constraint :
Bus capacity is not null
Q 2) A Create the above database in PostGreSQL and insert sufficient records.
B Execute the following queries in PostGreSQL (any 3)
i. List all buses at depot “________”.
ii. Delete Bus whose Bus number is “____________”.
iii. List all buses on route number 41.
iv. List the route details having number of stations > 10.
v. List all routes starting from “Station”.
C Write a query to Create a view to List all bus and route details starting
from “Airport”.
OR
Delete all the buses on routes in which total stations are less than 3. [4 marks]
create table bus(busno int primary key,capacity numeric (20),depot_name
varchar(40),routeno int references route(routeno) );
create table route(routeno int primary key,source varchar(50),designation
varchar(50),noofstation numeric(10));
drop table route;
drop table bus;
select*from bus;
select*from route;
insert into bus values(2,'105','nashik',41);
insert into bus values(3,'120','lasalgaon',42);
insert into bus values(4,'125','vanasgaon',43);
insert into bus values(5,'125','sarole',44);insert into bus values(6,'125','malegaon',45);
insert into bus values(7,'100','pimpalgaon',46);
insert into route values(41,'niphad','nashik',6);
insert into route values(42,'pimpalgaon','niphad',7);
insert into route values(43,'pimpalgaon','nashik',9);
insert into route values(44,'niphad','nashik',8);
insert into route values(45,'nashik','pimpalgaon',31);
insert into route values(46,'station','airport',41);
insert into route values(47,'airport','station',21);
insert into route values(48,'airport','mumabi',12);
Q1
select* from bus
where depot_name='pimpalgaon';
Q2
delete from bus
where busno='5';
select * from bus;
Q3
select * from route
where routeno = 41;
Q4
select *from route
where noofstation>10;
Q5
select routeno , source from route
where source = 'station' ;
Q[c]
create or replace view v1 as
select * from routewhere source = 'airport';
select * from v1;
Q[c][or]
delete from bus where routeno = (select routeno from route where noofstation<8);
select*from route;Slip no17
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A iWrite a ‘C’ program to accept a number and check number is positive or negative.
[5 marks]
#include<stdio.h>
void main()
{
int num;
printf("Input a number:");
scanf("%d",&num);
if (num >=0)
printf("%d is a positive number \n",num);
else
printf("%d is a negative number \n",num);
}
ii. Write a ‘C’ program to accept a single digit number from the user and display it in words.
Input = 9, output = Nine. [10 marks]
#include<stdio.h>
void main()
{
int cdigit;
printf("Input digit(0-9) :");
scanf("%d",&cdigit);
switch(cdigit)
{
case 0:
printf("zero\n");
break;
case 1:
printf("one\n");
break;
case 2:
printf("two\n");
break;
case 3:
printf("three\n");
break;
case 4:
printf("four\n");
break;
case 5:
printf("five\n");
break;case 6:
printf("six\n");
break;
case 7:
printf("seven\n");
break;
case 8:
printf("eight\n");
break;
case 9:
printf("nine\n");
break;
default:
printf("invalid digit.\n piease try again...\n");
break;
}
}
OR
Q 1) A Write a ‘C’ program to calculate occurrences of a number in an array of n integers.
[15 marks]
#include<stdio.h>
#define MAX 100
int main()
{
int arr[MAX],n,i,num,count;
printf("Enter total number of elements:");
scanf("%d", &n);
printf("Enter array elements:\n");
for(i=0; i<n; i++)
{
printf("Enter element %d:", i++);
scanf("%d", &arr[i]);
}
printf("Enter element to find occurrence:");
scanf("%d",&num);
count =0;
for(i=0; i<n; i++)
{
if(arr[i] == num)
count++;
}
printf("occurrence of %d is: %d\n",num,count);
return 0;}
Section II : Database Management Systems [15 marks]
Consider the followingDoctor - Patient database (Primary keys are underlined)
Doctor (doctor_code,doctor_name, specialization, address, phone_no)
Patient (Patient_code, Patient_name, symptoms)
There exists a one-to-many relationship between Doctor and Patient.
Q 2) A Create the above database in PostGreSQL and insert sufficient records. [5 marks]
B Execute the following queries in PostGreSQL (any 3)
i. Find the names of all Patients which start with “M”.
ii. Count the number of doctors who are Neurologists.
iii. Give the list of all patients who are suffering from “Fever”
iv. Find the specialization and phone numbers of all doctors from Sadashiv Peth.
v. Modify address of Dr. ____ to “Camp”. [6 marks]
C Write a query to display the list of all patients who are treated by doctors staying in ____
area with the specialization “Orthopedic”.
OR
Create a View to find all Patients staying in “____” and having the symptoms “vomiting”
and treated by doctor “Mr. Sagar”
Doctor table
create table doctor8(d_code int primary key,d_name varchar(20),specilization varchar(20),
d_address varchar(30),d_phone_no numeric(10));
insert into doctor8 values(31,'dr Mane','Neurologist','pune',2014758690);
insert into doctor8 values(32,'dr patil','fever','nashik',2364756879);
insert into doctor8 values(33,'dr kolhe','asthama','mumabai',2350965311);
insert into doctor8 values(34,'dr shinde','Neurologist','pune',3456728901);
insert into doctor8 values(35,'dr Mahale','cancer','sadashiv peth',1234067342);
select * from doctor8
patient table
create table patient9(p_code int primary key,p_name varchar(20),symptoms
varchar(20),d_code int references doctor8);
insert into patient9 values(41,'mr.sagar','cancer',31);
insert into patient9 values(42,'mr.sham','fever',32);
insert into patient9 values(43,'mr.ram','mental',33);
insert into patient9 values(44,'mr.om','cancer',34);
insert into patient9 values(45,'mr.ramlal','blood cancer',35);
select * from patient9
Q1
select p_code,p_name FROM patient9
WHERE p_name like 'm%';
Q2
select count (d_code) FROM doctor8WHERE specilization ='Neurologist';
Q3
select symptoms,p_code,p_name from patient9
WHERE symptoms='fever';
Q5
select specilization,d_phone_no FROM doctor8
WHERE d_address='sadashiv peth';
Q6
UPDATE doctor8 SET d_address='camp'
WHERE d_name='dr patil';
select * from doctor8
Q7
select * from patient9,doctor8
WHERE doctor8.d_code=patient9.d_code
and d_address='sadashiv peth'
and specilization='cancer';
Q8
create or replace view v11 as
select symptoms,d_name
FROM patient9,doctor8
WHERE d_name='dr patil';Slip no18
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to Accept dimensions of a cylinder and print the
surface area and volume. ( surface area = 2π r2 + 2π r h, volume = π r2 h) [5 marks]
#include <stdio.h>
#include <math.h>
int main()
{
float radius, height;
float surface_area, volume;
}
printf("Enter value for radius and height of a cylinder : \n");
scanf("%f%f", &radius, &height);
surface_area = 2 * (22 / 7) * radius * (radius + height);
volume = (22 / 7) * radius * radius * height;
printf("Surface area of cylinder is: %.3f", surface_area);
printf("\n Volume of cylinder is : %.3f", volume);
return 0;
ii. Write a ‘C’program to Accept two integers x and y and calculate the sum of all integers
between x and y. [10 marks]
#include <stdio.h>
void main()
{
int x = 1;
int y = 0;
int total = 0;
while (x > y)
{
printf("The second number should be greater than the first one.\n");
printf("Type the first number : \n");
scanf("%d", &x);
printf("Type the second number : \n");
scanf("%d", &y);
}
while (x<=y)
{
total += x;
x++;
}}
printf("The sum of all integer between x and y : %d\n",total);
OR
Q 1) A Write a ‘C’ program to accept two matrices of size m x n and find multiplication of
Matrices. [15 marks]
#include <stdio.h>
int main()
{
int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2, i, j, k;
printf("Enter rows and column for first matrix: ");
scanf("%d %d", &r1, &c1);
printf("Enter rows and column for second matrix: ");
scanf("%d %d",&r2, &c2);
// Column of first matrix should be equal to column of second matrix and
while (c1 != r2)
{
printf("Error! column of first matrix not equal to row of second.\n\n");
printf("Enter rows and column for first matrix: ");
scanf("%d %d", &r1, &c1);
printf("Enter rows and column for second matrix: ");
scanf("%d %d",&r2, &c2);
}
// Storing elements of first matrix.
printf("\nEnter elements of matrix 1:\n");
for(i=0; i<r1; ++i)
for(j=0; j<c1; ++j)
{
printf("Enter elements a%d%d: ",i+1, j+1);
scanf("%d", &a[i][j]);
}
// Storing elements of second matrix.
printf("\nEnter elements of matrix 2:\n");
for(i=0; i<r2; ++i)
for(j=0; j<c2; ++j)
{
printf("Enter elements b%d%d: ",i+1, j+1);
scanf("%d",&b[i][j]);
}
// Initializing all elements of result matrix to 0
for(i=0; i<r1; ++i)
for(j=0; j<c2; ++j)
{
result[i][j] = 0;
}}
// Multiplying matrices a and b and
// storing result in result matrix
for(i=0; i<r1; ++i)
for(j=0; j<c2; ++j)
for(k=0; k<c1; ++k)
{
result[i][j]+=a[i][k]*b[k][j];
}
// Displaying the result
printf("\nOutput Matrix:\n");
for(i=0; i<r1; ++i)
for(j=0; j<c2; ++j)
{
printf("%d ", result[i][j]);
if(j == c2-1)
printf("\n\n");
}
return 0;
Section II : Database Management Systems [15 marks]
Create the following tables ( primary keys are underlined).
Game (gname, noofplayers, coachname, captain_name)
Player (pno, pname)
There exists a one-to-many relationship between Game and Player. Add constraint
uppercase to captain_name
Q 2) A Create the above database in PostGreSQL and insert sufficient records.
B Execute the following queries in PostGreSQL (any 3)
i. List the names of players playing “hockey”.
ii. Give the average number of players.
iii. Delete the records of players playing ‘kho kho’.
iv. List names of players not playing “cricket”.
v. Update the coach name from “_____” to “_______” for game “hockey”.
C Write a query to Display the game details with maximum number of players.
OR
Create a View to print game-wise list of Players along with their game name. [4 marks]
create table game (gname varchar(50) primary key,noofplayer numeric (10),cochname
varchar (50),capatin_name varchar (50));
create table player(pno int primary key,pname varchar (50),gname varchar(50) references
game);
insert into game values('hockey',20,'sharukh khan','sanket jashav');insert into game values('kho kho',9,'roshan gare','gaurav bhosle');
insert into game values('cricket',11,'sachin t','roshan gare');
insert into game values('kabddi',7,'arman khan','samir niphade');
insert into player values(1,'sanket j','hockey');
insert into player values(2,'roshan g','kho kho');
insert into player values(3,'gaurav b','cricket');
insert into player values(4,'amir khan','hockey');
select*from game;
select*from player;
Q1
select pname from player
where gname = 'hockey';
Q2
select max(noofplayer) from game;
Q3
delete from player
where gname='kho kho';
select*from game;
Q4
select pname from player
where pname <> 'cricket';
Q5
update game
set cochname = 'ayush khirsager'
where gname = 'hockey';
select * from game;
Q[c]
select max(noofplayer)from game;
Qc [or]
create or replace view v2 as
select gname,pname from player;
select * from v2;Slip no19
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to accept two integers and perform all arithmetic operations.
[5 marks]
#include<stdio.h>
int main()
{
int num1, num2;
int sum, sub, mult, mod;
float div;
/*
* Input two numbers from user
*/
printf("Enter any two numbers: ");
scanf("%d%d", &num1, &num2);
/*
* Perform all arithmetic operations
*/
sum = num1 + num2;
sub = num1 - num2;
mult = num1 * num2;
div = (float)num1 / num2;
mod = num1 % num2;
/*
* Print result of all arithmetic operations
*/
printf("SUM = %d\n", sum);
printf("DIFFERENCE = %d\n", sub);
printf("PRODUCT = %d\n", mult);
printf("QUOTIENT = %f\n", div);
printf("MODULUS = %d", mod);
}
return 0;
ii.Write a ‘C’ program to check if a character is an alphabet, digit or a special symbol. If it is
an alphabet, check if it is uppercase or lowercase. [10 marks]
#include<stdio.h>
#include<ctype.h>
int main()
{char ch;
/* input character from user*/
printf(" enter any character:");
scanf("%c",&ch);
if(isalpha(ch))
{
printf("%c is alphabet",ch);
if (ch>='A' && ch<='z')
printf("'%c' is uppercase alphabet.",ch);
else
printf("'%c' is lower an alphabet.",ch);
}
else if (isdigit(ch))
printf("%c is digit", ch);
else
printf("%c is Special character", ch);
return 0;
}
OR
Q 1) A Write a ‘C’ program to multiply two matrices. Write separate functions to
accept, display and multiply the matrices. [15 marks]
#include<stdio.h>
int i,j,k;
void main()
{
int a[10][10], b[10][10], c[10][10],m,n,p,q;
void mul(int X[10][10],int y[10][10],int Z[10][10],int m,int n,int p,int q);
void read(int X[10][10],int m,int n);
void display(int X[10][10],int m,int n);
printf("enter the size of A mtrix (Row and col): \n");
scanf("%d%d",&m,&n);
printf("enter the size of B mtirx (Row and col): \n");
scanf("%d%d",&p,&q);
if(n!=p)
{
printf("multipication not possible\n please re_enter\n");
printf("correct size and try again .....\n");
}
else
{
read(a,m,n);read(b,m,n);
mul(a,b,c,m,n,p,q);
printf("A matirx is:\n");
display(a,m,n);
printf("B matirx is:\n");
display(b,p,q);
printf("c matirx is:\n");
display(c,m,q);
}
}
void mul(int X[10][10],int y[10][10],int Z[10][10],int m,int n,int p,int q)
{
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
Z[i][j]=0;
for(k=0;k<n;k++)
Z[i][j]+= X[i][k]*y[k][j];
}
}
}
void read(int X[10][10], int m,int n)
{
printf("enter matrix value Row by Row\n");
for (i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&X[i][j]);
}
}
void display(int X[10][10], int m,int n)
{
for (i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%5d",X[i][j]);
}
printf("\n");
}
}Section II : Database Management Systems [15 marks]
Consider the following Student-Teacher database
Student (sno ,s_name, s_class)s_class can be either "FY", "SY" or "TY"
Teacher (tno ,t_name, yrs_experience )
The relationship is as follows: Student-Teacher: M-M with descriptive attribute Subject.
Q 2) A Create the above database in PostGreSQL and insert sufficient records. [5 marks]
B Execute the following queries in PostGreSQL (any 3)
i. List teachers having > 5 yrs of experience.
ii. Count all students who have taken subject ____
iii. List all students whose name ends with “Singh”
iv. Change experience of teacher name ____ to 20.
v. Display classwise details of students. [6 marks]
C Write a query to List the names of all teachers with their subjects along with the student
names to whom they are teaching
OR
Create a View to find the teacher teaching maximum number of subjects
create table student1(sno int primary key,sname varchar(30),sclass varchar(10));
insert into student1 values(1,'neha','fy');
insert into student1 values(2,'sau','ty');
insert into student1 values(3,'sanu','sy');
insert into student1 values(4,'mannu','ma');
insert into student1 values(5,'anu','ba');
select*from student1
create table teacher1(tno int primary key,tname varchar(20),yrs varchar(20),experience int);
insert into teacher1 values(1,'shaikh sir',1989,9);
insert into teacher1 values(2,'phirke mam',1999,8);
insert into teacher1 values(3,'jagtap mam',1989,9);
insert into teacher1 values(4,'takate mam',2017,5);
insert into teacher1 values(5,'gavli mam',2016,6);
select*from teacher1
create table student1_teacher1(sno int references student1(sno),tno int references
teacher1(tno),sub varchar(20));
insert into student1_teacher1 values(1,1,'elec');
insert into student1_teacher1 values(1,2,'c prog');
insert into student1_teacher1 values(1,3,'dbms');
insert into student1_teacher1 values(1,4,'math');
insert into student1_teacher1 values(1,5,'java');
select*from student1_teacher1
q1
select*from teacher1
where experience>5q2
select count(sno)
from student where sclass='fy';
q3
select*from student1,teacher1,student1_teacher1
where teacher1.tno = 5and
student1.sno=student1_teacher1.sno and teacher1.tno=student1_teacher1.tno;
q4
delete from student1
where sno=2;
q5
alter table student1
add column designation varchar(50);
q6
select max(sub)from student1,teacher1,student1_teacher1
where student1.sno=student1_teacher1.sno
and teacher1.tno=student1_teacher1.tno group by tname;Slip no20
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to accept radius of circle and calculate area and
circumference. [5 marks]
#include<stdio.h>
int main()
{
int rad;
float pi=3.14,area,ci;
printf("\n enter radius of circle:");
scanf("%d",&rad);
area=pi*rad*rad;
printf("\n area of circle: %f",area);
ci=2*pi*rad;
printf("\n circumference:%f",ci);
return(0);
}
ii. Write a function in ‘C’, which accepts a character and integer n as parameter and displays
the next n characters. [10 marks]
#include<stdio.h>
int display(char);
int main()
{
char ch,c;
printf("Enter charecter:");
scanf("%c",&ch);
display(ch);
}
int display(char ch)
{
int n,i;
printf("how many next char:");
scanf("%d",&n);
printf("\nyou entred:\t%c\n",ch);
printf("next character:");
for(i=0;i<n;i++)
{
ch=ch+1;
printf("\t%c",ch);
}
return 0;
}
ORQ 1) A Write a ‘C’ program to accept n integers and sort them. Display the sorted
elements. [15 marks]
#include<stdio.h>
void main()
{
int arr[50],i,j,len,temp;
printf("\nEnter the no. of element do you want to sort:");
scanf("%d",&len);
printf("\nEnter the elements: \n");
for(i=0;i<len;i++)scanf("%d",&arr[i]);
for(i=0;i<len-1;i++)
{
for(j=i+1;j<len;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];arr[i]=arr[j];arr[j]=temp;
}
}
}
printf("\nThe elements after sorting :\n");
for(i=len-1;i>=0;i--)
printf("%d\n",arr[i]);
}
Section II : Database Management Systems [15 marks]
Consider the following Property – Owner database (Primary keys are underlined)
Property (Property_no, area, location, city)
Owner (owner_name, address, phone)
The relationship is as follows: Property – Owner are related with M-1 relationship
Q 2) A Create the above database in PostGreSQL and insert sufficient records. [5 marks]
B Execute the following queries in PostGreSQL (any 3)
i. Give the list of all properties in Nashik city.
ii. Give the names of owners whose property is greater than 2000sq feet.
iii. Find the number of properties owned by “Mr. Kumar”.
iv. Count all properties having area < _____.
v. Delete all properties in “Pune” city owned by “Mr. Singh” [6 marks]
C Write a query to Find the names of all owners who own a property in Pune city, located in
Kothrud area and which has an area > 10000.
OR
Create a View to find the owner wise list of properties.create table owner7(ownername varchar(30) primary key,address varchar(20),phoneno
numeric(10));
select*from owner7
insert into owner7 values('neha','nashik',1234567890);
insert into owner7 values('kumar','dhule',9876543210);
insert into owner7 values('singh','pune',4321678654);
insert into owner7 values('rupa','mumbai',3421657859);
create table property9(propid int primary key,area numeric(1000),location
varchar(5000),city varchar(20),price numeric(1000),ownername varchar(30) references
owner7(ownername) );
select*from property9
insert into property9 values(5,3000,'sakhi palace','nashik',300,'kumar');
insert into property9 values(6,2000,'kkw nagar','ranwad',400,'singh');
insert into property9 values(7,3000,'sai palace','nashik',500,'rupa');
insert into property9 values(9,4000,'neha palace','pune',600,'neha');
Q1
select*from property9 where city='nashik';
Q2
select count(propid) from property9 where area>50;
select sum(price) from property9 ,owner7 where ownername='kumar' and
owner7.ownername=property9.ownername;
drop table property9;
create table property10(propid int primary key,area numeric(1000),location
varchar(5000),city varchar(20),price numeric(1000) references owner7 (ownername));
Q3
delete from property9
where city='pune' and ownername='singh';
Q4
Alter table owner7
Add phoneno numeric(10);
select * from owner7
Q5
select owner7.ownername,area,city,price
from property9,owner7
where city='mumbai' and area>10000
Q6
create or replace view vw as select propid,area,city,price,owner7.ownername
from property9,owner7where owner7.ownername=property9.ownername
group by owner7.ownername,propid;
select * from vw;
Slip no21
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A Write a C program to check whether number is positive or not [5 marks]
#include<stdio.h>
int main()
{
int A;
printf("enter the number A:");
scanf("%d",&A);
if(A>0)
printf("%d is positive.",A);
else if(A<0)
printf("%d is negetive.",A);
else if(A==0)
printf("%d is zero.",A);
return 0;
}
B Write a C program to accept n float values in an array and display them in the reverse
order. [10 marks]
#include<stdio.h>
int main()
{
int i,n,A[100];
printf("\n how many element you want to store=");
scanf("%d",&n);
for(i=0; i<n; i++)
{
printf("\n enter no %d=",i);
scanf("%d",&A[i]);
}
printf("\n numbers in reverse order are as follows=");
for(i=n-1; i>=0; i--)
{
printf("\n%d",A[i]);
}
return 0;}
OR
Q 1) A Write a program to perform the following operations on a character till user chooses
EXIT.
1. Check if it is alphabet or digit.
2. Display next n characters
3. Display its ASCII value.
EXIT
[15 marks]
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
char ch;int n,i;
printf("\n enter any character:");
scanf("%c",&ch);
printf("\n *****MENU*****\n");
printf("\n1.Display it is alphabet or digit \n.2 Display next n charecter \n3.display its
ACSII values \n 4.Exit\n");
printf("\n Enter your choice:");
scanf("%d",&n);
switch(n)
{
case 1:
if(isalpha(ch))
printf("%c is alphabet",ch);
else
if(isdigit(ch))
printf("%c is digit",ch);
break;
case 2:
printf("The next n charecter of c area:");
for(i=0;i<n;i++)
printf("%c",++ch);
break;
case 3:
printf("\n The ASCII value of %c is %d",ch,ch);
break;
case 4:
printf("\n The ACSII value of %c is %d",ch,ch);
break;
case 5:
exit(0);}
}
break;
Section II : Database Management Systems [15 marks]
Consider the following Property – Owner database (Primary keys are underlined)
Property (Property_no, area, city, price)
Owner (owner_name, address)
The relationship is as follows: Property – Owner are related with M-1 relationship
Q 2) A Create the above database in PostGreSQL and insert sufficient records. [5 marks]
B Execute the following queries in PostGreSQL (any 3)
i. Give the list of all properties in _____ city.
ii. Count the number of properties having area > ____ sq.ft.
iii. Find the total price of properties owned by “Mr. Kumar”.
iv. Delete all properties in “Pune” city owned by “Mr. Singh”
v. Add phone number column to Owner table. [6 marks]
C Write a query to Find the names of all owners who own a property in Mumbai city,
located in Bandra area and which has an area > 10000.
OR
Create a View to find the owner wise list of properties.
create table owner7(ownername varchar(30) primary key,address varchar(20),phoneno
numeric(10));
select*from owner7
insert into owner7 values('neha','nashik',1234567890);
insert into owner7 values('kumar','dhule',9876543210);
insert into owner7 values('singh','pune',4321678654);
insert into owner7 values('rupa','mumbai',3421657859);
create table property9(propid int primary key,area numeric(1000),location
varchar(5000),city varchar(20),price numeric(1000),ownername varchar(30) references
owner7(ownername) );
select*from property9
insert into property9 values(5,3000,'sakhi palace','nashik',300,'kumar');
insert into property9 values(6,2000,'kkw nagar','ranwad',400,'singh');
insert into property9 values(7,3000,'sai palace','nashik',500,'rupa');
insert into property9 values(9,4000,'neha palace','pune',600,'neha');
Q1
select*from property9 where city='nashik';
Q2
select count(propid) from property9 where area>50;
select sum(price) from property9 ,owner7 where ownername='kumar' and
owner7.ownername=property9.ownername;
drop table property9;create table property10(propid int primary key,area numeric(1000),location
varchar(5000),city varchar(20),price numeric(1000) references owner7 (ownername));
Q3
delete from property9
where city='pune' and ownername='singh';
Q4
Alter table owner7
Add phoneno numeric(10);
select * from owner7
Q5
select owner7.ownername,area,city,price
from property9,owner7
where city='mumbai' and area>10000
Q6
create or replace view vw as select propid,area,city,price,owner7.ownername
from property9,owner7
where owner7.ownername=property9.ownername
group by owner7.ownername,propid;
select * from vw;Slip no23
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to interchange two numbers. [5 marks]
#include <stdio.h>
int main()
{
double num1, num2, temp;
printf("Enter First Number: ");
scanf("%lf", &num1);
printf("Enter Second Number: ");
scanf("%lf",&num2);
printf("Before swapping:\n");
printf("num1 is: %.2lf and num2 is: %.2lf\n", num1, num2);
temp = num1;
num1 = num2;
num2 = temp;
printf("After swapping:\n");
printf("num1 is: %.2lf and num2 is: %.2lf", num1, num2);
}
return 0;
ii. Write a ‘C’ program to accept a character and check if it is alphabet or digit. If it is
alphabet, check if it is a vowel or consonant. [10 marks]
#include<stdio.h>
#include<ctype.h>
int main()
{
char ch;
/* input character from user*/
printf(" enter any character:");
scanf("%c",&ch);
if(isalpha(ch))
{
printf("%c is alphabet",ch);
if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' ||
ch=='U')printf("'%c is Vowel ",ch);
else
printf("'%c is consonents ",ch);
}
else if (isdigit(ch))
printf("%c is digit", ch);
else
printf("%c is Special character", ch);
return 0;
}
OR
Q 1) A Write a ‘C’ program to accept an array of n integers and find the maximum and
minimum. [15 marks]
#include <stdio.h>
#include <conio.h>
int main()
{
int a[1000],i,n,min,max;
printf("Enter size of the array : ");
scanf("%d",&n);
printf("Enter elements in array : ");
for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}
min=max=a[0];
for(i=1; i<n; i++)
{
if(min>a[i])
min=a[i];
if(max<a[i])
max=a[i];
}
printf("minimum of array is : %d",min);
printf("\nmaximum of array is : %d",max);}
return 0;
Section II : Database Management Systems [15 marks]
Consider the following Student-Teacher database
Student (sno , s_name, s_class) s_class can be either "FY", "SY" or "TY"
Teacher (tno , t_name, yrs_experience )
The relationship is as follows: Student-Teacher: M-M with descriptive attribute Subject.
Q 2) A Create the above database in PostGreSQL and insert sufficient records. [5 marks]
B Execute the following queries in PostGreSQL (any 3)
i. List teachers having > 5 yrs of experience.
ii. Count the number of students studying in “FY.
iii. List all subjects taught by teacher no 10.
iv. Delete record of student whose sno is _______
v. Add designation column in teacher table [6 marks]
C Write a query to List the names of all teachers with their subjects along with the total
number of students they are teaching
OR
Create a View to find the teacher teaching maximum number of subjects
create table student(sno int primary key,sname varchar(30),sclass varchar(10));
create table teacher1(tno int primary key,tname varchar(20),yrs varchar(20),experience int);
create table student_teacher1(sno int references student(sno),tno int references
teacher1(tno),sub varchar(20));
insert into student values(1,'neha','fy');
insert into student values(2,'sau','ty');
insert into student values(3,'sanu','sy');
insert into student values(4,'mannu','ma');
insert into student values(5,'anu','ba');
insert into student values(6,'s singh','mcs');
select*from student
insert into teacher1 values(1,'shaikh sir',1989,9);
insert into teacher1 values(2,'phirke mam',1999,8);
insert into teacher1 values(3,'jagtap mam',1989,9);
insert into teacher1 values(4,'takate mam',2017,5);
insert into teacher1 values(5,'gavli mam',2016,6);
select*from teacher1
insert into student_teacher1 values(1,1,'elec');
insert into student_teacher1 values(1,2,'c prog');
insert into student_teacher1 values(1,3,'dbms');
insert into student_teacher1 values(1,4,'math');
insert into student_teacher1 values(1,5,'java');select*from student_teacher1
select * from teacher1
where experience>5
select count(student.sno)
from student,student_teacher1
where student.sno=student_teacher1.sno
select sname from student
where sname='s singh'
update teacher1
set experience='5'
where tname='takate'
select*from student
order by sclass;
select max(sub)from student,teacher1,student_teacher1
where student.sno=student_teacher1.sno
and teacher1.tno=student_teacher1.tno group by tname;Slip no24
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to interchange two numbers. [5 marks]
#include <stdio.h>
int main()
{
double num1, num2, temp;
printf("Enter First Number: ");
scanf("%lf", &num1);
printf("Enter Second Number: ");
scanf("%lf",&num2);
printf("Before swapping:\n");
printf("num1 is: %.2lf and num2 is: %.2lf\n", num1, num2);
temp = num1;
num1 = num2;
num2 = temp;
printf("After swapping:\n");
printf("num1 is: %.2lf and num2 is: %.2lf", num1, num2);
}
return 0;
ii. Write a ‘C’ program to accept an array of n integers and display them in the reverse order.
[10 marks]
#include<stdio.h>
int main()
{
int i,n,A[100];
printf("\n how many elements you want to store = ");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("\n enter number %d = ",i);
scanf("%d",&A[i]);
}
printf("\n number is reversed order is follows=");
for (i=n-1;i>=0;i--)
{
printf("\n%d",A[i]);
}
return 0;
}OR
Q 1) A Write a ‘C’ program to accept a matrix A of size m X n. Store its transpose in matrix
B. Display matrix B. [15 marks]
# include<stdio.h>
int main()
{
int a[10] [10] , transpose [10] [10], r,c,i,j;
printf("Enter rows and columns of matrix : ");
scanf("%d%d", &r,&c);
printf("\n Enter elements of matrix : \n");
for ( j=0; i<r; ++i)
{
for (j=0;j<c;++j)
{
printf ("enter element element a%d%d:",i+1,j+1);
scanf ("%d",&a[i][j]);
}
}
printf("\n Entered matrix:\n");
for (i=0; i<r; ++i)
{
for (j=0; j<c ; ++j)
{
printf("%d",a[i][j]);
}
printf ("\n\n");
}
/* finding the transpose of matrix a*/
for (j=0;i<r; ++i)
{
for (j=0; j<c; ++j)
{
transpose [j] [i] = a[i][j];
}
}
/* displaying the transpose of matrix a*/
printf( "\n transpose of matrix : \n");
for (i=0; i<c; ++i)
{
for (j=0; j<r; ++j)
{
printf ("%d", transpose [j][i]);
}printf("\n\n");
}
return 0 ;
}
Section II : Database Management Systems [15 marks]
Create the following tables ( primary keys are underlined).
order(s_order_no, s_order_date, amount)
Client(client_no, name, address)
A client can give one or more orders, but an order belongs to exactly one client.
Order amount should be > 0
Q 2) A Create the above database in PostGreSQL and insert sufficient records. [5 marks]
B Execute the following queries in PostGreSQL. (any 3)
i. Change order date of client_no ’04’ to ‘12/4/19’.
ii. Display all orders given in the month of October.
iii. Display all orders in descending order of amount.
iv. Delete all the clients of Mumbai.
v. Count the number of orders having amount > ____. [6 marks]
C Write a query to Display the client name who has given maximum number of orders.
OR
Create a view to list names of clients having more than 2 sales orders.
create table s_order (s_order_no int primary key,s_order_date date,amount float, client_no
int references client(client_no));
create table client(client_no int primary key,name varchar (50),address varchar(40));
drop table s_order ;
insert into client values(1,'saurabh bhosale','sarole khurd');
insert into client values(2,'sushant kale ','savargaon');
insert into client values(3,'gaurav wagh','ranwad');
insert into client values(4,'pankaj more','chandwad');
insert into client values(5,'aditya shinde' ,'niphad');
select * from client;
insert into s_order values(11,'12-12-2012',50000,1);
insert into s_order values(12,'11-10-2012',55000);
insert into s_order values(13,'10-10-2012',5500);
insert into s_order values(14,'09-08-2012',60000);
insert into s_order values(15,'08-07-2012',40000);
select * from s_order;
Q1)
update s_orderset S_order_date = '04-12-2012'
WHERE s_order_no=1;
select *
FROM s_order
where month(s_order_date)= month(10);
select count(s_order_no)
from
s_order where amount >
Q3)
create or replace view v1 as
select s_order_no, s_order_date , amount from s_order
order by amount DESC limit all;
Q4.)
delete from client
where address = 'chandwad';
select s_order_no
from s_order
where to_char(s_order_date,'mon')='12';
select*from s_order
where extract(month from s_order_date)='10';Slip no29
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to accept temperatures in Fahrenheit (F) and print it in Celsius
(C) Formula C=5/9(F-32) [5 marks]
# include<stdio.h>
int main()
{
float celsius,fahrenheit;
printf("Enter temperature in celsius:");
scanf("%f",& celsius);
fahrenheit =(celsius = 5/9) -32;
printf("%2f celsius = %2f fahrenheit",celsius,fahrenheit);
return 0;
}
ii. Write a recursive ‘C’ function to calculate sum of digits of a number. Example : Input :
345 Output : 12 [10 marks]
#include <stdio.h>
int sumOfDigits(int num);
int main()
{
int num, sum;
printf("Enter any number to find sum of digits: ");
scanf("%d", &num);
sum = sumOfDigits(num);
printf("Sum of digits of %d = %d", num, sum);
return 0;
}
int sumOfDigits(int num)
{
if(num == 0)
return 0;
}
return ((num % 10) + sumOfDigits(num / 10));
OR
Q 1) A Write a ‘C’ function to calculate xy . Use this function to calculate the sum
of first n terms of the series x + x3 /3 + x5 /5 + ... [15 marks]
Section II : Database Management Systems [15 marks]
Create the following tables ( primary keys are underlined).
Bus ( Bus_no , capacity ,depot_name)Route (Route_no ,source ,destination ,no_of_stations )
Relationship :
Bus-Route : M-1
Constraint :
Bus capacity is not null
A Create the above database in PostGreSQL and insert sufficient records.
B Execute the following queries in PostGreSQL (any 3)
i. Count total buses at depot “________”.
ii. Delete all buses having capacity < 20.
iii. List all buses on route number 41.
iv. Find the maximum number of stations.
v. List all routes from “Station” to “Airport”.
C Create a view to find the route having maximum number of stations and the buses which
run on that route.
OR
Write a query to Delete all the buses on routes in which total stations are less than 3.
[4 marks]
create table bus(busno int primary key,capacity numeric (20),depot_name
varchar(40),routeno int references route(routeno) );
create table route(routeno int primary key,source varchar(50),designation
varchar(50),noofstation numeric(10));
drop table route;
drop table bus;
select*from bus;
select*from route;
insert into bus values(2,'105','nashik',41);
insert into bus values(3,'120','lasalgaon',42);
insert into bus values(4,'125','vanasgaon',43);
insert into bus values(5,'125','sarole',44);
insert into bus values(6,'125','malegaon',45);
insert into bus values(7,'100','pimpalgaon',46);
insert into bus values(8,'18','pimpalgaon',47);
insert into bus values(9,'15','niphad',48);
insert into route values(41,'niphad','nashik',6);
insert into route values(42,'pimpalgaon','niphad',7);
insert into route values(43,'pimpalgaon','nashik',9);
insert into route values(44,'niphad','nashik',8);
insert into route values(45,'nashik','pimpalgaon',31);
insert into route values(46,'station','airport',41);
insert into route values(47,'airport','station',21);
insert into route values(48,'airport','mumabi',12);Q1
select count (depot_name) from bus
where depot_name='pimpalgaon';
Q2
delete from bus
where capacity <20;
select * from bus;
Q3
select * from route
where routeno = 41;
Q4
select max( noofstation)from route;
Q5
select routeno from route
where source = 'station' and designation ='airport';
Q[c]
create or replace view v1 as
select max( noofstation)from route;
select * from v1;
Q[c][or]
delete from route where routeno = (select routeno from route where noofstation < 42);
select * from bus;Slip no34
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to find maximum of two numbers. [5 marks]
/*c program to maximum of two numbers*/
#include<stdio.h>
int main()
{
int a,b;
printf("Please enter two different values\n");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("%d is maximum \n",a);
}
else if (b>a)
{
printf("%d is maximum \n",b);
}
else
{
printf("Both are equal \n");
}
return 0;
}
ii. Write a ‘C’ program to accept a number and reverse it. [10 marks]
#include<stdio.h>
int main()
{
int n, reverse=0, rem;
printf("Enter a number: ");
scanf("%d", &n);
while(n!=0)
{
rem=n%10;
reverse=reverse*10+rem;
n/=10;
}printf("Reversed Number: %d",reverse);
return 0;
}
OR
Q 1) A Write a ‘C’ program to perform the following operations on a character
till user selects Exit.
1. Display its ASCII value
2. Check if it is vowel
3. Check if it is uppercase
4. Display its next 5 characters
5. Exit [15 marks]
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
char ch; int n,i;
printf("\n Enter any charater :");
scanf("%c", &ch);
printf("\n **********MENU********\n");
printf("\n1. Display its ASCII Value\n 2. Check it is Vowel\n 3. Check it is
uppercase\n 4. Distplay its next 5 characters \n 5. Exit \n");
printf("\n Enter Your Choice: ");
scanf("%d",&n);
switch(n)
{
case 1: printf("\n The ASCII value of %c is %d",ch,ch);
break;
case 2: if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
printf("%c is vowel ",ch);
else
printf("%c is not vowel ",ch);
break;
case 3: if(isupper(ch))
printf("%c is uppercase",ch);
else
printf("%c is not uppercase",ch);
break;
case 4: printf("The next 5 characters of c are : ");
for(i=0;i<5;i++)
printf("%c ",++ch);}
}
break;
case 5: exit(0);
break;
Section II : Database Management Systems [15 marks]
Consider the following Property-Owner database
Property (pno, desc, area, rate)
Owner (owner_name, addr, phno)
Relation between owner and Property is One to Many.
Constraint: Primary key, rate should be > 0
Q 2) A Create the above database in PostGreSQL and insert sufficient records. [5 marks]
B Execute the following queries in PostGreSQL (any 3) [6 marks]
i. Display all the properties from Mumbai owned by “Mr. Patil”.
ii. Update the phone Number of “Mr. Mule” to 9923323366.
iii. List the names of owner having property in “pune” area.
iv. List the name of owners that ends with letter ‘a’.
v. Alter table by modifying addr to varchar(50));
C Write a query to Find property details with maximum rate in ‘pune’ area. [4 marks]
OR
Create a view to display the owner details having more than 2 properties..
create table owner4(owner_name varchar(40) primary key,addr varchar(30),phno
numeric(50));
select* from owner4;
create table property6(pno int primary key,description varchar(50),area varchar(50),rate
float(6),owner_name varchar(40) references owner4(owner_name));
select* from property6;
insert into owner4 values('mr.patil','mumbai',9944308758);
',);
',);
insert into owner4 values('mr.mule','dehli',9923323366);
insert into owner4 values('mr.rama','pune',8990765434);
insert into property6 values(101,'garden','pune','30000','mr.patil');
insert into property6 values(102,'market','mumbai','4000','mr.mule');
insert into property6 values(103,'moll','nashik','50000','mr.patil');
insert into property6 values(104,'moll','pune','50000','mr.rama');
select * from property6;
drop table property6;Query 1:select * from property6,owner4 where addr='mumbai'and
owner4.owner_name='mr.patil';
Query 2:update owner4
set phno = '9923323365'
where owner_name = 'mr.mule';
Query 3:select owner4.owner_name,area from owner4,property6 where area='pune';
Query 4:select owner_name from owner4
where owner_name like'%a';
Query 5:select area,rate from property6,owner4 where area='pune' and
owner4.owner_name=property6.owner_name and rate=(select max(rate) from property6);
Query 6 :
select owner4.owner_name,addr,phno from owner4,property6 where
property6.owner_name=owner4.owner_name
7) create view v11 as select owner4.oname,rate from owner4,property6
where pno=(select max(pno) from property6) and owner4.oname=property6.oname;
select * from v11;Slip no35
Section I : Problem Solving using Computer and ‘C’ Programming [15 marks]
Q 1) A i. Write a ‘C’ program to accept dimensions of a cylinder and print the
surface area and volume (surface area = 2πr2 + 2πrh, volume = πr2h) [5 marks]
#include<stdio.h>
#include<math.h>
int main(){
float r,h;
float surface_area,volume;
printf("Enter size of radius and height of a cylinder : ");
scanf("%f%f",&r,&h);
surface_area = 2 * M_PI * r * (r + h);
volume = M_PI * r * r * h;
printf("Surface area of cylinder is: %.3f",surface_area);
printf("\nVolume of cylinder is : %.3f",volume);
}
return 0;
ii. Write a ‘C’ program to calculate the GCD of two numbers. [10 marks]
#include <stdio.h>
int main()
{
int n1, n2, i, gcd;
printf("Enter two integers: ");
scanf("%d %d", &n1, &n2);
for(i=1; i <= n1 && i <= n2; ++i)
{
// Checks if i is factor of both integers
if(n1%i==0 && n2%i==0)
gcd = i;
}
printf("G.C.D of %d and %d is %d", n1, n2, gcd);
return 0;
}
ORQ 1) A Write a ‘C’ program to calculate the transpose of a mXn matrix. [15 marks]
#include <stdio.h>
int main()
{
int a[10][10], transpose[10][10], r, c, i, j;
printf("Enter rows and columns of matrix: ");
scanf("%d %d", &r, &c);
// Storing elements of the matrix
printf("\nEnter elements of matrix:\n");
for(i=0; i<r; ++i)
for(j=0; j<c; ++j)
{
printf("Enter element a%d%d: ",i+1, j+1);
scanf("%d", &a[i][j]);
}
// Displaying the matrix a[][] */
printf("\nEntered Matrix: \n");
for(i=0; i<r; ++i)
for(j=0; j<c; ++j)
{
printf("%d ", a[i][j]);
if (j == c-1)
printf("\n\n");
}
// Finding the transpose of matrix a
for(i=0; i<r; ++i)
for(j=0; j<c; ++j)
{
transpose[j][i] = a[i][j];
}
// Displaying the transpose of matrix a
printf("\nTranspose of Matrix:\n");
for(i=0; i<c; ++i)
for(j=0; j<r; ++j)
{
printf("%d ",transpose[i][j]);
if(j==r-1)
printf("\n\n");
}
return 0;
}Section II : Database Management Systems [15 marks]
Consider the following relations
Person (pnumber, pname, birthdate, income)
Area( aname,area_type).
Relation between Area and Person is One to Many.
The attribute ‘area_type’ can have values as either urban or rural.
Q 2) A Create the above database in PostGreSQL and insert sufficient records. [5 marks]
B Execute the following queries in PostGreSQL (any 3) [6 marks]
i.Give the count of people who are born on ‘06/12/1988’
ii. List names of all people whose income is between 20,000 and 35,000
iii.List the sum of incomes of people living in ‘Mumbai’
iv.List the minimum income of people.
v.List the details of people, sorted by person number
C Write a query to Find person details whose income is greater than [4 marks]
average income.
OR
Create a view to list the details of all persons from ‘urban’ area.
create table area3(aname varchar(30)primary key,area_type varchar(40));
select * from area3;
create table person6(pno int primary key,pname varchar(20),birthdate date,income
numeric(10),a_name varchar(30)references area3(a_name));
select * from person6;
insert into area2 values('mumbai','urban');
insert into area2 values('knagar','urban');
insert into area2 values('nashik','rural');
insert into area2 values('ranwad','urban');
insert into area2 values('wavi','rural');
select * from area2;
insert into person6 values(1,'shivay','12-01-2018','52000','knagar');
insert into person6 values(2,'shital','11-07-2015','20000','nashik');
insert into person6 values(3,'pooja','08-12-2018','30000','mgroad');
insert into person6 values(4,'anita','05-04-2014','50000','nashik');
insert into person6 values(5,'nileema','05-04-2018','50000','mumbai');
select * from person6;
q1
select count(pno) from person6
WHERE brithdate='01-12-2018'
q2
SELECT * from person6
WHERE income between 20000 to 35000
q3
select sum(income) from person6,area2
WHERE person6.aname='mumbai' and person6.aname=area2.aname;q4
SELECT min(income) from preson6
q5
select * person6 order by pno;
q6
select * from person6
HAVING income>avg(income);
q7
create or replace view v10 as select person6 from person6,area2
WHERE area2.aname=person6.aname and area_type='urban'
select * from v10
