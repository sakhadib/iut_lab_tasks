-- 1 : Find all customer names and their cities who have a loan but not an account.
Select customer_name, customer_city from customer
Where customer_name not in
(select customer_name from depositor) and
customer_name in (select customer_name from borrower);

-- 2 : Find all customer names who have an account as well as a loan.
Select customer_name, customer_city from customer
Where customer_name in
(select customer_name from depositor) and
customer_name in (select customer_name from borrower);

-- 3 : Show the count of accounts that were opened in each month along with the month.
SELECT EXTRACT(month FROM acc_opening_date) AS month, COUNT(*) AS account_count
FROM account
GROUP BY EXTRACT(month FROM acc_opening_date)
ORDER BY EXTRACT(month FROM acc_opening_date);


-- 4 : Find the months between the last acc_opening_date and last loan_date of customer ’Smith’.
SELECT MONTHS_BETWEEN(
    (
        SELECT MAX(acc_opening_date) 
        FROM account
        WHERE account_number IN
        (
            SELECT account_number
            FROM depositor 
            WHERE customer_name = 'Smith'
        )
    ), 
    (
        SELECT MAX(loan_date) 
        FROM loan 
        WHERE loan_number IN
        (
            SELECT loan_number 
            FROM borrower 
            WHERE customer_name = 'Smith'
        )
    )
) AS month 
FROM dual;


-- 5 : Find the average loan amount at each branch. Do not include any branch which is located in  a that has the substring, ’Horse’ in its name.
SELECT A.branch_name, A.amount from
(select branch_name, avg(amount) as amount from loan
GROUP BY branch_name) A, branch
where branch.branch_name = A.branch_name 
and branch.branch_city not like '%Horse%';



-- 6 : Find the customer name and account number of the account that has the highest balance.
SELECT customer_name, account_number from depositor
where account_number in
(
    select account_number from account
    where balance = (select max(balance) from account)
);


-- 7 : For each branch city, find the average amount of all the loans opened in a branch located in that branch city. Do not include any branch city in the result where the average amount of all loans opened in a branch located in that city is less than 1500.
SELECT branch_city, avg(amount) from loan, branch
where loan.branch_name = branch.branch_name
GROUP BY branch_city
HAVING avg(amount) > 1500;


-- 8 : Show all the name of the customer with the suffix ’Eligible’ who has at least one loan that can be paid off by his/her total balance.
SELECT customer_name || ' Eligible' 
AS customer_name from depositor
where account_number in
(
    select account_number from account
    where balance >=
    (
        select sum(amount) from loan
        where loan.branch_name = account.branch_name
        and loan.loan_number in
        (
            select loan_number from borrower
            where borrower.customer_name = depositor.customer_name
        )
    )
);

-- 9 : Show all the branch names with suffixes ’Elite’ that have a total account balance greater than the (average total balance + 500), ’Moderate’ that have a total account balance in between (average total balance + 500) to (average total balance - 500), else ’Poor’.
SELECT branch_name || ' Elite' AS branch_name from branch
where branch_name in
(
    select branch_name from account
    group by branch_name
    having sum(balance) > 
    (
        select avg(sum_balance) + 500 from
        (
            select branch_name, sum(balance) as sum_balance from account
            group by branch_name
        )
    )
)
UNION
SELECT branch_name || ' Moderate' AS branch_name from branch
where branch_name in
(
    select branch_name from account
    group by branch_name
    having sum(balance) between
    (
        select avg(sum_balance) + 500 from
        (
            select branch_name, sum(balance) as sum_balance from account
            group by branch_name
        )
    )
    and
    (
        select avg(sum_balance) - 500 from
        (
            select branch_name, sum(balance) as sum_balance from account
            group by branch_name
        )
    )
)
UNION
SELECT branch_name || ' Poor' AS branch_name from branch
where branch_name in
(
    select branch_name from account
    group by branch_name
    having sum(balance) < 
    (
        select avg(sum_balance) - 500 from
        (
            select branch_name, sum(balance) as sum_balance from account
            group by branch_name
        )
    )
);


-- 10 : Find the branch information for cities where at least one customer lives who does not have any account or any loans. The branch must have given some loans and has accounts opened by other customers.
SELECT branch_name, branch_city from branch
where branch_city in
(
    select customer_city from customer
    where customer_city not in
    (
        select customer_city from customer
        where customer_name in
        (
            select customer_name from depositor
        )
        or
        customer_name in
        (
            select customer_name from borrower
        )
    )
)
and branch_name in
(
    select branch_name from loan
    group by branch_name
    having count(*) > 0
)
and branch_name in
(
    select branch_name from account
    group by branch_name
    having count(*) > 0
);


-- 11 : Create a new customer_new table using a similar structure to the customer table.
CREATE TABLE customer_new AS
SELECT * FROM customer
where customer_name = 'dog';


-- 12 : In the customer_new table insert only those customers who have either an account or a loan.
INSERT INTO customer_new
SELECT * FROM customer
where customer_name in
(
    select customer_name from depositor
)
or
customer_name in
(
    select customer_name from borrower
);


-- 13 : Add a new column Status in customer_new table of varchar2(15) type.
ALTER TABLE customer_new
ADD status VARCHAR2(15);


-- 14 : For each customer if his/her total balance is greater than the total loan then set the status ’In savings’, if the vise versa then ’In loan’, lastly if both of the amounts are the same then ’In Breakeven’.


-- 15 : 