# mysql （https://www.cnblogs.com/sfencs-hcy/p/9769505.html）

- my.ini 

  ```
  [mysql]
  # 设置mysql客户端默认字符集
  default-character-set=utf8
  [mysqld]
  #设置3306端口
  bind-address = 0.0.0.0
  port = 3306
  skip_grant_tables
  # 设置mysql的安装目录
  basedir=D:\\Applications\\mysql-8.0.21-winx64
  # 设置mysql数据库的数据的存放目录
  datadir=D:\\Applications\\mysql-8.0.21-winx64\\data
  # 允许最大连接数
  max_connections=200
  # 服务端使用的字符集默认为8比特编码的latin1字符集
  character-set-server=utf8
  # 创建新表时将使用的默认存储引擎
  default-storage-engine=INNODB
  ```

- mysqld --initialize --console 
  
  - 记住密码 
- mysqld --install mysql 
- net start mysql 
- mysql -uroot -p 
  
  - 密码 
- 改密码
- ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password BY '新密码'; 