# Write your MySQL query statement below
SELECt email FROM person
GROUP BY email
HAVING COUNT(*) > 1;