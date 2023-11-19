# LabTask to complete Database Managemaent System with File System. 

Here Given student.txt file which contains student information. and grades.txt file which contains student grades.

We Have to merge both files and run several queries on it.

## Three Given Tasks:
1. Print the average GPA of the students
2. Take Student ID, GPA, and Semester as input. Then after validating the input, insert the information
as a new row in the grades.txt file. If the information is invalid, discard the input
and show an error message.
3. Take Student ID as input and show his/her name and semester in which he/she got the lowest
GPA. Print an error message if the Student ID does not exist in your database.


## Text Files:

### student.txt
```bash
824757;Charlie;18;A+;CSE
401790;Peggy;16;B-;MPE
485133;Umar;20;O-;CSE
941644;Mike;16;AB-;EEE
145715;Quill;17;A+;MPE
336812;Zoe;16;O-;CSE
277204;Lloyd;16;A-;CSE
884223;Victor;16;O+;TVE
957390;Kent;20;B-;CSE
584351;Erin;17;A+;BTM
895878;Rupert;16;AB+;CSE
190658;Niaj;16;B+;MPE
590338;Frank;18;AB+;MPE
588160;Alice;19;AB+;MPE
155704;Bob;20;AB-;BTM
962219;Walter;19;A-;TVE
254065;Judy;20;O-;EEE
114434;Ivan;17;O+;EEE
579390;Sybil;17;O+;BTM
805131;Ted;18;B+;TVE
370505;Heidi;18;B-;BTM
168349;Dan;17;A-;TVE
680750;Grace;20;AB-;EEE
87327;Olivia;20;AB-;TVE
507626;Xavier;16;B+;EEE
234404;Yusuf;18;AB+;BTM
```

### grades.txt
```bash
155704;3.92;6
805131;2.85;4
87327;3.95;3
336812;3.42;7
114434;3.56;8
114434;3.27;4
87327;3.22;8
145715;3.41;4
370505;3.27;5
190658;2.59;6
680750;3.24;3
114434;2.66;5
370505;3.80;2
234404;2.70;5
145715;3.90;6
884223;3.36;6
401790;2.63;3
277204;3.07;3
588160;3.24;1
590338;2.50;2
824757;3.85;3
584351;3.69;2
579390;3.71;6
155704;3.66;2
962219;3.03;6
824757;3.60;4
485133;3.29;4
190658;3.99;1
579390;3.76;1
895878;3.70;5
254065;2.94;7
590338;3.59;1
884223;3.79;3
584351;3.27;4
957390;2.96;3
895878;2.64;4
254065;3.53;6
957390;3.63;8
588160;2.95;5
507626;2.55;6
941644;3.56;5
507626;3.19;1
962219;2.63;4
579390;3.44;7
145715;3.23;3
507626;2.71;8
168349;2.54;5
87327;3.83;4
680750;3.73;6
155704;3.52;2
824757;2.52;2
```