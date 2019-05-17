#ifndef QUERIES_H
#define QUERIES_H

#define COUNTRIES "create table Countries(\
c_id INT NOT NULL primary key AUTOINCREMENT, \
c_name VARCHAR(255)"

#define TYPES_OF_FLOWERS "create table TypesOfFlowers(\
t_id INT NOT NULL primary key AUTOINCREMENT,\
t_name VARCHAR(255)"

#define FLOWERS "create table Flowers( \
id INT NOT NULL primary key AUTOINCREMENT, \
name VARCHAR(255)"


#endif // QUERIES_H
