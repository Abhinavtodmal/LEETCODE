# Write your MySQL query statement below

# The sum of any two sides must be greater than the third side.

select x ,y, z ,
 case 
 when x+y > z and y+z > x and z+x > y then 'Yes'
 else 'No'
 end as triangle
 from Triangle;