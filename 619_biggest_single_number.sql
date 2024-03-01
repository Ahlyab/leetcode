# Write your MySQL query statement below
SELECT MAX(num) as num from
(SELECT num from myNumbers
group by num
having count(num) = 1
) as unique_numbers