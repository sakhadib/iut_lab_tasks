
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
