-- Task 1.a
BEGIN
  DBMS_OUTPUT.PUT_LINE('Adib Sakhawat');
END;
/

-- Task 1.b
DECLARE
    input_string VARCHAR2(100);
BEGIN
    -- Take input of a string
    input_string := '&Enter_String';

    -- Print the length of the string
    DBMS_OUTPUT.PUT_LINE('Length of the string is: ' || LENGTH(input_string));
END;
/


-- Task 1.c
DECLARE
    num1 NUMBER;
    num2 NUMBER;
    product NUMBER;
BEGIN
    -- Take input of two numbers
    num1 := &Enter_Number1;
    num2 := &Enter_Number2;

    -- Calculate the product
    product := num1 * num2;

    -- Print the product
    DBMS_OUTPUT.PUT_LINE('The product of ' || num1 || ' and ' || num2 || ' is ' || product);
END;
/


-- Task 1.d
DECLARE
    current_time VARCHAR2(20);
BEGIN
    -- Get the current system time
    current_time := TO_CHAR(SYSDATE, 'HH:MI:SS AM');

    -- Print the current system time
    DBMS_OUTPUT.PUT_LINE('The current system time is: ' || current_time);
END;
/


-- Task 1.e
DECLARE
  input_num NUMBER := &input_num;
BEGIN
  IF MOD(input_num, 1) = 0 THEN
    DBMS_OUTPUT.PUT_LINE('The input number is an integer.');
  ELSE
    DBMS_OUTPUT.PUT_LINE('The input number is a fraction.');
  END IF;
END;
/


-- Task 1.f
CREATE OR REPLACE PROCEDURE check_prime_or_composite (n IN NUMBER) AS
  cnt NUMBER := 0;
BEGIN
  FOR i IN 2..n-1 LOOP
    IF MOD(n,i) = 0 THEN
      cnt := cnt + 1;
    END IF;
  END LOOP;
  
  IF cnt > 0 THEN
    DBMS_OUTPUT.PUT_LINE(n || ' is composite');
  ELSE
    DBMS_OUTPUT.PUT_LINE(n || ' is prime');
  END IF;
END;
/



-- Task 2.a
CREATE OR REPLACE PROCEDURE top_rated_movies (p_top IN NUMBER) IS
  v_count NUMBER;
BEGIN
  SELECT COUNT(*) INTO v_count FROM MOVIE;
  
  IF p_top > v_count THEN
    DBMS_OUTPUT.PUT_LINE('Error: Input number is greater than the number of movies.');
  ELSE
    FOR r IN (
      SELECT m.MOV_TITLE, AVG(r.REV_STARS) AS avg_rating
      FROM MOVIE m JOIN RATING r ON m.MOV_ID = r.MOV_ID
      GROUP BY m.MOV_TITLE
      ORDER BY avg_rating DESC
      FETCH FIRST p_top ROWS ONLY
    ) LOOP
      DBMS_OUTPUT.PUT_LINE('Movie: ' || r.MOV_TITLE || ', Average Rating: ' || r.avg_rating);
    END LOOP;
  END IF;
EXCEPTION
  WHEN OTHERS THEN
    DBMS_OUTPUT.PUT_LINE('An error occurred: ' || SQLERRM);
END top_rated_movies;
/



-- Task 2.b
CREATE OR REPLACE FUNCTION movie_status (p_title IN VARCHAR2) RETURN VARCHAR2 IS
  v_count NUMBER;
  v_status VARCHAR2(10);
BEGIN
  SELECT COUNT(*) INTO v_count
  FROM MOVIE m JOIN CASTS c ON m.MOV_ID = c.MOV_ID
  WHERE m.MOV_TITLE = p_title;

  IF v_count = 1 THEN
    v_status := 'Solo';
  ELSE
    v_status := 'Ensemble';
  END IF;

  RETURN v_status;
EXCEPTION
  WHEN OTHERS THEN
    DBMS_OUTPUT.PUT_LINE('An error occurred: ' || SQLERRM);
    RETURN NULL;
END movie_status;
/



-- Task 2.c
CREATE OR REPLACE PROCEDURE oscar_nominees IS
BEGIN
  FOR r IN (
    SELECT d.DIR_FIRSTNAME, d.DIR_LASTNAME, m.MOV_TITLE, AVG(r.REV_STARS) AS avg_rating, COUNT(r.REV_ID) AS num_reviewers
    FROM DIRECTOR d JOIN DIRECTION dir ON d.DIR_ID = dir.DIR_ID
                     JOIN MOVIE m ON dir.MOV_ID = m.MOV_ID
                     JOIN RATING r ON m.MOV_ID = r.MOV_ID
    GROUP BY d.DIR_FIRSTNAME, d.DIR_LASTNAME, m.MOV_TITLE
    HAVING AVG(r.REV_STARS) >= 7 AND COUNT(r.REV_ID) > 10
  ) LOOP
    DBMS_OUTPUT.PUT_LINE('Director: ' || r.DIR_FIRSTNAME || ' ' || r.DIR_LASTNAME || ', Movie: ' || r.MOV_TITLE || ', Average Rating: ' || r.avg_rating || ', Number of Reviewers: ' || r.num_reviewers);
  END LOOP;
EXCEPTION
  WHEN OTHERS THEN
    DBMS_OUTPUT.PUT_LINE('An error occurred: ' || SQLERRM);
END oscar_nominees;
/


-- Task 2.d
CREATE OR REPLACE FUNCTION movie_category (p_title IN VARCHAR2) RETURN VARCHAR2 IS
  v_year NUMBER;
  v_avg_rating NUMBER;
  v_category VARCHAR2(20);
BEGIN
  SELECT MOV_YEAR, AVG(REV_STARS) INTO v_year, v_avg_rating
  FROM MOVIE m JOIN RATING r ON m.MOV_ID = r.MOV_ID
  WHERE m.MOV_TITLE = p_title;

  IF v_year BETWEEN 1950 AND 1959 AND v_avg_rating > 6.5 THEN
    v_category := 'Fantastic Fifties';
  ELSIF v_year BETWEEN 1960 AND 1969 AND v_avg_rating > 6.7 THEN
    v_category := 'Sweet Sixties';
  ELSIF v_year BETWEEN 1970 AND 1979 AND v_avg_rating > 6.9 THEN
    v_category := 'Super Seventies';
  ELSIF v_year BETWEEN 1980 AND 1989 AND v_avg_rating > 7.1 THEN
    v_category := 'Ecstatic Eighties';
  ELSIF v_year BETWEEN 1990 AND 1999 AND v_avg_rating > 7.3 THEN
    v_category := 'Neat Nineties';
  ELSE
    v_category := 'Garbage';
  END IF;

  RETURN v_category;
EXCEPTION
  WHEN OTHERS THEN
    DBMS_OUTPUT.PUT_LINE('An error occurred: ' || SQLERRM);
    RETURN NULL;
END movie_category;
/


