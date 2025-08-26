select name   as Customers
from Customers 
left join  Orders on Customers.id = Orders.customerId 
where customerId is null ;
