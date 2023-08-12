--? I want to show the users who live in big cities
--? A city is Big if it it's Area is greater than 50 sqKM
--? OR
--? If it's population is greater than 500000

SELECT u.name, u.city 
FROM first u 
LEFT JOIN second c 
ON u.city = c.city 
WHERE c.area > 50 
OR c.population > 500000;


/* OUTPUT:

+--------+------------+
| name   | city       |
+--------+------------+
| Rahim  | Dhaka      |
| Karim  | Chittagong |
| Ayesha | Khulna     |
| Fatima | Rajshahi   |
| Sohel  | Comilla    |
| Imran  | Rangpur    |
| Sadia  | Dinajpur   |
+--------+------------+

*/

-- * The ON clause is used to specify the condition for the joininig of the tables.
-- * The WHERE clause is used to specify the condition for the filtering of the rows.