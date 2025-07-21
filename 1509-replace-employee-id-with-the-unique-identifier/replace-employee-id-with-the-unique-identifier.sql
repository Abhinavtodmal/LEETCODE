# Write your MySQL query statement below
select  e.unique_id ,f.name
from Employees f
left join EmployeeUNI e on  f.id =e.id ;