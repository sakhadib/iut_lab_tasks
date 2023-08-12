--? NOW if I want to show the users who live in big cities
--? But define big city as a city with area greater than 50 sqKM
--? AND population greater than 500000. THEN,

SELECT u.name, u.city 
FROM first u 
LEFT JOIN second c 
ON u.city = c.city 
WHERE c.area > 50 
AND c.population > 500000;


/* OUTPUT:

+--------+------------+
| name   | city       |
+--------+------------+
| Rahim  | Dhaka      |
| Karim  | Chittagong |
| Fatima | Rajshahi   |
+--------+------------+

*/

-- * The ON clause is used to specify the condition for the joininig of the tables.
-- * The WHERE clause is used to specify the condition for the filtering of the rows.
-- * The AND operator is used to specify that both the conditions must be true.
