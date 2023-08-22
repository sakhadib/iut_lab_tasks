create table INSTRUCTOR
(
    ID VARCHAR2(5),
    NAME VARCHAR2(20),
    DEPT_NAME VARCHAR2(20),
    SALARY NUMBER,
    constraint PK_INSTRUCTOR primary key (ID),
    constraint SALARY_Validity check (SALARY > 20000)
);

--Inserting data into INSTRUCTOR table

INSERT INTO INSTRUCTOR (ID, NAME, DEPT_NAME, SALARY)
VALUES ('10101', 'Srinivasan', 'Comp. Sci.', 65000);

INSERT INTO INSTRUCTOR (ID, NAME, DEPT_NAME, SALARY)
VALUES ('12121', 'Wu', 'Finance', 90000);

INSERT INTO INSTRUCTOR (ID, NAME, DEPT_NAME, SALARY)
VALUES ('15151', 'Mozart', 'Music', 40000);

INSERT INTO INSTRUCTOR (ID, NAME, DEPT_NAME, SALARY)
VALUES ('22222', 'Einstein', 'Physics', 95000);

INSERT INTO INSTRUCTOR (ID, NAME, DEPT_NAME, SALARY)
VALUES ('32343', 'El Said', 'History', 60000);

INSERT INTO INSTRUCTOR (ID, NAME, DEPT_NAME, SALARY)
VALUES ('00456', 'Gold', 'Physics', 87000);

INSERT INTO INSTRUCTOR (ID, NAME, DEPT_NAME, SALARY)
VALUES ('45565', 'Katz', 'Comp. Sci.', 75000);

INSERT INTO INSTRUCTOR (ID, NAME, DEPT_NAME, SALARY)
VALUES ('58583', 'Califieri', 'History', 62000);

INSERT INTO INSTRUCTOR (ID, NAME, DEPT_NAME, SALARY)
VALUES ('76543', 'Singh', 'Finance', 80000);

INSERT INTO INSTRUCTOR (ID, NAME, DEPT_NAME, SALARY)
VALUES ('76766', 'Crick', 'Biology', 72000);

INSERT INTO INSTRUCTOR (ID, NAME, DEPT_NAME, SALARY)
VALUES ('03821', 'Brandt', 'Comp. Sci.', 92000);

INSERT INTO INSTRUCTOR (ID, NAME, DEPT_NAME, SALARY)
VALUES ('98345', 'Kim', 'Elec. Eng.', 80000);




-- Displaying all records from INSTRUCTOR table
SELECT * FROM INSTRUCTOR;



-- Showing instructor Name and ID Only
SELECT ID, Name FROM INSTRUCTOR;

-- Finding name and department of instructors who have salary more than 70000.
SELECT NAME, DEPT_NAME FROM INSTRUCTOR WHERE salary > 70000;

-- Finding name and department of instructors who have salary in between 80000 and 100000.
SELECT NAME, DEPT_NAME FROM INSTRUCTOR WHERE salary >= 80000 AND salary <= 100000;

-- Finding ID and name of instructors of Comp. Sci. department.
SELECT ID, NAME FROM INSTRUCTOR WHERE DEPT_NAME = 'Comp. Sci.';

-- Finding name and salary of instructors of finance department
SELECT NAME, SALARY FROM INSTRUCTOR WHERE DEPT_NAME = 'Finance';

-- Finding ID and name of instructors of Comp. Sci. department or instructors who are paid more than 75000.
SELECT ID, NAME FROM INSTRUCTOR WHERE DEPT_NAME = 'Comp. Sci.' OR SALARY > 75000;

-- Finding names of department 
SELECT DISTINCT DEPT_NAME FROM INSTRUCTOR;


-- Dropping the table
--DROP TABLE INSTRUCTOR CASCADE CONSTRAINTS;


