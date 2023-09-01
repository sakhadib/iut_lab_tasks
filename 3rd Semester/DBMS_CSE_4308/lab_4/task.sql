-- A : Find the name of the actors/actresses that are also directors (without set operator).
SELECT (ACT_FIRSTNAME || ACT_LASTNAME) AS NAME FROM ACTOR WHERE ACT_FIRSTNAME || ACT_LASTNAME IN (SELECT (DIR_FIRSTNAME || DIR_LASTNAME) AS DIRNAME FROM DIRECTOR);

-- A2 : Find the name of the actors/actresses that are also directors (with set operator).
SELECT (ACT_FIRSTNAME || ACT_LASTNAME) AS NAME FROM actor
WHERE (ACT_FIRSTNAME || ACT_LASTNAME) IN (SELECT (ACT_FIRSTNAME || ACT_LASTNAME) FROM actor
INTERSECT
SELECT (DIR_FIRSTNAME || DIR_LASTNAME) FROM director);


-- B : Find the actresses with the same first name.
SELECT a1.ACT_FIRSTNAME, a1.ACT_LASTNAME FROM actor a1, actor A2
WHERE a1.ACT_FIRSTNAME = a2.ACT_FIRSTNAME 
AND a1.ACT_ID <> a2.ACT_ID AND a1.ACT_GENDER = 'F';

-- C : Find the list of all the full names stored in the database.
SELECT (ACT_FIRSTNAME || ACT_LASTNAME) AS NAME FROM actor
UNION
SELECT (DIR_FIRSTNAME || DIR_LASTNAME) AS NAME FROM director
UNION
SELECT (REV_NAME) AS NAME FROM reviewer;

-- D : Find the movie titles that did not receive any ratings.
SELECT MOV_TITLE FROM movie
WHERE MOV_ID NOT IN (SELECT MOV_ID FROM RATING);


-- E : Find the average rating of all movies.
SELECT AVG(REV_STARS) AS average_RATING FROM rating;

-- F : Find the minimum rating for each movie and display them in descending order of rating.
SELECT MOV_TITLE, MIN(REV_STARS) AS MIN_RATING FROM rating
INNER JOIN movie ON rating.MOV_ID = movie.MOV_ID
GROUP BY MOV_TITLE
ORDER BY MIN_RATING DESC;


-- G : Find the title of the movie having an average rev_star higher than the average rev_star of all the movies.
SELECT MOV_TITLE FROM movie
WHERE MOV_ID IN (
SELECT A.MOV_ID FROM
(SELECT MOV_ID, AVG(REV_STARS) AS SUM FROM rating GROUP BY MOV_ID) A,
(SELECT AVG(REV_STARS) AS AVG_RATING FROM RATING) B
WHERE A.SUM > B.AVG_RATING);

-- H : Find the name of actors/actresses and the number of ratings received by the movies in which they played a role.

-- I : Find the name of the director of the movie having the highest average rev_star

-- J : Find all the movie-related information of movies acted and directed by the same person.
SELECT * FROM MOVIE WHERE MOV_ID IN(
SELECT MOV_ID FROM DIRECTION WHERE DIR_ID IN(
SELECT DIR_ID FROM DIRECTOR WHERE DIR_FIRSTNAME || DIR_LASTNAME 
IN (SELECT (ACT_FIRSTNAME || ACT_LASTNAME) FROM ACTOR)));


-- K : Find the title and average rating of the movies that have an average rev_star of more than 7


-- L : Find the reviewer who gives the highest number of lowest rev_star.