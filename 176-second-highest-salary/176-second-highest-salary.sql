/* Write your PL/SQL query statement below */
SELECT

MAX(salary) as SecondHighestSalary
FROM employee where salary < (SELECT MAX(salary) FROM employee);