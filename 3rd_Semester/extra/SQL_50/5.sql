select tweet_id 
from Tweets 
where 
CHAR_LENGTH(content) > 15;