-- Write your PostgreSQL query statement below
SELECT name, population, area 
FROM World 
where AREA >= 3000000 
        or POPULATION >= 25000000;