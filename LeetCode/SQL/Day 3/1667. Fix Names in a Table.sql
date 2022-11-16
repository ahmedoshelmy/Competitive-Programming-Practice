# Write your MySQL query statement below
SELECT user_id, CONCAT(upper(left(name,1)),LOWER(substring(name,2))) AS name  FROM Users  ORDER BY user_id
