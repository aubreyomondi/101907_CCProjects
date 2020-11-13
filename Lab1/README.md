# CC Projects


Implement a simple lexical analyzer
(languages C or C++) 

# Features
  - The generated scanner can be used to scan config files.

Properties
  - db
  - port


## Requirements
* Lex
* gcc


### Valid config.yaml file
```sh
  db: mysql
  port: 3306
```

- db - name syntax OK {name} - Syntax error on line {lineno}, {error} 
-  port - port syntax OK {port} - Syntax error on line {lineno},  {error} 


## Run scripts

```sh
$ make
```