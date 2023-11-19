-- A
-- Find all the Doctors’ names whose fees are less than 1500.
SELECT NAME FROM DOCTOR WHERE FEE < 1500;

-- B
-- Find all the Patients’ names who live in ‘KHL’ city.
SELECT NAME FROM PATIENT WHERE ADDRESS = 'KHL';

-- C
-- Show the result of Cartesian Product between PATIENT and APPOINTMENT_INFO table.
SELECT * FROM PATIENT, APPOINTMENT_INFO;

-- D
-- Show the result of Natural Join between PATIENT and APPOINTMENT_INFO table.
SELECT * FROM PATIENT NATURAL JOIN APPOINTMENT_INFO;

-- E
-- Find all the Patient’s names and their address who have an appointment today.


-- F
-- Find all the Doctor-related information who have patients from ’DHK’.
SELECT NAME, SPECIALIZATION, FEE FROM DOCTOR, APPOINTMENT_INFO 
WHERE DOCTOR.NAME = APPOINTMENT_INFO.D_NAME AND APPOINTMENT_INFO.P_NO 
IN (SELECT PATIENT_NO FROM PATIENT WHERE ADDRESS = 'DHK');


-- G
-- Find all Patient-related information who has an appointment with a doctor of ’GS’ specialization or a doctor whose fee is greater than 1500.



