SELECT p.product_name ,s.year ,s.price from Sales as s left join Product as p on p.product_id = s.product_id ;

SELECT p.product_name,
s.year, s.price 
FROM Sales as s 
LEFT JOIN Product as p
ON p.product_id = s.product_id;
