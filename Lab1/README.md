# Lab 1

Implement a simple lexical analyzer
(languages C or C++) 

*Generated a scanner that can be used to scan config files.*

Config files properties:
- db
- port


## Requirements
- Lex
- gcc


### Example of a valid config.yaml file
```sh
  db: mysql
  port: 3306
```

Configuration - Test Success - Test Fail:
- db - name syntax OK {name} - Syntax error on line {lineno}, {error} 
-  port - port syntax OK {port} - Syntax error on line {lineno},  {error} 


## Run scripts

```sh
$ make
```