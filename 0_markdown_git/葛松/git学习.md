#Git 学习
-----
##基本指令

###1.创建版本库
* `mkdir < file >`  用于创建一个版本库
* `cd < path >`进入某一目录
* `pwd` 显示当前目录
* `git init`将目录变为Git可以管理的仓库  

###2.修改管理

* `git add < file >`将文件添加到缓存区  
	**attention:**file 文件可以是多个，即可以同时添加多个文件到缓存区
* `git commit -m "xxxx"`将修改提交到仓库   
	**attention:**`"xxx"`不可缺少，最好对修改做出一些便于判断的描述
* `git status`可以查看当前仓库的状态，如文件修改情况等
* `git diff < file >`查看文件的修改信息，如具体修改、修改时间等
* `git log`用于显示从最近到最近到最远的提交日志，可以通过加上 `--pretty=oneline`参数来精简（同时可以查看版本号）
* `git reset --hard HEAD^(或者HEAD^^,再或者HEAD~number)`来回退到上一个（或者上2个，再或者上number个）版本
* `git reset --hard commit id`当你后悔了进行版本回退后用来到达某一个特定的版本（即id对应的版本）
* `git reflog`用于显示你的每一次命令，便于查询版本号并进行上述撤销操作
* `git diff HEAD --< file >`查看文件在工作区和版本库中最新版本的区别
* `git checkout --< file >`丢弃工作区的修改（在add和commit之前），其实本质上是用版本库里的版本替换工作区的版本
* `git reset HEAD < file >`把暂存区的修改退回到工作区，结合上步，可以撤销修改
* `cat < file >`查看文件内容
* `git rm < file >`从版本库中删除文件  

###3.远程仓库
* `ssh-keygen -t rsa -C "youremail@example.com"`创建SSH Key,如果一切顺利的话，可以在用户主目录里找到.ssh目录，里面有id_rsa和id_rsa.pub两个文件，这两个就是SSH Key的秘钥对，id_rsa是私钥，不能泄露出去，id_rsa.pub是公钥，可以放心地告诉任何人。然后可以在github中的account settings 中的添加key
* `git remote add origin + clone地址`把一个已有的本地仓库与之关联。然后就可以通过`git push origin master`来讲本地仓库内容推送到远程（第一次push时需要在 push 后加-u参数）
* `git clone + clone地址`也可以先创建云端仓库，再讲将其克隆到本地

-----

* `git checkout`命令加上-b参数表示创建并切换分支
* `git merge dev`合并dev分支到当前分支
* `git branch -d dev`删除分支dev
* `git stash`把当前工作现场“储藏”起来，等以后恢复现场后继续工作
* `git stash list`查看"工作现场"
* `git stash pop`直接恢复工作区
* `git stash apply` + `git stash drop`恢复特定工作区（stash@{num}）



##重要概念
1. 每次`git add`后才将修改提交到缓存区。未add的修改在commit时不会被保存
