--1 : Create a view named Advisor_Selection that shows the ID, name and department name of instructors.

CREATE VIEW Advisor_Selection AS
SELECT i.ID, i.name, i.dept_name
FROM instructor i;

--2 : Create another view named Student_Count using Advisor_Selection and advisor to show the name of the instructor and the number students assigned under them.

CREATE VIEW Student_Count AS
SELECT a.i_ID AS instructor_id, ai.name AS instructor_name, COUNT(a.s_ID) AS student_count
FROM advisor a
JOIN Advisor_Selection ai ON a.i_ID = ai.ID
GROUP BY a.i_ID, ai.name;


--3.a 
Create role student;
GRANT SELECT ON shuvro.Advisor_Selection TO student;
GRANT SELECT ON shuvro.Student_Count TO student;


--3.b
Create role course_teacher;
GRANT SELECT ON shuvro.Student_Count TO course_teacher;
GRANT SELECT ON shuvro.Advisor_Selection TO course_teacher;


--3.c
Create role hod;
GRANT course_teacher TO hod;
GRANT INSERT ON shuvro.instructor TO hod;



--3.d
Create role admin;
GRANT SELECT ON shuvro.department TO admin;
GRANT SELECT ON shuvro.instructor TO admin;
GRANT UPDATE (budget) ON department TO admin;



--4
CREATE USER admin_user IDENTIFIED BY admin_password;
GRANT CREATE SESSION, RESOURCE, CREATE TABLESPACE TO admin_user;
GRANT admin TO admin_user;


CREATE USER hod_user IDENTIFIED BY hod_password;
GRANT CREATE SESSION, RESOURCE, CREATE TABLESPACE TO hod_user;
GRANT hod TO hod_user;


CREATE USER teacher_user IDENTIFIED BY teacher_password;
GRANT CREATE SESSION, RESOURCE, CREATE TABLESPACE TO teacher_user;
GRANT course_teacher TO teacher_user;


CREATE USER student_user IDENTIFIED BY student_password;
GRANT CREATE SESSION, RESOURCE, CREATE TABLESPACE TO student_user;
GRANT student TO student_user;



/*


INSERT INTO shuvro.instructor (ID, name, dept_name, salary)
VALUES ('12345', 'Abrar', 'Comp. Sci.', 60000);


UPDATE shuvro.department
SET budget = 150000
WHERE dept_name = 'Comp. Sci.';

*/