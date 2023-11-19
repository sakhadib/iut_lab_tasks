-- To show the full table
SELECT * FROM `EXAMPLE`;

-- To show the table with only the national id and name
SELECT NATIONAL_ID, NAME FROM `EXAMPLE`;

-- To show the table with only the national id and name, but with different column names
SELECT NATIONAL_ID AS ID, NAME AS FULL_NAME FROM `EXAMPLE`;