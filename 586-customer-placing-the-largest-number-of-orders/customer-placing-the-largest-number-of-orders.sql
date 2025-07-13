select customer_number 
from (
    select customer_number , count(*) as freq
    from Orders 
    group by customer_number
) as counts
order by freq desc 
limit 1 ;