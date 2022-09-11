# Write your MySQL query statement below


Select Max(salary) as SecondHighestSalary From Employee
Where salary not in (Select Max(salary) From Employee);