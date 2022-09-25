# Write your MySQL query statement below
SELECT name from Customers  AS Customers WHERE id = ANY(
SELECT id   from Customers WHERE   NOT EXISTS (
    SELECT customerID from Orders 
)
    )
