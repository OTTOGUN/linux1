/*
# 设置方法：在用户主目录”~”下的隐藏文件 “.bashrc”中添加自己想要的环境变量

# 步骤示例：
# 1.打开配置文件，并按 i ，进入编辑模式
        vi ~/.bashrc
# 2.在配置文件末尾添加环境变量
export 环境变量名(一般大写)="值"
# 3.使配置文件立即生效
source ~/.bashrc

# 注意：
# 系统中可能存在两个文件，.bashrc和.bash_profile（有些系统中只有其中一个）
# 原则上来说设置此类环境变量时在这两个文件任意一个里面添加都是可以的。二者设置大致相同
# ~/.bash_profile 是交互式login方式进入bash shell运行。即 .bash_profile 只会在用户登录的时候读取一次
# ~/.bashrc 是交互式non-login方式进入bash shell运行。即 .bashrc 在每次打开终端进行一次新的会话时都会读取

# 查看隐藏文件（.XXX）：
# 方式1：命令 ls -al
# 方式2：命令 echo .*
*/
