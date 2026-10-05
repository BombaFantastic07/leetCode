SELECT r.name AS Employee
FROM Employee l
INNER JOIN Employee r
    ON l.id = r.managerId
WHERE r.salary > l.salary;