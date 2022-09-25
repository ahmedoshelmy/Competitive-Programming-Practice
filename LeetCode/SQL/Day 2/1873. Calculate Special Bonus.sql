SELECT employee_id, IF(employee_id%2 =1 AND SUBSTRING(name,1,1)!='M',salary,0) AS bonus from Employees ORDER BY employee_id


#Another Solution 

SELECT employee_id ,
CASE
WHEN employee_id%2 = 1 AND SUBSTRING(name,1,1) != 'M' THEN salary 
ELSE 0
END AS bonus FROM Employees ORDER BY employee_id
