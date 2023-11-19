-- Find the list of divisions along with the total number of districts.
SELECT div, COUNT(name) as t_dist
FROM dist
GROUP BY div;

-- Find the list of districts having at least 200 customers living there.
SELECT dist, COUNT(name) as total_customers
FROM c
where total_customers >= 200
GROUP BY dist;

-- Find the number of items bought by c named "Alfred".

SELECT COUNT(item) as total_items_bought
FROM buys
where c in
select 
(
    SELECT id FROM c WHERE name = 'Alfred';
);

-- Find the list of employees based on the number of items they have rented so far.
SELECT employee, COUNT(item) as total_items_rented
from rent
where employee in
(
    SELECT id FROM employee
)
GROUP BY employee;

-- Find the employee who had rented items for the longest period of time.
SELECT employee, MAX(duration) as max_duration
from rent
where employee in
(
    SELECT id FROM employee
)
GROUP BY employee;
