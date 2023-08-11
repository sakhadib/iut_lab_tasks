SELECT e.name AS name,
eu.unique_id AS unique_id
FROM Employees e 
LEFT JOIN EmployeeUNI eu
ON e.id = eu.id;