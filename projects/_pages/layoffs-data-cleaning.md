---
layout: default
title: "SQL Data Cleaning Project"
permalink: /projects/layoffs-data-cleaning/
---

## Overview
Cleaned a real-world layoffs dataset using MySQL.

## Skills Used
- SQL
- MySQL
- Data Cleaning
- Window Functions

## Sample Query

```sql
DELETE
FROM layoffs_staging2
WHERE row_num > 1;
```