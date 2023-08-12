-- I want to show the area of each user's home city

SELECT u.name, u.city, c.area FROM first AS u LEFT JOIN second AS c ON u.city = c.city;

-- * Here we are using the LEFT JOIN to show all the users, 
-- * even if they don't have a city in the second table.
-- * It will just show null if the city do not exist in the second table.