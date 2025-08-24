# Write your MySQL query statement below

select p.product_name , sum(unit) as unit 
from Products p
inner join Orders O on  p.product_id = O.product_id
WHERE O.order_date BETWEEN '2020-02-01' AND '2020-02-29'
group by p.product_name
having unit >= 100;