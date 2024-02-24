# Write your MySQL query statement below
SELECT SalesPerson.name
From SalesPerson  
where SalesPerson.name
not in (SELECT SalesPerson.name from 
SalesPerson  Left JOIN Orders on Orders.Sales_id = SalesPerson.Sales_id
 JOIN Company on Orders.com_id = Company.com_id
where company.name = 'RED')
GROUP BY SalesPerson.name;