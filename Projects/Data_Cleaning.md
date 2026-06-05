---
layout: "post"
title: "SQL Data Cleaning Project"
permalink: /projects/layoffs-data-cleaning/
---
<p> <a href="https://github.com/rodsalazar324-commits/datasql-data-cleaning-project" target="_blank"> View on GitHub </a> </p> 

## Overview

Cleaned a real-world layoffs dataset using MySQL.

### Skills Used

- SQL
- MySQL
- Data Cleaning
- Window Functions

### Key Tasks

- Removed duplicate records
- Standardized text values
- Converted dates
- Handled missing values
- Removed unusable records

### Sample Query

```sql
DELETE
FROM layoffs_staging2
WHERE row_num > 1;
```

