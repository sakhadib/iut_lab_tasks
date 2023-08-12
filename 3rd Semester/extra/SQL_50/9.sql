SELECT w1.id
FROM Weather w1, Weather w2
WHERE w1.Temperature > w2.Temperature AND DATEDIFF(w2.RecordDate, w1.RecordDate) = -1;


