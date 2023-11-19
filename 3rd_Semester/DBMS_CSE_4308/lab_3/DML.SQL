-- A
-- Update the NAME and ADDRESS of a tuple from ’A’ and ’DHK ’ to ’K’ and ’RAJ’ accordingly.
UPDATE PATIENT SET NAME = 'K', ADDRESS = 'RAJ' WHERE NAME = 'A';

-- B
-- Update the NAME of table DOCTOR from ’MR. Y’ as ’Ms. Y’.
UPDATE DOCTOR SET NAME = 'Ms. Y' WHERE NAME = 'MR. Y';

-- C
-- Delete Patient with PATIENT_NO P-101.
DELETE FROM PATIENT WHERE PATIENT_NO = 'P-101';

-- D
-- Delete all the information without deleting the table structure.
DELETE FROM DOCTOR;