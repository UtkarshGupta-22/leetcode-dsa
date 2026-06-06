-- Write your PostgreSQL query statement below
select DISTINCT viewer_id as id
from views 
where viewer_id = author_id
ORDER by id