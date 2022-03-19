# 0x0D. SQL - Introduction
This repository contains sql files
# Learning Objectives
* What's a database
* What's a relational database
* What does SQL stand for
* What's MySQL
* How to create a database in MySQL
* What does  DDL and DML stand for
* How to **CREATE** or **ALTER** a table
* How to **SELECT** data from a table
* How to **INSERT**, **UPDATE** or **DELETE** data
* What are subqueries
* How to use MySQL functions


# Concepts
# MySQL - SQL
## What is a database?
A database is a systematic collection of data. Since the data in a database is organized it makes data
management easy.
## What is a relational database?
A relational database is a type of database that stores and provides access to data points that are rel>
to one another
## SQL
Structure Query Language
## MySQL (DBMS)
Database Management System

## What is a database management system (DBMS)?
Database management system is a collection of programs which enables the users to access database, mani>
data, & help in representation of data.

## Types of DBMS:
* Navigational
* Relational
* SQL
* Object oriented

## Types of JOINS
* Inner Join
`SELECT <columna_1> , <columna_2>,  <columna_3> ... <columna_n> 
FROM Tabla_A A
INNER JOIN Tabla_B B
ON A.pk = B.pk`
* Left Join
`SELECT <columna_1> , <columna_2>,  <columna_3> ... <columna_n> 
FROM Tabla_A A
LEFT JOIN Tabla_B B
ON A.pk = B.pk`
* Right Join
`SELECT <columna_1> , <columna_2>,  <columna_3> ... <columna_n>
FROM Tabla_A A
RIGHT JOIN Tabla_B B
ON A.pk = B.pk`
* Outer Join
`SELECT <columna_1> , <columna_2>,  <columna_3> ... <columna_n>
FROM Tabla_A A
FULL OUTER JOIN Tabla_B B
ON A.pk = B.pk`
* Left excluding join
`SELECT <columna_1> , <columna_2>,  <columna_3> ... <columna_n>
FROM Tabla_A A
LEFT JOIN Tabla_B B
ON A.pk = B.pk
WHERE B.pk IS NULL`
* Right Excluding join
`SELECT <columna_1> , <columna_2>,  <columna_3> ... <columna_n>
FROM Tabla_A A
RIGHT JOIN Tabla_B B
ON A.pk = B.pk
WHERE A.pk IS NULL`
* Outer excluding join
`SELECT <select_list>
FROM Table_A A
FULL OUTER JOIN Table_B B
ON A.Key = B.Key
WHERE A.Key IS NULL OR B.Key IS NULL`
