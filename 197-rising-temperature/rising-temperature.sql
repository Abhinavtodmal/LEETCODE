# Write your MySQL query statement below
select w1.id 
from Weather w1 
left join Weather w2                   
 on datediff(w1.recordDate , w2.recordDate) =1       #Equivalent : w1.recordDate - w2.recordDate = 1
 where w1.temperature > w2.temperature;
 
--  DATEDIFF() function is used in SQL to find the number of days between two dates.