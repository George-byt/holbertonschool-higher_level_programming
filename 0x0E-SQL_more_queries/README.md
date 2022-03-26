# 0x0E-SQL_more_queries

# Learning Objectives
* How to create a new MySQL user
* How to manage privileges for a user to a database or table
* What’s a `PRIMARY KEY`
* What’s a `FOREIGN KEY`
* How to use `NOT NULL` and `UNIQUE` constraints
* How to retrieve datas from multiple tables in one request
* What are subqueries
* What are `JOIN` and `UNION`

| **STATEMENTS** | |
| ------------- | ------------- |
| `CREATE USER IF NOT EXISTS 'user_name'@'localhost' IDENTIFIED BY 'password';` | Creates a new row in the mysql.user system table |
|`GRANT ALL PRIVILEGES ON *.* TO 'user_name'@'localhost'`|This statement assigns all privileges to MySQL server user.|
| `SHOW GRANTS FOR user_name@localhost;` | Display privileges for the named user, and does not include mandatory roles |
