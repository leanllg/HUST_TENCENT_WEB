# GitHub笔记--by杨俊祎

## 基本操作

```
$ mkdir learngit
```

用于创建目录

```
$ cd learngit
```

用于切换到learngit目录

```
$ pwd
```

用于显示当前目录的位置

```
$ git init
```

用于将目录变为git可管理的仓库

```
$ git add readme.txt
```

用于将readme.txt文件添加到暂存区

```
$ git commit -m "wrote a readme file"
```

用于提交（“wrote a readme file”相当于注释）

```
$ git status
```

用于查看仓库的状态

```
$ git diff readme.txt 
```

用于查看readme.txt做过什么改动

```
$ git log
```

查看提交日志

```
$ git log --pretty=oneline
```

简单版的查看日志，只有commit id 和对提交的说明

```
$ cat readme.txt
```

对readme.txt的阅读

## 版本退回

```
$ git reset --hard HEAD^
```

退回上一版本

```
$ git reset --hard 3628164
```

回到某一版本号

```
$ git reflog
```

记录每一次命令

## 工作区和暂存区

- 工作区：电脑中的一个目录（如learngit）
- add的内容暂存在暂存区中

## 撤销修改

```
$ git checkout -- readme.txt
```

把readme.txt在工作区的修改全部撤销

1. readme.txt修改后还没放到暂存区，撤销修改后就恢复到和版本库一样的状态
2. readme.txt添加到暂存区后，若又有修改，撤销修改就是回到添加到暂存区后的状态。

> 总之，就是让这个文件回到最近一次`git commit`或`git add`时的状态。

```
$ git reset HEAD readme.txt
```

将暂存区的修改放回工作区

## 删除文件

```
$ rm test.txt
```

用于删除工作区文件

```
$ git commit -m "remove test.txt"
```

确定从版本库中删除此文件

```
$ git checkout -- test.txt
```

用版本库里的版本代替工作区的版本

## 添加远程库

- 在GitHub上建立一个仓库
- $ git remote add origin git@github.com:michaelliao/learngit.git

添加一个叫做origin的远程库（michaelliao/learngit对于我来说是[LLGZONE](https://github.com/LLGZONE)/**HUST_TENCENT_WEB** ）

- $ git push -u origin master

将本地库的所有内容传到远程库上（对我来说，master分支改成杨俊祎分支）

- 此后要在提交，$ git push origin master

## 从远程库克隆

```
$ git clone git@github.com:michaelliao/gitskills.git
```

直接从所给的地址克隆

## 创建与合并分支

```
$ git checkout -b dev
```

创建并切换到dev分支

```
$ git branch
```

查看当前分支

```
$ git checkout dev
```

切换到分支dev

```
$ git branch dev
```

创建分支dev

```
$ git merge dev
```

将dev分支合并到当前分支上

```
$ git branch -d dev
```

删除dev分支

## 解决冲突

当无法快速合并时（比如两个分支为master和feature1，当前在master），在手动修改文件后，在add并且commit就合并了

```
$ git log --graph --pretty=oneline --abbrev-commit
```

查看分支的合并情况

```
$ git branch -d feature1
```

删掉不要的分支就好了

```
$ git merge --no-ff -m "merge with no-ff" dev
```

禁用Fast forward，合并且创建一个新的commit

## 修复bug

```
$ git stash
```

把正在进行的分支储藏

区别的分支进行修复

```
$ git stash pop
```

恢复的同时删除stash内容

$ git stash apply用于恢复（但不删除）

$   git stash drop 用于删除

- 强行删除：$ git branch -D feature-vulcan

## 多人协作

```
$ git remote
```

查看远程库信息

```
$ git remote -v
```

查看详细信息

```
$ git push origin master
```

推送本地分支到远程库

```
$ git branch --set-upstream dev origin/dev
```

设置本地分支与远程分支的链接

```
$ git pull
```





