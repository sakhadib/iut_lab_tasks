select distinct 
author_id as id 
from Views 
where viewer_id = author_id 
order by id ASC;