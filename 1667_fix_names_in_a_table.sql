# Write your MySQL query statement below
SELECT user_id, 
CONCAT(UCASE(LEFT(name, 1)), LCASE(SUBSTRING(name, 2))) 
as name FROM Users
order by user_id;