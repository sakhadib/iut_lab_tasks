drop table depositor cascade constraints;
drop table borrower cascade constraints;
drop table account cascade constraints;
drop table loan cascade constraints;
drop table customer cascade constraints;
drop table branch cascade constraints;

create table branch
   (branch_name 	varchar(15)	not null,
    branch_city 	varchar(15)	not null,
    assets 		number		not null,
    primary key(branch_name));
    
create table customer
   (customer_name 	varchar(15)	not null,
    customer_street 	varchar(12)	not null,
    customer_city 	varchar(15)	not null,
    primary key(customer_name));

create table account
   (account_number 	varchar(15)	not null,
    branch_name		varchar(15)	not null,
    acc_opening_date DATE,
    balance 		number		not null,
    primary key(account_number),
    foreign key(branch_name) references branch(branch_name));


create table loan
   (loan_number 	varchar(15)	not null,
    branch_name		varchar(15)	not null,
    loan_date DATE,
    amount 		number		not null,
    primary key(loan_number),
    foreign key(branch_name) references branch(branch_name));

create table depositor
   (customer_name 	varchar(15)	not null,
    account_number 	varchar(15)	not null,
    primary key(customer_name, account_number),
    foreign key(account_number) references account(account_number),
    foreign key(customer_name) references customer(customer_name));

create table borrower
   (customer_name 	varchar(15)	not null,
    loan_number 	varchar(15)	not null,
    primary key(customer_name, loan_number),
    foreign key(customer_name) references customer(customer_name),
    foreign key(loan_number) references loan(loan_number));

/* populate relations */

insert into customer	values ('Jones',	'Main',		'Harrison');
insert into customer	values ('Smith',	'Main',		'Rye');
insert into customer	values ('Hayes',	'Main',		'Harrison');
insert into customer	values ('Curry',	'North',	'Rye');
insert into customer	values ('Lindsay',	'Park',		'Pittsfield');
insert into customer	values ('Turner',	'Putnam',	'Stamford');
insert into customer	values ('Williams',	'Nassau',	'Princeton');
insert into customer	values ('Adams',	'Spring',	'Pittsfield');
insert into customer	values ('Johnson',	'Alma',		'Palo Alto');
insert into customer	values ('Glenn',	'Sand Hill',	'Woodside');
insert into customer	values ('Brooks',	'Senator',	'Brooklyn');
insert into customer	values ('Green',	'Walnut',	'Stamford');
insert into customer	values ('Jackson',	'University',	'Salt Lake');
insert into customer	values ('Majeris',	'First',	'Rye');
insert into customer	values ('McBride',	'Safety',	'Rye');

insert into branch	values ('Downtown',	'Brooklyn',	 900000);
insert into branch	values ('Redwood',	'Palo Alto',	2100000);
insert into branch	values ('Perryridge',	'Horseneck',	1700000);
insert into branch	values ('Mianus',	'Horseneck',	 400200);
insert into branch	values ('Round Hill',	'Horseneck',	8000000);
insert into branch	values ('Pownal',	'Bennington',	 400000);
insert into branch	values ('North Town',	'Rye',		3700000);
insert into branch	values ('Brighton',	'Brooklyn',	7000000);
insert into branch	values ('Central',	'Rye',		 400280);

insert into account	values ('A-101',	'Downtown',	    TO_DATE('2009-01-09', 'YYYY-MM-DD'),    1500);
insert into account	values ('A-215',	'Mianus',       TO_DATE('2011-07-19', 'YYYY-MM-DD'),    1700);
insert into account	values ('A-102',	'Perryridge',   TO_DATE('2019-03-04', 'YYYY-MM-DD'),	1500);
insert into account	values ('A-305',	'Round Hill',   TO_DATE('2010-03-18', 'YYYY-MM-DD'),   	350);
insert into account	values ('A-201',	'Perryridge',   TO_DATE('2009-09-29', 'YYYY-MM-DD'),	9000);
insert into account	values ('A-222',	'Redwood',      TO_DATE('2012-04-20', 'YYYY-MM-DD'),	700);
insert into account	values ('A-217',	'Brighton',     TO_DATE('2016-05-18', 'YYYY-MM-DD'),	1750);
insert into account	values ('A-333',	'Central',      TO_DATE('2013-08-24', 'YYYY-MM-DD'),	850);
insert into account	values ('A-444',	'North Town',	TO_DATE('2018-11-11', 'YYYY-MM-DD'),    625);

insert into depositor values ('Johnson','A-111');
insert into depositor values ('Smith',	'A-215');
insert into depositor values ('Hayes',	'A-102');
insert into depositor values ('Hayes',	'A-101');
insert into depositor values ('Turner',	'A-305');
insert into depositor values ('Johnson','A-201');
insert into depositor values ('Jones',	'A-217');
insert into depositor values ('Lindsay','A-222');
insert into depositor values ('Majeris','A-333');
insert into depositor values ('Smith',	'A-444');

insert into loan	values ('L-17',		'Downtown',     TO_DATE('2009-01-09', 'YYYY-MM-DD'),	1000);
insert into loan	values ('L-23',		'Redwood',      TO_DATE('2009-09-29', 'YYYY-MM-DD'),	2000);
insert into loan	values ('L-15',		'Perryridge',   TO_DATE('2010-03-18', 'YYYY-MM-DD'),	1500);
insert into loan	values ('L-14',		'Downtown',     TO_DATE('2010-03-18', 'YYYY-MM-DD'),	1500);
insert into loan	values ('L-93',		'Mianus',       TO_DATE('2016-05-18', 'YYYY-MM-DD'),	500);
insert into loan	values ('L-11',		'Round Hill',	TO_DATE('2012-04-20', 'YYYY-MM-DD'),    900);
insert into loan	values ('L-16',		'Perryridge',	TO_DATE('2011-07-19', 'YYYY-MM-DD'),    1300);
insert into loan	values ('L-20',		'North Town',	TO_DATE('2013-08-24', 'YYYY-MM-DD'),    7500);
insert into loan	values ('L-21',		'Central',      TO_DATE('2019-03-04', 'YYYY-MM-DD'),	570);

insert into borrower values ('Jones',	'L-17');
insert into borrower values ('Smith',	'L-23');
insert into borrower values ('Hayes',	'L-15');
insert into borrower values ('Jackson',	'L-14');
insert into borrower values ('Curry',	'L-93');
insert into borrower values ('Smith',	'L-11');
insert into borrower values ('Williams','L-27');
insert into borrower values ('Adams',	'L-16');
insert into borrower values ('McBride',	'L-20');
insert into borrower values ('Smith',	'L-21');

commit;
