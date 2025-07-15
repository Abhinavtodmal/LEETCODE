SELECT Department.name AS Department,
       Employee.name AS Employee,
       Employee.salary AS Salary
FROM Employee
JOIN Department ON Employee.departmentId = Department.id
JOIN (
    SELECT departmentId, MAX(salary) AS max_salary
    FROM Employee
    GROUP BY departmentId
) AS dept_max ON Employee.departmentId = dept_max.departmentId
              AND Employee.salary = dept_max.max_salary;
